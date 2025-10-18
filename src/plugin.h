// Copyright (c) 2023-2025 Manuel Schneider

#pragma once
#include <albert/extensionplugin.h>
#include <albert/rankedqueryhandler.h>

class Plugin : public albert::ExtensionPlugin,
               public albert::RankedQueryHandler
{
    ALBERT_PLUGIN

public:
    QString defaultTrigger() const override;
    std::vector<albert::RankItem> rankItems(albert::QueryContext &) override;
};
