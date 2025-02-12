// SPDX-FileCopyrightText: 2019-2024 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: CC-BY-NC-ND-4.0

#pragma once

#include "opengl_context_egl.h"

class OpenGLContextEGLXlib final : public OpenGLContextEGL
{
public:
  OpenGLContextEGLXlib();
  ~OpenGLContextEGLXlib() override;

  static std::unique_ptr<OpenGLContext> Create(WindowInfo& wi, SurfaceHandle* surface,
                                               std::span<const Version> versions_to_try, Error* error);

  std::unique_ptr<OpenGLContext> CreateSharedContext(WindowInfo& wi, SurfaceHandle* surface, Error* error) override;

protected:
  EGLDisplay GetPlatformDisplay(const WindowInfo& wi, Error* error) override;
  EGLSurface CreatePlatformSurface(EGLConfig config, const WindowInfo& wi, Error* error) override;
};
