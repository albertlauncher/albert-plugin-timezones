// Copyright (c) 2023-2026 Manuel Schneider

#pragma once
#include <albert/extensionplugin.h>
#include <albert/generatorqueryhandler.h>

class Plugin : public albert::ExtensionPlugin,
               public albert::GeneratorQueryHandler
{
    ALBERT_PLUGIN
public:
    QString defaultTrigger() const override;
    albert::ItemGenerator items(albert::QueryContext) override;
};
