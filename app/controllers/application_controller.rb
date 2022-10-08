class ApplicationController < ActionController::Base
  include Pagy::Backend
  before_action :turbo_frame_request_variant
  before_action :set_current_user
  before_action :set_should_render_alerts

  private

  def turbo_frame_request_variant
    request.variant = :turbo_frame if turbo_frame_request?
  end

  def set_current_user
    Current.user = current_user
  end

  def set_should_render_alerts
    @should_render_alerts = true
  end
end
