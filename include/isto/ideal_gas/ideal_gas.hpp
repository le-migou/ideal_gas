#pragma once

    namespace 
isto::ideal_gas 
{

    namespace
detail
{
    
} // namespace detail

    constexpr auto 
pressure (
      auto const& density
    , auto const& temperature
    , auto const& specific_gas_constant
){
  return density * specific_gas_constant * temperature;
}
} // namespace isto::ideal_gas
