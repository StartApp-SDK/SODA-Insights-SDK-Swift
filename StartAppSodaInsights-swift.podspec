# StartAppSodaInsights-swift

Pod::Spec.new do |s|
  s.name                    = 'StartAppSodaInsights-swift'
  s.version                 = '2.3.0'
  s.summary                 = 'StartApp Soda Insights SDK for iOS (supports the latest Swift version)'

  s.description             = <<-DESC
                          SODA is a social data platform that allows apps to contribute a piece of the user data puzzle 
                          and receive the complete user picture in return. 
                          The data puzzle pieces that we receive from all SODA partners 
                          are combined with StartApp's proprietary data and analyzed in real time. 
                          SODA will help you fill in data gaps and view comprehensive social data insights of your users.
                              DESC

  s.homepage                = 'https://github.com/StartApp-SDK/SODA-Insights-SDK-Swift/'
  s.license                 = { :type => 'Commercial', :file => 'LICENSE' }
  s.author                  = { 'StartApp SODA' => 'soda.support@startapp.com' }

  s.platform                = :ios
  s.ios.deployment_target   = '8.0'
  s.ios.vendored_frameworks = 'SodaInsightsSdk.framework', 'SodaInsightsSdkPrivate.framework'
  s.requires_arc            = true
  s.source                  = { :git => 'https://github.com/StartApp-SDK/SODA-Insights-SDK-Swift.git', :tag => s.version.to_s }
  s.swift_version           = '4.1'

end

