class RoomsController < ApplicationController
  include RoomsHelper

  before_action :authenticate_user!
  before_action :set_status

  def index
    @should_render_alerts = false
    @room = Room.new
    @joined_rooms = current_user.joined_rooms.order(last_message_at: :desc)
    @rooms = search_rooms
    current_user.update(current_room: nil)

    @users = User.all_except(current_user)
    render 'index'
  end

  def show
    @should_render_alerts = false
    @current_room = Room.find(params[:id])
    current_user.update(current_room: @current_room)

    @room = Room.new
    @rooms = search_rooms
    @joined_rooms = current_user.joined_rooms.order(last_message_at: :desc)
    @message = Message.new
    pagy_messages = @current_room.messages.includes(:user).order(created_at: :desc)
    @pagy, messages = pagy(pagy_messages, items: 10)
    @messages = messages.reverse

    @users = User.all_except(current_user)
    render 'index'
  end

  def create
    @should_render_alerts = false
    # @room = Room.create(name: params["room"]["name"])
    @room = Room.new(room_params)
    @room.save
    redirect_to @room, allow_other_host: true
  end

  def search
    @should_render_alerts = false
    @rooms = search_rooms
    respond_to do |format|
      format.turbo_stream do
        render turbo_stream: [
          turbo_stream.update('search_results',
                              partial: 'rooms/search_results',
                              locals: { rooms: @rooms })
        ]
      end
    end
  end

  def join
    @should_render_alerts = false
    @room = Room.find(params[:id])
    current_user.joined_rooms << @room
    redirect_to @room, allow_other_host: true
  end

  def leave
    @should_render_alerts = false
    @room = Room.find(params[:id])
    current_user.joined_rooms.delete(@room)
    redirect_to rooms_path
  end

  private

  def room_params
    params.require(:room).permit(:name)
  end

  def set_status
    current_user.update!(status: User.statuses[:online]) if current_user
  end
end
