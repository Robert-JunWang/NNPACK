#include <cstdint>

#include <fp16/values.h>


namespace fp16 {
	const uint32_t normalizedValues[1024] = {
		0x3F800000, 0x3F802000, 0x3F804000, 0x3F806000, 0x3F808000, 0x3F80A000, 0x3F80C000, 0x3F80E000,
		0x3F810000, 0x3F812000, 0x3F814000, 0x3F816000, 0x3F818000, 0x3F81A000, 0x3F81C000, 0x3F81E000,
		0x3F820000, 0x3F822000, 0x3F824000, 0x3F826000, 0x3F828000, 0x3F82A000, 0x3F82C000, 0x3F82E000,
		0x3F830000, 0x3F832000, 0x3F834000, 0x3F836000, 0x3F838000, 0x3F83A000, 0x3F83C000, 0x3F83E000,
		0x3F840000, 0x3F842000, 0x3F844000, 0x3F846000, 0x3F848000, 0x3F84A000, 0x3F84C000, 0x3F84E000,
		0x3F850000, 0x3F852000, 0x3F854000, 0x3F856000, 0x3F858000, 0x3F85A000, 0x3F85C000, 0x3F85E000,
		0x3F860000, 0x3F862000, 0x3F864000, 0x3F866000, 0x3F868000, 0x3F86A000, 0x3F86C000, 0x3F86E000,
		0x3F870000, 0x3F872000, 0x3F874000, 0x3F876000, 0x3F878000, 0x3F87A000, 0x3F87C000, 0x3F87E000,
		0x3F880000, 0x3F882000, 0x3F884000, 0x3F886000, 0x3F888000, 0x3F88A000, 0x3F88C000, 0x3F88E000,
		0x3F890000, 0x3F892000, 0x3F894000, 0x3F896000, 0x3F898000, 0x3F89A000, 0x3F89C000, 0x3F89E000,
		0x3F8A0000, 0x3F8A2000, 0x3F8A4000, 0x3F8A6000, 0x3F8A8000, 0x3F8AA000, 0x3F8AC000, 0x3F8AE000,
		0x3F8B0000, 0x3F8B2000, 0x3F8B4000, 0x3F8B6000, 0x3F8B8000, 0x3F8BA000, 0x3F8BC000, 0x3F8BE000,
		0x3F8C0000, 0x3F8C2000, 0x3F8C4000, 0x3F8C6000, 0x3F8C8000, 0x3F8CA000, 0x3F8CC000, 0x3F8CE000,
		0x3F8D0000, 0x3F8D2000, 0x3F8D4000, 0x3F8D6000, 0x3F8D8000, 0x3F8DA000, 0x3F8DC000, 0x3F8DE000,
		0x3F8E0000, 0x3F8E2000, 0x3F8E4000, 0x3F8E6000, 0x3F8E8000, 0x3F8EA000, 0x3F8EC000, 0x3F8EE000,
		0x3F8F0000, 0x3F8F2000, 0x3F8F4000, 0x3F8F6000, 0x3F8F8000, 0x3F8FA000, 0x3F8FC000, 0x3F8FE000,
		0x3F900000, 0x3F902000, 0x3F904000, 0x3F906000, 0x3F908000, 0x3F90A000, 0x3F90C000, 0x3F90E000,
		0x3F910000, 0x3F912000, 0x3F914000, 0x3F916000, 0x3F918000, 0x3F91A000, 0x3F91C000, 0x3F91E000,
		0x3F920000, 0x3F922000, 0x3F924000, 0x3F926000, 0x3F928000, 0x3F92A000, 0x3F92C000, 0x3F92E000,
		0x3F930000, 0x3F932000, 0x3F934000, 0x3F936000, 0x3F938000, 0x3F93A000, 0x3F93C000, 0x3F93E000,
		0x3F940000, 0x3F942000, 0x3F944000, 0x3F946000, 0x3F948000, 0x3F94A000, 0x3F94C000, 0x3F94E000,
		0x3F950000, 0x3F952000, 0x3F954000, 0x3F956000, 0x3F958000, 0x3F95A000, 0x3F95C000, 0x3F95E000,
		0x3F960000, 0x3F962000, 0x3F964000, 0x3F966000, 0x3F968000, 0x3F96A000, 0x3F96C000, 0x3F96E000,
		0x3F970000, 0x3F972000, 0x3F974000, 0x3F976000, 0x3F978000, 0x3F97A000, 0x3F97C000, 0x3F97E000,
		0x3F980000, 0x3F982000, 0x3F984000, 0x3F986000, 0x3F988000, 0x3F98A000, 0x3F98C000, 0x3F98E000,
		0x3F990000, 0x3F992000, 0x3F994000, 0x3F996000, 0x3F998000, 0x3F99A000, 0x3F99C000, 0x3F99E000,
		0x3F9A0000, 0x3F9A2000, 0x3F9A4000, 0x3F9A6000, 0x3F9A8000, 0x3F9AA000, 0x3F9AC000, 0x3F9AE000,
		0x3F9B0000, 0x3F9B2000, 0x3F9B4000, 0x3F9B6000, 0x3F9B8000, 0x3F9BA000, 0x3F9BC000, 0x3F9BE000,
		0x3F9C0000, 0x3F9C2000, 0x3F9C4000, 0x3F9C6000, 0x3F9C8000, 0x3F9CA000, 0x3F9CC000, 0x3F9CE000,
		0x3F9D0000, 0x3F9D2000, 0x3F9D4000, 0x3F9D6000, 0x3F9D8000, 0x3F9DA000, 0x3F9DC000, 0x3F9DE000,
		0x3F9E0000, 0x3F9E2000, 0x3F9E4000, 0x3F9E6000, 0x3F9E8000, 0x3F9EA000, 0x3F9EC000, 0x3F9EE000,
		0x3F9F0000, 0x3F9F2000, 0x3F9F4000, 0x3F9F6000, 0x3F9F8000, 0x3F9FA000, 0x3F9FC000, 0x3F9FE000,
		0x3FA00000, 0x3FA02000, 0x3FA04000, 0x3FA06000, 0x3FA08000, 0x3FA0A000, 0x3FA0C000, 0x3FA0E000,
		0x3FA10000, 0x3FA12000, 0x3FA14000, 0x3FA16000, 0x3FA18000, 0x3FA1A000, 0x3FA1C000, 0x3FA1E000,
		0x3FA20000, 0x3FA22000, 0x3FA24000, 0x3FA26000, 0x3FA28000, 0x3FA2A000, 0x3FA2C000, 0x3FA2E000,
		0x3FA30000, 0x3FA32000, 0x3FA34000, 0x3FA36000, 0x3FA38000, 0x3FA3A000, 0x3FA3C000, 0x3FA3E000,
		0x3FA40000, 0x3FA42000, 0x3FA44000, 0x3FA46000, 0x3FA48000, 0x3FA4A000, 0x3FA4C000, 0x3FA4E000,
		0x3FA50000, 0x3FA52000, 0x3FA54000, 0x3FA56000, 0x3FA58000, 0x3FA5A000, 0x3FA5C000, 0x3FA5E000,
		0x3FA60000, 0x3FA62000, 0x3FA64000, 0x3FA66000, 0x3FA68000, 0x3FA6A000, 0x3FA6C000, 0x3FA6E000,
		0x3FA70000, 0x3FA72000, 0x3FA74000, 0x3FA76000, 0x3FA78000, 0x3FA7A000, 0x3FA7C000, 0x3FA7E000,
		0x3FA80000, 0x3FA82000, 0x3FA84000, 0x3FA86000, 0x3FA88000, 0x3FA8A000, 0x3FA8C000, 0x3FA8E000,
		0x3FA90000, 0x3FA92000, 0x3FA94000, 0x3FA96000, 0x3FA98000, 0x3FA9A000, 0x3FA9C000, 0x3FA9E000,
		0x3FAA0000, 0x3FAA2000, 0x3FAA4000, 0x3FAA6000, 0x3FAA8000, 0x3FAAA000, 0x3FAAC000, 0x3FAAE000,
		0x3FAB0000, 0x3FAB2000, 0x3FAB4000, 0x3FAB6000, 0x3FAB8000, 0x3FABA000, 0x3FABC000, 0x3FABE000,
		0x3FAC0000, 0x3FAC2000, 0x3FAC4000, 0x3FAC6000, 0x3FAC8000, 0x3FACA000, 0x3FACC000, 0x3FACE000,
		0x3FAD0000, 0x3FAD2000, 0x3FAD4000, 0x3FAD6000, 0x3FAD8000, 0x3FADA000, 0x3FADC000, 0x3FADE000,
		0x3FAE0000, 0x3FAE2000, 0x3FAE4000, 0x3FAE6000, 0x3FAE8000, 0x3FAEA000, 0x3FAEC000, 0x3FAEE000,
		0x3FAF0000, 0x3FAF2000, 0x3FAF4000, 0x3FAF6000, 0x3FAF8000, 0x3FAFA000, 0x3FAFC000, 0x3FAFE000,
		0x3FB00000, 0x3FB02000, 0x3FB04000, 0x3FB06000, 0x3FB08000, 0x3FB0A000, 0x3FB0C000, 0x3FB0E000,
		0x3FB10000, 0x3FB12000, 0x3FB14000, 0x3FB16000, 0x3FB18000, 0x3FB1A000, 0x3FB1C000, 0x3FB1E000,
		0x3FB20000, 0x3FB22000, 0x3FB24000, 0x3FB26000, 0x3FB28000, 0x3FB2A000, 0x3FB2C000, 0x3FB2E000,
		0x3FB30000, 0x3FB32000, 0x3FB34000, 0x3FB36000, 0x3FB38000, 0x3FB3A000, 0x3FB3C000, 0x3FB3E000,
		0x3FB40000, 0x3FB42000, 0x3FB44000, 0x3FB46000, 0x3FB48000, 0x3FB4A000, 0x3FB4C000, 0x3FB4E000,
		0x3FB50000, 0x3FB52000, 0x3FB54000, 0x3FB56000, 0x3FB58000, 0x3FB5A000, 0x3FB5C000, 0x3FB5E000,
		0x3FB60000, 0x3FB62000, 0x3FB64000, 0x3FB66000, 0x3FB68000, 0x3FB6A000, 0x3FB6C000, 0x3FB6E000,
		0x3FB70000, 0x3FB72000, 0x3FB74000, 0x3FB76000, 0x3FB78000, 0x3FB7A000, 0x3FB7C000, 0x3FB7E000,
		0x3FB80000, 0x3FB82000, 0x3FB84000, 0x3FB86000, 0x3FB88000, 0x3FB8A000, 0x3FB8C000, 0x3FB8E000,
		0x3FB90000, 0x3FB92000, 0x3FB94000, 0x3FB96000, 0x3FB98000, 0x3FB9A000, 0x3FB9C000, 0x3FB9E000,
		0x3FBA0000, 0x3FBA2000, 0x3FBA4000, 0x3FBA6000, 0x3FBA8000, 0x3FBAA000, 0x3FBAC000, 0x3FBAE000,
		0x3FBB0000, 0x3FBB2000, 0x3FBB4000, 0x3FBB6000, 0x3FBB8000, 0x3FBBA000, 0x3FBBC000, 0x3FBBE000,
		0x3FBC0000, 0x3FBC2000, 0x3FBC4000, 0x3FBC6000, 0x3FBC8000, 0x3FBCA000, 0x3FBCC000, 0x3FBCE000,
		0x3FBD0000, 0x3FBD2000, 0x3FBD4000, 0x3FBD6000, 0x3FBD8000, 0x3FBDA000, 0x3FBDC000, 0x3FBDE000,
		0x3FBE0000, 0x3FBE2000, 0x3FBE4000, 0x3FBE6000, 0x3FBE8000, 0x3FBEA000, 0x3FBEC000, 0x3FBEE000,
		0x3FBF0000, 0x3FBF2000, 0x3FBF4000, 0x3FBF6000, 0x3FBF8000, 0x3FBFA000, 0x3FBFC000, 0x3FBFE000,
		0x3FC00000, 0x3FC02000, 0x3FC04000, 0x3FC06000, 0x3FC08000, 0x3FC0A000, 0x3FC0C000, 0x3FC0E000,
		0x3FC10000, 0x3FC12000, 0x3FC14000, 0x3FC16000, 0x3FC18000, 0x3FC1A000, 0x3FC1C000, 0x3FC1E000,
		0x3FC20000, 0x3FC22000, 0x3FC24000, 0x3FC26000, 0x3FC28000, 0x3FC2A000, 0x3FC2C000, 0x3FC2E000,
		0x3FC30000, 0x3FC32000, 0x3FC34000, 0x3FC36000, 0x3FC38000, 0x3FC3A000, 0x3FC3C000, 0x3FC3E000,
		0x3FC40000, 0x3FC42000, 0x3FC44000, 0x3FC46000, 0x3FC48000, 0x3FC4A000, 0x3FC4C000, 0x3FC4E000,
		0x3FC50000, 0x3FC52000, 0x3FC54000, 0x3FC56000, 0x3FC58000, 0x3FC5A000, 0x3FC5C000, 0x3FC5E000,
		0x3FC60000, 0x3FC62000, 0x3FC64000, 0x3FC66000, 0x3FC68000, 0x3FC6A000, 0x3FC6C000, 0x3FC6E000,
		0x3FC70000, 0x3FC72000, 0x3FC74000, 0x3FC76000, 0x3FC78000, 0x3FC7A000, 0x3FC7C000, 0x3FC7E000,
		0x3FC80000, 0x3FC82000, 0x3FC84000, 0x3FC86000, 0x3FC88000, 0x3FC8A000, 0x3FC8C000, 0x3FC8E000,
		0x3FC90000, 0x3FC92000, 0x3FC94000, 0x3FC96000, 0x3FC98000, 0x3FC9A000, 0x3FC9C000, 0x3FC9E000,
		0x3FCA0000, 0x3FCA2000, 0x3FCA4000, 0x3FCA6000, 0x3FCA8000, 0x3FCAA000, 0x3FCAC000, 0x3FCAE000,
		0x3FCB0000, 0x3FCB2000, 0x3FCB4000, 0x3FCB6000, 0x3FCB8000, 0x3FCBA000, 0x3FCBC000, 0x3FCBE000,
		0x3FCC0000, 0x3FCC2000, 0x3FCC4000, 0x3FCC6000, 0x3FCC8000, 0x3FCCA000, 0x3FCCC000, 0x3FCCE000,
		0x3FCD0000, 0x3FCD2000, 0x3FCD4000, 0x3FCD6000, 0x3FCD8000, 0x3FCDA000, 0x3FCDC000, 0x3FCDE000,
		0x3FCE0000, 0x3FCE2000, 0x3FCE4000, 0x3FCE6000, 0x3FCE8000, 0x3FCEA000, 0x3FCEC000, 0x3FCEE000,
		0x3FCF0000, 0x3FCF2000, 0x3FCF4000, 0x3FCF6000, 0x3FCF8000, 0x3FCFA000, 0x3FCFC000, 0x3FCFE000,
		0x3FD00000, 0x3FD02000, 0x3FD04000, 0x3FD06000, 0x3FD08000, 0x3FD0A000, 0x3FD0C000, 0x3FD0E000,
		0x3FD10000, 0x3FD12000, 0x3FD14000, 0x3FD16000, 0x3FD18000, 0x3FD1A000, 0x3FD1C000, 0x3FD1E000,
		0x3FD20000, 0x3FD22000, 0x3FD24000, 0x3FD26000, 0x3FD28000, 0x3FD2A000, 0x3FD2C000, 0x3FD2E000,
		0x3FD30000, 0x3FD32000, 0x3FD34000, 0x3FD36000, 0x3FD38000, 0x3FD3A000, 0x3FD3C000, 0x3FD3E000,
		0x3FD40000, 0x3FD42000, 0x3FD44000, 0x3FD46000, 0x3FD48000, 0x3FD4A000, 0x3FD4C000, 0x3FD4E000,
		0x3FD50000, 0x3FD52000, 0x3FD54000, 0x3FD56000, 0x3FD58000, 0x3FD5A000, 0x3FD5C000, 0x3FD5E000,
		0x3FD60000, 0x3FD62000, 0x3FD64000, 0x3FD66000, 0x3FD68000, 0x3FD6A000, 0x3FD6C000, 0x3FD6E000,
		0x3FD70000, 0x3FD72000, 0x3FD74000, 0x3FD76000, 0x3FD78000, 0x3FD7A000, 0x3FD7C000, 0x3FD7E000,
		0x3FD80000, 0x3FD82000, 0x3FD84000, 0x3FD86000, 0x3FD88000, 0x3FD8A000, 0x3FD8C000, 0x3FD8E000,
		0x3FD90000, 0x3FD92000, 0x3FD94000, 0x3FD96000, 0x3FD98000, 0x3FD9A000, 0x3FD9C000, 0x3FD9E000,
		0x3FDA0000, 0x3FDA2000, 0x3FDA4000, 0x3FDA6000, 0x3FDA8000, 0x3FDAA000, 0x3FDAC000, 0x3FDAE000,
		0x3FDB0000, 0x3FDB2000, 0x3FDB4000, 0x3FDB6000, 0x3FDB8000, 0x3FDBA000, 0x3FDBC000, 0x3FDBE000,
		0x3FDC0000, 0x3FDC2000, 0x3FDC4000, 0x3FDC6000, 0x3FDC8000, 0x3FDCA000, 0x3FDCC000, 0x3FDCE000,
		0x3FDD0000, 0x3FDD2000, 0x3FDD4000, 0x3FDD6000, 0x3FDD8000, 0x3FDDA000, 0x3FDDC000, 0x3FDDE000,
		0x3FDE0000, 0x3FDE2000, 0x3FDE4000, 0x3FDE6000, 0x3FDE8000, 0x3FDEA000, 0x3FDEC000, 0x3FDEE000,
		0x3FDF0000, 0x3FDF2000, 0x3FDF4000, 0x3FDF6000, 0x3FDF8000, 0x3FDFA000, 0x3FDFC000, 0x3FDFE000,
		0x3FE00000, 0x3FE02000, 0x3FE04000, 0x3FE06000, 0x3FE08000, 0x3FE0A000, 0x3FE0C000, 0x3FE0E000,
		0x3FE10000, 0x3FE12000, 0x3FE14000, 0x3FE16000, 0x3FE18000, 0x3FE1A000, 0x3FE1C000, 0x3FE1E000,
		0x3FE20000, 0x3FE22000, 0x3FE24000, 0x3FE26000, 0x3FE28000, 0x3FE2A000, 0x3FE2C000, 0x3FE2E000,
		0x3FE30000, 0x3FE32000, 0x3FE34000, 0x3FE36000, 0x3FE38000, 0x3FE3A000, 0x3FE3C000, 0x3FE3E000,
		0x3FE40000, 0x3FE42000, 0x3FE44000, 0x3FE46000, 0x3FE48000, 0x3FE4A000, 0x3FE4C000, 0x3FE4E000,
		0x3FE50000, 0x3FE52000, 0x3FE54000, 0x3FE56000, 0x3FE58000, 0x3FE5A000, 0x3FE5C000, 0x3FE5E000,
		0x3FE60000, 0x3FE62000, 0x3FE64000, 0x3FE66000, 0x3FE68000, 0x3FE6A000, 0x3FE6C000, 0x3FE6E000,
		0x3FE70000, 0x3FE72000, 0x3FE74000, 0x3FE76000, 0x3FE78000, 0x3FE7A000, 0x3FE7C000, 0x3FE7E000,
		0x3FE80000, 0x3FE82000, 0x3FE84000, 0x3FE86000, 0x3FE88000, 0x3FE8A000, 0x3FE8C000, 0x3FE8E000,
		0x3FE90000, 0x3FE92000, 0x3FE94000, 0x3FE96000, 0x3FE98000, 0x3FE9A000, 0x3FE9C000, 0x3FE9E000,
		0x3FEA0000, 0x3FEA2000, 0x3FEA4000, 0x3FEA6000, 0x3FEA8000, 0x3FEAA000, 0x3FEAC000, 0x3FEAE000,
		0x3FEB0000, 0x3FEB2000, 0x3FEB4000, 0x3FEB6000, 0x3FEB8000, 0x3FEBA000, 0x3FEBC000, 0x3FEBE000,
		0x3FEC0000, 0x3FEC2000, 0x3FEC4000, 0x3FEC6000, 0x3FEC8000, 0x3FECA000, 0x3FECC000, 0x3FECE000,
		0x3FED0000, 0x3FED2000, 0x3FED4000, 0x3FED6000, 0x3FED8000, 0x3FEDA000, 0x3FEDC000, 0x3FEDE000,
		0x3FEE0000, 0x3FEE2000, 0x3FEE4000, 0x3FEE6000, 0x3FEE8000, 0x3FEEA000, 0x3FEEC000, 0x3FEEE000,
		0x3FEF0000, 0x3FEF2000, 0x3FEF4000, 0x3FEF6000, 0x3FEF8000, 0x3FEFA000, 0x3FEFC000, 0x3FEFE000,
		0x3FF00000, 0x3FF02000, 0x3FF04000, 0x3FF06000, 0x3FF08000, 0x3FF0A000, 0x3FF0C000, 0x3FF0E000,
		0x3FF10000, 0x3FF12000, 0x3FF14000, 0x3FF16000, 0x3FF18000, 0x3FF1A000, 0x3FF1C000, 0x3FF1E000,
		0x3FF20000, 0x3FF22000, 0x3FF24000, 0x3FF26000, 0x3FF28000, 0x3FF2A000, 0x3FF2C000, 0x3FF2E000,
		0x3FF30000, 0x3FF32000, 0x3FF34000, 0x3FF36000, 0x3FF38000, 0x3FF3A000, 0x3FF3C000, 0x3FF3E000,
		0x3FF40000, 0x3FF42000, 0x3FF44000, 0x3FF46000, 0x3FF48000, 0x3FF4A000, 0x3FF4C000, 0x3FF4E000,
		0x3FF50000, 0x3FF52000, 0x3FF54000, 0x3FF56000, 0x3FF58000, 0x3FF5A000, 0x3FF5C000, 0x3FF5E000,
		0x3FF60000, 0x3FF62000, 0x3FF64000, 0x3FF66000, 0x3FF68000, 0x3FF6A000, 0x3FF6C000, 0x3FF6E000,
		0x3FF70000, 0x3FF72000, 0x3FF74000, 0x3FF76000, 0x3FF78000, 0x3FF7A000, 0x3FF7C000, 0x3FF7E000,
		0x3FF80000, 0x3FF82000, 0x3FF84000, 0x3FF86000, 0x3FF88000, 0x3FF8A000, 0x3FF8C000, 0x3FF8E000,
		0x3FF90000, 0x3FF92000, 0x3FF94000, 0x3FF96000, 0x3FF98000, 0x3FF9A000, 0x3FF9C000, 0x3FF9E000,
		0x3FFA0000, 0x3FFA2000, 0x3FFA4000, 0x3FFA6000, 0x3FFA8000, 0x3FFAA000, 0x3FFAC000, 0x3FFAE000,
		0x3FFB0000, 0x3FFB2000, 0x3FFB4000, 0x3FFB6000, 0x3FFB8000, 0x3FFBA000, 0x3FFBC000, 0x3FFBE000,
		0x3FFC0000, 0x3FFC2000, 0x3FFC4000, 0x3FFC6000, 0x3FFC8000, 0x3FFCA000, 0x3FFCC000, 0x3FFCE000,
		0x3FFD0000, 0x3FFD2000, 0x3FFD4000, 0x3FFD6000, 0x3FFD8000, 0x3FFDA000, 0x3FFDC000, 0x3FFDE000,
		0x3FFE0000, 0x3FFE2000, 0x3FFE4000, 0x3FFE6000, 0x3FFE8000, 0x3FFEA000, 0x3FFEC000, 0x3FFEE000,
		0x3FFF0000, 0x3FFF2000, 0x3FFF4000, 0x3FFF6000, 0x3FFF8000, 0x3FFFA000, 0x3FFFC000, 0x3FFFE000,
	};

	const uint32_t denormalizedValues[1024] = {
		0x00000000, 0x33800000, 0x34000000, 0x34400000, 0x34800000, 0x34A00000, 0x34C00000, 0x34E00000,
		0x35000000, 0x35100000, 0x35200000, 0x35300000, 0x35400000, 0x35500000, 0x35600000, 0x35700000,
		0x35800000, 0x35880000, 0x35900000, 0x35980000, 0x35A00000, 0x35A80000, 0x35B00000, 0x35B80000,
		0x35C00000, 0x35C80000, 0x35D00000, 0x35D80000, 0x35E00000, 0x35E80000, 0x35F00000, 0x35F80000,
		0x36000000, 0x36040000, 0x36080000, 0x360C0000, 0x36100000, 0x36140000, 0x36180000, 0x361C0000,
		0x36200000, 0x36240000, 0x36280000, 0x362C0000, 0x36300000, 0x36340000, 0x36380000, 0x363C0000,
		0x36400000, 0x36440000, 0x36480000, 0x364C0000, 0x36500000, 0x36540000, 0x36580000, 0x365C0000,
		0x36600000, 0x36640000, 0x36680000, 0x366C0000, 0x36700000, 0x36740000, 0x36780000, 0x367C0000,
		0x36800000, 0x36820000, 0x36840000, 0x36860000, 0x36880000, 0x368A0000, 0x368C0000, 0x368E0000,
		0x36900000, 0x36920000, 0x36940000, 0x36960000, 0x36980000, 0x369A0000, 0x369C0000, 0x369E0000,
		0x36A00000, 0x36A20000, 0x36A40000, 0x36A60000, 0x36A80000, 0x36AA0000, 0x36AC0000, 0x36AE0000,
		0x36B00000, 0x36B20000, 0x36B40000, 0x36B60000, 0x36B80000, 0x36BA0000, 0x36BC0000, 0x36BE0000,
		0x36C00000, 0x36C20000, 0x36C40000, 0x36C60000, 0x36C80000, 0x36CA0000, 0x36CC0000, 0x36CE0000,
		0x36D00000, 0x36D20000, 0x36D40000, 0x36D60000, 0x36D80000, 0x36DA0000, 0x36DC0000, 0x36DE0000,
		0x36E00000, 0x36E20000, 0x36E40000, 0x36E60000, 0x36E80000, 0x36EA0000, 0x36EC0000, 0x36EE0000,
		0x36F00000, 0x36F20000, 0x36F40000, 0x36F60000, 0x36F80000, 0x36FA0000, 0x36FC0000, 0x36FE0000,
		0x37000000, 0x37010000, 0x37020000, 0x37030000, 0x37040000, 0x37050000, 0x37060000, 0x37070000,
		0x37080000, 0x37090000, 0x370A0000, 0x370B0000, 0x370C0000, 0x370D0000, 0x370E0000, 0x370F0000,
		0x37100000, 0x37110000, 0x37120000, 0x37130000, 0x37140000, 0x37150000, 0x37160000, 0x37170000,
		0x37180000, 0x37190000, 0x371A0000, 0x371B0000, 0x371C0000, 0x371D0000, 0x371E0000, 0x371F0000,
		0x37200000, 0x37210000, 0x37220000, 0x37230000, 0x37240000, 0x37250000, 0x37260000, 0x37270000,
		0x37280000, 0x37290000, 0x372A0000, 0x372B0000, 0x372C0000, 0x372D0000, 0x372E0000, 0x372F0000,
		0x37300000, 0x37310000, 0x37320000, 0x37330000, 0x37340000, 0x37350000, 0x37360000, 0x37370000,
		0x37380000, 0x37390000, 0x373A0000, 0x373B0000, 0x373C0000, 0x373D0000, 0x373E0000, 0x373F0000,
		0x37400000, 0x37410000, 0x37420000, 0x37430000, 0x37440000, 0x37450000, 0x37460000, 0x37470000,
		0x37480000, 0x37490000, 0x374A0000, 0x374B0000, 0x374C0000, 0x374D0000, 0x374E0000, 0x374F0000,
		0x37500000, 0x37510000, 0x37520000, 0x37530000, 0x37540000, 0x37550000, 0x37560000, 0x37570000,
		0x37580000, 0x37590000, 0x375A0000, 0x375B0000, 0x375C0000, 0x375D0000, 0x375E0000, 0x375F0000,
		0x37600000, 0x37610000, 0x37620000, 0x37630000, 0x37640000, 0x37650000, 0x37660000, 0x37670000,
		0x37680000, 0x37690000, 0x376A0000, 0x376B0000, 0x376C0000, 0x376D0000, 0x376E0000, 0x376F0000,
		0x37700000, 0x37710000, 0x37720000, 0x37730000, 0x37740000, 0x37750000, 0x37760000, 0x37770000,
		0x37780000, 0x37790000, 0x377A0000, 0x377B0000, 0x377C0000, 0x377D0000, 0x377E0000, 0x377F0000,
		0x37800000, 0x37808000, 0x37810000, 0x37818000, 0x37820000, 0x37828000, 0x37830000, 0x37838000,
		0x37840000, 0x37848000, 0x37850000, 0x37858000, 0x37860000, 0x37868000, 0x37870000, 0x37878000,
		0x37880000, 0x37888000, 0x37890000, 0x37898000, 0x378A0000, 0x378A8000, 0x378B0000, 0x378B8000,
		0x378C0000, 0x378C8000, 0x378D0000, 0x378D8000, 0x378E0000, 0x378E8000, 0x378F0000, 0x378F8000,
		0x37900000, 0x37908000, 0x37910000, 0x37918000, 0x37920000, 0x37928000, 0x37930000, 0x37938000,
		0x37940000, 0x37948000, 0x37950000, 0x37958000, 0x37960000, 0x37968000, 0x37970000, 0x37978000,
		0x37980000, 0x37988000, 0x37990000, 0x37998000, 0x379A0000, 0x379A8000, 0x379B0000, 0x379B8000,
		0x379C0000, 0x379C8000, 0x379D0000, 0x379D8000, 0x379E0000, 0x379E8000, 0x379F0000, 0x379F8000,
		0x37A00000, 0x37A08000, 0x37A10000, 0x37A18000, 0x37A20000, 0x37A28000, 0x37A30000, 0x37A38000,
		0x37A40000, 0x37A48000, 0x37A50000, 0x37A58000, 0x37A60000, 0x37A68000, 0x37A70000, 0x37A78000,
		0x37A80000, 0x37A88000, 0x37A90000, 0x37A98000, 0x37AA0000, 0x37AA8000, 0x37AB0000, 0x37AB8000,
		0x37AC0000, 0x37AC8000, 0x37AD0000, 0x37AD8000, 0x37AE0000, 0x37AE8000, 0x37AF0000, 0x37AF8000,
		0x37B00000, 0x37B08000, 0x37B10000, 0x37B18000, 0x37B20000, 0x37B28000, 0x37B30000, 0x37B38000,
		0x37B40000, 0x37B48000, 0x37B50000, 0x37B58000, 0x37B60000, 0x37B68000, 0x37B70000, 0x37B78000,
		0x37B80000, 0x37B88000, 0x37B90000, 0x37B98000, 0x37BA0000, 0x37BA8000, 0x37BB0000, 0x37BB8000,
		0x37BC0000, 0x37BC8000, 0x37BD0000, 0x37BD8000, 0x37BE0000, 0x37BE8000, 0x37BF0000, 0x37BF8000,
		0x37C00000, 0x37C08000, 0x37C10000, 0x37C18000, 0x37C20000, 0x37C28000, 0x37C30000, 0x37C38000,
		0x37C40000, 0x37C48000, 0x37C50000, 0x37C58000, 0x37C60000, 0x37C68000, 0x37C70000, 0x37C78000,
		0x37C80000, 0x37C88000, 0x37C90000, 0x37C98000, 0x37CA0000, 0x37CA8000, 0x37CB0000, 0x37CB8000,
		0x37CC0000, 0x37CC8000, 0x37CD0000, 0x37CD8000, 0x37CE0000, 0x37CE8000, 0x37CF0000, 0x37CF8000,
		0x37D00000, 0x37D08000, 0x37D10000, 0x37D18000, 0x37D20000, 0x37D28000, 0x37D30000, 0x37D38000,
		0x37D40000, 0x37D48000, 0x37D50000, 0x37D58000, 0x37D60000, 0x37D68000, 0x37D70000, 0x37D78000,
		0x37D80000, 0x37D88000, 0x37D90000, 0x37D98000, 0x37DA0000, 0x37DA8000, 0x37DB0000, 0x37DB8000,
		0x37DC0000, 0x37DC8000, 0x37DD0000, 0x37DD8000, 0x37DE0000, 0x37DE8000, 0x37DF0000, 0x37DF8000,
		0x37E00000, 0x37E08000, 0x37E10000, 0x37E18000, 0x37E20000, 0x37E28000, 0x37E30000, 0x37E38000,
		0x37E40000, 0x37E48000, 0x37E50000, 0x37E58000, 0x37E60000, 0x37E68000, 0x37E70000, 0x37E78000,
		0x37E80000, 0x37E88000, 0x37E90000, 0x37E98000, 0x37EA0000, 0x37EA8000, 0x37EB0000, 0x37EB8000,
		0x37EC0000, 0x37EC8000, 0x37ED0000, 0x37ED8000, 0x37EE0000, 0x37EE8000, 0x37EF0000, 0x37EF8000,
		0x37F00000, 0x37F08000, 0x37F10000, 0x37F18000, 0x37F20000, 0x37F28000, 0x37F30000, 0x37F38000,
		0x37F40000, 0x37F48000, 0x37F50000, 0x37F58000, 0x37F60000, 0x37F68000, 0x37F70000, 0x37F78000,
		0x37F80000, 0x37F88000, 0x37F90000, 0x37F98000, 0x37FA0000, 0x37FA8000, 0x37FB0000, 0x37FB8000,
		0x37FC0000, 0x37FC8000, 0x37FD0000, 0x37FD8000, 0x37FE0000, 0x37FE8000, 0x37FF0000, 0x37FF8000,
		0x38000000, 0x38004000, 0x38008000, 0x3800C000, 0x38010000, 0x38014000, 0x38018000, 0x3801C000,
		0x38020000, 0x38024000, 0x38028000, 0x3802C000, 0x38030000, 0x38034000, 0x38038000, 0x3803C000,
		0x38040000, 0x38044000, 0x38048000, 0x3804C000, 0x38050000, 0x38054000, 0x38058000, 0x3805C000,
		0x38060000, 0x38064000, 0x38068000, 0x3806C000, 0x38070000, 0x38074000, 0x38078000, 0x3807C000,
		0x38080000, 0x38084000, 0x38088000, 0x3808C000, 0x38090000, 0x38094000, 0x38098000, 0x3809C000,
		0x380A0000, 0x380A4000, 0x380A8000, 0x380AC000, 0x380B0000, 0x380B4000, 0x380B8000, 0x380BC000,
		0x380C0000, 0x380C4000, 0x380C8000, 0x380CC000, 0x380D0000, 0x380D4000, 0x380D8000, 0x380DC000,
		0x380E0000, 0x380E4000, 0x380E8000, 0x380EC000, 0x380F0000, 0x380F4000, 0x380F8000, 0x380FC000,
		0x38100000, 0x38104000, 0x38108000, 0x3810C000, 0x38110000, 0x38114000, 0x38118000, 0x3811C000,
		0x38120000, 0x38124000, 0x38128000, 0x3812C000, 0x38130000, 0x38134000, 0x38138000, 0x3813C000,
		0x38140000, 0x38144000, 0x38148000, 0x3814C000, 0x38150000, 0x38154000, 0x38158000, 0x3815C000,
		0x38160000, 0x38164000, 0x38168000, 0x3816C000, 0x38170000, 0x38174000, 0x38178000, 0x3817C000,
		0x38180000, 0x38184000, 0x38188000, 0x3818C000, 0x38190000, 0x38194000, 0x38198000, 0x3819C000,
		0x381A0000, 0x381A4000, 0x381A8000, 0x381AC000, 0x381B0000, 0x381B4000, 0x381B8000, 0x381BC000,
		0x381C0000, 0x381C4000, 0x381C8000, 0x381CC000, 0x381D0000, 0x381D4000, 0x381D8000, 0x381DC000,
		0x381E0000, 0x381E4000, 0x381E8000, 0x381EC000, 0x381F0000, 0x381F4000, 0x381F8000, 0x381FC000,
		0x38200000, 0x38204000, 0x38208000, 0x3820C000, 0x38210000, 0x38214000, 0x38218000, 0x3821C000,
		0x38220000, 0x38224000, 0x38228000, 0x3822C000, 0x38230000, 0x38234000, 0x38238000, 0x3823C000,
		0x38240000, 0x38244000, 0x38248000, 0x3824C000, 0x38250000, 0x38254000, 0x38258000, 0x3825C000,
		0x38260000, 0x38264000, 0x38268000, 0x3826C000, 0x38270000, 0x38274000, 0x38278000, 0x3827C000,
		0x38280000, 0x38284000, 0x38288000, 0x3828C000, 0x38290000, 0x38294000, 0x38298000, 0x3829C000,
		0x382A0000, 0x382A4000, 0x382A8000, 0x382AC000, 0x382B0000, 0x382B4000, 0x382B8000, 0x382BC000,
		0x382C0000, 0x382C4000, 0x382C8000, 0x382CC000, 0x382D0000, 0x382D4000, 0x382D8000, 0x382DC000,
		0x382E0000, 0x382E4000, 0x382E8000, 0x382EC000, 0x382F0000, 0x382F4000, 0x382F8000, 0x382FC000,
		0x38300000, 0x38304000, 0x38308000, 0x3830C000, 0x38310000, 0x38314000, 0x38318000, 0x3831C000,
		0x38320000, 0x38324000, 0x38328000, 0x3832C000, 0x38330000, 0x38334000, 0x38338000, 0x3833C000,
		0x38340000, 0x38344000, 0x38348000, 0x3834C000, 0x38350000, 0x38354000, 0x38358000, 0x3835C000,
		0x38360000, 0x38364000, 0x38368000, 0x3836C000, 0x38370000, 0x38374000, 0x38378000, 0x3837C000,
		0x38380000, 0x38384000, 0x38388000, 0x3838C000, 0x38390000, 0x38394000, 0x38398000, 0x3839C000,
		0x383A0000, 0x383A4000, 0x383A8000, 0x383AC000, 0x383B0000, 0x383B4000, 0x383B8000, 0x383BC000,
		0x383C0000, 0x383C4000, 0x383C8000, 0x383CC000, 0x383D0000, 0x383D4000, 0x383D8000, 0x383DC000,
		0x383E0000, 0x383E4000, 0x383E8000, 0x383EC000, 0x383F0000, 0x383F4000, 0x383F8000, 0x383FC000,
		0x38400000, 0x38404000, 0x38408000, 0x3840C000, 0x38410000, 0x38414000, 0x38418000, 0x3841C000,
		0x38420000, 0x38424000, 0x38428000, 0x3842C000, 0x38430000, 0x38434000, 0x38438000, 0x3843C000,
		0x38440000, 0x38444000, 0x38448000, 0x3844C000, 0x38450000, 0x38454000, 0x38458000, 0x3845C000,
		0x38460000, 0x38464000, 0x38468000, 0x3846C000, 0x38470000, 0x38474000, 0x38478000, 0x3847C000,
		0x38480000, 0x38484000, 0x38488000, 0x3848C000, 0x38490000, 0x38494000, 0x38498000, 0x3849C000,
		0x384A0000, 0x384A4000, 0x384A8000, 0x384AC000, 0x384B0000, 0x384B4000, 0x384B8000, 0x384BC000,
		0x384C0000, 0x384C4000, 0x384C8000, 0x384CC000, 0x384D0000, 0x384D4000, 0x384D8000, 0x384DC000,
		0x384E0000, 0x384E4000, 0x384E8000, 0x384EC000, 0x384F0000, 0x384F4000, 0x384F8000, 0x384FC000,
		0x38500000, 0x38504000, 0x38508000, 0x3850C000, 0x38510000, 0x38514000, 0x38518000, 0x3851C000,
		0x38520000, 0x38524000, 0x38528000, 0x3852C000, 0x38530000, 0x38534000, 0x38538000, 0x3853C000,
		0x38540000, 0x38544000, 0x38548000, 0x3854C000, 0x38550000, 0x38554000, 0x38558000, 0x3855C000,
		0x38560000, 0x38564000, 0x38568000, 0x3856C000, 0x38570000, 0x38574000, 0x38578000, 0x3857C000,
		0x38580000, 0x38584000, 0x38588000, 0x3858C000, 0x38590000, 0x38594000, 0x38598000, 0x3859C000,
		0x385A0000, 0x385A4000, 0x385A8000, 0x385AC000, 0x385B0000, 0x385B4000, 0x385B8000, 0x385BC000,
		0x385C0000, 0x385C4000, 0x385C8000, 0x385CC000, 0x385D0000, 0x385D4000, 0x385D8000, 0x385DC000,
		0x385E0000, 0x385E4000, 0x385E8000, 0x385EC000, 0x385F0000, 0x385F4000, 0x385F8000, 0x385FC000,
		0x38600000, 0x38604000, 0x38608000, 0x3860C000, 0x38610000, 0x38614000, 0x38618000, 0x3861C000,
		0x38620000, 0x38624000, 0x38628000, 0x3862C000, 0x38630000, 0x38634000, 0x38638000, 0x3863C000,
		0x38640000, 0x38644000, 0x38648000, 0x3864C000, 0x38650000, 0x38654000, 0x38658000, 0x3865C000,
		0x38660000, 0x38664000, 0x38668000, 0x3866C000, 0x38670000, 0x38674000, 0x38678000, 0x3867C000,
		0x38680000, 0x38684000, 0x38688000, 0x3868C000, 0x38690000, 0x38694000, 0x38698000, 0x3869C000,
		0x386A0000, 0x386A4000, 0x386A8000, 0x386AC000, 0x386B0000, 0x386B4000, 0x386B8000, 0x386BC000,
		0x386C0000, 0x386C4000, 0x386C8000, 0x386CC000, 0x386D0000, 0x386D4000, 0x386D8000, 0x386DC000,
		0x386E0000, 0x386E4000, 0x386E8000, 0x386EC000, 0x386F0000, 0x386F4000, 0x386F8000, 0x386FC000,
		0x38700000, 0x38704000, 0x38708000, 0x3870C000, 0x38710000, 0x38714000, 0x38718000, 0x3871C000,
		0x38720000, 0x38724000, 0x38728000, 0x3872C000, 0x38730000, 0x38734000, 0x38738000, 0x3873C000,
		0x38740000, 0x38744000, 0x38748000, 0x3874C000, 0x38750000, 0x38754000, 0x38758000, 0x3875C000,
		0x38760000, 0x38764000, 0x38768000, 0x3876C000, 0x38770000, 0x38774000, 0x38778000, 0x3877C000,
		0x38780000, 0x38784000, 0x38788000, 0x3878C000, 0x38790000, 0x38794000, 0x38798000, 0x3879C000,
		0x387A0000, 0x387A4000, 0x387A8000, 0x387AC000, 0x387B0000, 0x387B4000, 0x387B8000, 0x387BC000,
		0x387C0000, 0x387C4000, 0x387C8000, 0x387CC000, 0x387D0000, 0x387D4000, 0x387D8000, 0x387DC000,
		0x387E0000, 0x387E4000, 0x387E8000, 0x387EC000, 0x387F0000, 0x387F4000, 0x387F8000, 0x387FC000,
	};
}