#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitDmaManager
// Address: 0x2a5e68 - 0x2a6220
void pbInitDmaManager_0x2a5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5e68u;

label_2a5e68:
    // 0x2a5e68: 0x27bdff90
    ctx->pc = 0x2a5e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2a5e6c:
    // 0x2a5e6c: 0xffbf0060
    ctx->pc = 0x2a5e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2a5e70:
    // 0x2a5e70: 0xffbe0050
    ctx->pc = 0x2a5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2a5e74:
    // 0x2a5e74: 0xffb00040
    ctx->pc = 0x2a5e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2a5e78:
    // 0x2a5e78: 0x3a0f02d
    ctx->pc = 0x2a5e78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e7c:
    // 0x2a5e7c: 0x3c100036
    ctx->pc = 0x2a5e7cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_2a5e80:
    // 0x2a5e80: 0x8e10dee0
    ctx->pc = 0x2a5e80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
label_2a5e84:
    // 0x2a5e84: 0x8e020020
    ctx->pc = 0x2a5e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5e88:
    // 0x2a5e88: 0xac400018
    ctx->pc = 0x2a5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2a5e8c:
    // 0x2a5e8c: 0xafc00034
    ctx->pc = 0x2a5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 0));
label_2a5e90:
    // 0x2a5e90: 0x8fc20034
    ctx->pc = 0x2a5e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5e94:
    // 0x2a5e94: 0x28430003
    ctx->pc = 0x2a5e94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
label_2a5e98:
    // 0x2a5e98: 0x14600003
label_2a5e9c:
    if (ctx->pc == 0x2A5E9Cu) {
        ctx->pc = 0x2A5EA0u;
        goto label_2a5ea0;
    }
    ctx->pc = 0x2A5E98u;
    {
        const bool branch_taken_0x2a5e98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5e98) {
            ctx->pc = 0x2A5EA8u;
            goto label_2a5ea8;
        }
    }
    ctx->pc = 0x2A5EA0u;
label_2a5ea0:
    // 0x2a5ea0: 0x100000c6
label_2a5ea4:
    if (ctx->pc == 0x2A5EA4u) {
        ctx->pc = 0x2A5EA8u;
        goto label_2a5ea8;
    }
    ctx->pc = 0x2A5EA0u;
    {
        const bool branch_taken_0x2a5ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5ea0) {
            ctx->pc = 0x2A61BCu;
            goto label_2a61bc;
        }
    }
    ctx->pc = 0x2A5EA8u;
label_2a5ea8:
    // 0x2a5ea8: 0x8e020020
    ctx->pc = 0x2a5ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5eac:
    // 0x2a5eac: 0x8fc30034
    ctx->pc = 0x2a5eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5eb0:
    // 0x2a5eb0: 0x24040018
    ctx->pc = 0x2a5eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5eb4:
    // 0x2a5eb4: 0x641818
    ctx->pc = 0x2a5eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5eb8:
    // 0x2a5eb8: 0x2444001c
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 28));
label_2a5ebc:
    // 0x2a5ebc: 0x80102d
    ctx->pc = 0x2a5ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ec0:
    // 0x2a5ec0: 0x431821
    ctx->pc = 0x2a5ec0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5ec4:
    // 0x2a5ec4: 0xac600000
    ctx->pc = 0x2a5ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a5ec8:
    // 0x2a5ec8: 0x8e020020
    ctx->pc = 0x2a5ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5ecc:
    // 0x2a5ecc: 0x8fc30034
    ctx->pc = 0x2a5eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5ed0:
    // 0x2a5ed0: 0x24040018
    ctx->pc = 0x2a5ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5ed4:
    // 0x2a5ed4: 0x641818
    ctx->pc = 0x2a5ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5ed8:
    // 0x2a5ed8: 0x24440020
    ctx->pc = 0x2a5ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 32));
label_2a5edc:
    // 0x2a5edc: 0x80102d
    ctx->pc = 0x2a5edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ee0:
    // 0x2a5ee0: 0x431821
    ctx->pc = 0x2a5ee0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5ee4:
    // 0x2a5ee4: 0xac600000
    ctx->pc = 0x2a5ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a5ee8:
    // 0x2a5ee8: 0x8e020020
    ctx->pc = 0x2a5ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5eec:
    // 0x2a5eec: 0x8fc30034
    ctx->pc = 0x2a5eecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5ef0:
    // 0x2a5ef0: 0x24040018
    ctx->pc = 0x2a5ef0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5ef4:
    // 0x2a5ef4: 0x641818
    ctx->pc = 0x2a5ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5ef8:
    // 0x2a5ef8: 0x24440024
    ctx->pc = 0x2a5ef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
label_2a5efc:
    // 0x2a5efc: 0x80102d
    ctx->pc = 0x2a5efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f00:
    // 0x2a5f00: 0x431821
    ctx->pc = 0x2a5f00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5f04:
    // 0x2a5f04: 0xac600000
    ctx->pc = 0x2a5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a5f08:
    // 0x2a5f08: 0x8e020020
    ctx->pc = 0x2a5f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5f0c:
    // 0x2a5f0c: 0x8fc30034
    ctx->pc = 0x2a5f0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5f10:
    // 0x2a5f10: 0x24040018
    ctx->pc = 0x2a5f10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5f14:
    // 0x2a5f14: 0x641818
    ctx->pc = 0x2a5f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5f18:
    // 0x2a5f18: 0x24440028
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 40));
label_2a5f1c:
    // 0x2a5f1c: 0x80102d
    ctx->pc = 0x2a5f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f20:
    // 0x2a5f20: 0x431821
    ctx->pc = 0x2a5f20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5f24:
    // 0x2a5f24: 0xac600000
    ctx->pc = 0x2a5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a5f28:
    // 0x2a5f28: 0x8fc20034
    ctx->pc = 0x2a5f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5f2c:
    // 0x2a5f2c: 0x2c430007
    ctx->pc = 0x2a5f2cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 7));
label_2a5f30:
    // 0x2a5f30: 0x1060009d
label_2a5f34:
    if (ctx->pc == 0x2A5F34u) {
        ctx->pc = 0x2A5F38u;
        goto label_2a5f38;
    }
    ctx->pc = 0x2A5F30u;
    {
        const bool branch_taken_0x2a5f30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5f30) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A5F38u;
label_2a5f38:
    // 0x2a5f38: 0x8fc20034
    ctx->pc = 0x2a5f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5f3c:
    // 0x2a5f3c: 0x40182d
    ctx->pc = 0x2a5f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f40:
    // 0x2a5f40: 0x31080
    ctx->pc = 0x2a5f40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2a5f44:
    // 0x2a5f44: 0x3c03003b
    ctx->pc = 0x2a5f44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)59 << 16));
label_2a5f48:
    // 0x2a5f48: 0x2463eb50
    ctx->pc = 0x2a5f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962000));
label_2a5f4c:
    // 0x2a5f4c: 0x431021
    ctx->pc = 0x2a5f4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5f50:
    // 0x2a5f50: 0x8c430000
    ctx->pc = 0x2a5f50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5f54:
    // 0x2a5f54: 0x600008
label_2a5f58:
    if (ctx->pc == 0x2A5F58u) {
        ctx->pc = 0x2A5F5Cu;
        goto label_2a5f5c;
    }
    ctx->pc = 0x2A5F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5E68u: goto label_2a5e68;
            case 0x2A5E6Cu: goto label_2a5e6c;
            case 0x2A5E70u: goto label_2a5e70;
            case 0x2A5E74u: goto label_2a5e74;
            case 0x2A5E78u: goto label_2a5e78;
            case 0x2A5E7Cu: goto label_2a5e7c;
            case 0x2A5E80u: goto label_2a5e80;
            case 0x2A5E84u: goto label_2a5e84;
            case 0x2A5E88u: goto label_2a5e88;
            case 0x2A5E8Cu: goto label_2a5e8c;
            case 0x2A5E90u: goto label_2a5e90;
            case 0x2A5E94u: goto label_2a5e94;
            case 0x2A5E98u: goto label_2a5e98;
            case 0x2A5E9Cu: goto label_2a5e9c;
            case 0x2A5EA0u: goto label_2a5ea0;
            case 0x2A5EA4u: goto label_2a5ea4;
            case 0x2A5EA8u: goto label_2a5ea8;
            case 0x2A5EACu: goto label_2a5eac;
            case 0x2A5EB0u: goto label_2a5eb0;
            case 0x2A5EB4u: goto label_2a5eb4;
            case 0x2A5EB8u: goto label_2a5eb8;
            case 0x2A5EBCu: goto label_2a5ebc;
            case 0x2A5EC0u: goto label_2a5ec0;
            case 0x2A5EC4u: goto label_2a5ec4;
            case 0x2A5EC8u: goto label_2a5ec8;
            case 0x2A5ECCu: goto label_2a5ecc;
            case 0x2A5ED0u: goto label_2a5ed0;
            case 0x2A5ED4u: goto label_2a5ed4;
            case 0x2A5ED8u: goto label_2a5ed8;
            case 0x2A5EDCu: goto label_2a5edc;
            case 0x2A5EE0u: goto label_2a5ee0;
            case 0x2A5EE4u: goto label_2a5ee4;
            case 0x2A5EE8u: goto label_2a5ee8;
            case 0x2A5EECu: goto label_2a5eec;
            case 0x2A5EF0u: goto label_2a5ef0;
            case 0x2A5EF4u: goto label_2a5ef4;
            case 0x2A5EF8u: goto label_2a5ef8;
            case 0x2A5EFCu: goto label_2a5efc;
            case 0x2A5F00u: goto label_2a5f00;
            case 0x2A5F04u: goto label_2a5f04;
            case 0x2A5F08u: goto label_2a5f08;
            case 0x2A5F0Cu: goto label_2a5f0c;
            case 0x2A5F10u: goto label_2a5f10;
            case 0x2A5F14u: goto label_2a5f14;
            case 0x2A5F18u: goto label_2a5f18;
            case 0x2A5F1Cu: goto label_2a5f1c;
            case 0x2A5F20u: goto label_2a5f20;
            case 0x2A5F24u: goto label_2a5f24;
            case 0x2A5F28u: goto label_2a5f28;
            case 0x2A5F2Cu: goto label_2a5f2c;
            case 0x2A5F30u: goto label_2a5f30;
            case 0x2A5F34u: goto label_2a5f34;
            case 0x2A5F38u: goto label_2a5f38;
            case 0x2A5F3Cu: goto label_2a5f3c;
            case 0x2A5F40u: goto label_2a5f40;
            case 0x2A5F44u: goto label_2a5f44;
            case 0x2A5F48u: goto label_2a5f48;
            case 0x2A5F4Cu: goto label_2a5f4c;
            case 0x2A5F50u: goto label_2a5f50;
            case 0x2A5F54u: goto label_2a5f54;
            case 0x2A5F58u: goto label_2a5f58;
            case 0x2A5F5Cu: goto label_2a5f5c;
            case 0x2A5F60u: goto label_2a5f60;
            case 0x2A5F64u: goto label_2a5f64;
            case 0x2A5F68u: goto label_2a5f68;
            case 0x2A5F6Cu: goto label_2a5f6c;
            case 0x2A5F70u: goto label_2a5f70;
            case 0x2A5F74u: goto label_2a5f74;
            case 0x2A5F78u: goto label_2a5f78;
            case 0x2A5F7Cu: goto label_2a5f7c;
            case 0x2A5F80u: goto label_2a5f80;
            case 0x2A5F84u: goto label_2a5f84;
            case 0x2A5F88u: goto label_2a5f88;
            case 0x2A5F8Cu: goto label_2a5f8c;
            case 0x2A5F90u: goto label_2a5f90;
            case 0x2A5F94u: goto label_2a5f94;
            case 0x2A5F98u: goto label_2a5f98;
            case 0x2A5F9Cu: goto label_2a5f9c;
            case 0x2A5FA0u: goto label_2a5fa0;
            case 0x2A5FA4u: goto label_2a5fa4;
            case 0x2A5FA8u: goto label_2a5fa8;
            case 0x2A5FACu: goto label_2a5fac;
            case 0x2A5FB0u: goto label_2a5fb0;
            case 0x2A5FB4u: goto label_2a5fb4;
            case 0x2A5FB8u: goto label_2a5fb8;
            case 0x2A5FBCu: goto label_2a5fbc;
            case 0x2A5FC0u: goto label_2a5fc0;
            case 0x2A5FC4u: goto label_2a5fc4;
            case 0x2A5FC8u: goto label_2a5fc8;
            case 0x2A5FCCu: goto label_2a5fcc;
            case 0x2A5FD0u: goto label_2a5fd0;
            case 0x2A5FD4u: goto label_2a5fd4;
            case 0x2A5FD8u: goto label_2a5fd8;
            case 0x2A5FDCu: goto label_2a5fdc;
            case 0x2A5FE0u: goto label_2a5fe0;
            case 0x2A5FE4u: goto label_2a5fe4;
            case 0x2A5FE8u: goto label_2a5fe8;
            case 0x2A5FECu: goto label_2a5fec;
            case 0x2A5FF0u: goto label_2a5ff0;
            case 0x2A5FF4u: goto label_2a5ff4;
            case 0x2A5FF8u: goto label_2a5ff8;
            case 0x2A5FFCu: goto label_2a5ffc;
            case 0x2A6000u: goto label_2a6000;
            case 0x2A6004u: goto label_2a6004;
            case 0x2A6008u: goto label_2a6008;
            case 0x2A600Cu: goto label_2a600c;
            case 0x2A6010u: goto label_2a6010;
            case 0x2A6014u: goto label_2a6014;
            case 0x2A6018u: goto label_2a6018;
            case 0x2A601Cu: goto label_2a601c;
            case 0x2A6020u: goto label_2a6020;
            case 0x2A6024u: goto label_2a6024;
            case 0x2A6028u: goto label_2a6028;
            case 0x2A602Cu: goto label_2a602c;
            case 0x2A6030u: goto label_2a6030;
            case 0x2A6034u: goto label_2a6034;
            case 0x2A6038u: goto label_2a6038;
            case 0x2A603Cu: goto label_2a603c;
            case 0x2A6040u: goto label_2a6040;
            case 0x2A6044u: goto label_2a6044;
            case 0x2A6048u: goto label_2a6048;
            case 0x2A604Cu: goto label_2a604c;
            case 0x2A6050u: goto label_2a6050;
            case 0x2A6054u: goto label_2a6054;
            case 0x2A6058u: goto label_2a6058;
            case 0x2A605Cu: goto label_2a605c;
            case 0x2A6060u: goto label_2a6060;
            case 0x2A6064u: goto label_2a6064;
            case 0x2A6068u: goto label_2a6068;
            case 0x2A606Cu: goto label_2a606c;
            case 0x2A6070u: goto label_2a6070;
            case 0x2A6074u: goto label_2a6074;
            case 0x2A6078u: goto label_2a6078;
            case 0x2A607Cu: goto label_2a607c;
            case 0x2A6080u: goto label_2a6080;
            case 0x2A6084u: goto label_2a6084;
            case 0x2A6088u: goto label_2a6088;
            case 0x2A608Cu: goto label_2a608c;
            case 0x2A6090u: goto label_2a6090;
            case 0x2A6094u: goto label_2a6094;
            case 0x2A6098u: goto label_2a6098;
            case 0x2A609Cu: goto label_2a609c;
            case 0x2A60A0u: goto label_2a60a0;
            case 0x2A60A4u: goto label_2a60a4;
            case 0x2A60A8u: goto label_2a60a8;
            case 0x2A60ACu: goto label_2a60ac;
            case 0x2A60B0u: goto label_2a60b0;
            case 0x2A60B4u: goto label_2a60b4;
            case 0x2A60B8u: goto label_2a60b8;
            case 0x2A60BCu: goto label_2a60bc;
            case 0x2A60C0u: goto label_2a60c0;
            case 0x2A60C4u: goto label_2a60c4;
            case 0x2A60C8u: goto label_2a60c8;
            case 0x2A60CCu: goto label_2a60cc;
            case 0x2A60D0u: goto label_2a60d0;
            case 0x2A60D4u: goto label_2a60d4;
            case 0x2A60D8u: goto label_2a60d8;
            case 0x2A60DCu: goto label_2a60dc;
            case 0x2A60E0u: goto label_2a60e0;
            case 0x2A60E4u: goto label_2a60e4;
            case 0x2A60E8u: goto label_2a60e8;
            case 0x2A60ECu: goto label_2a60ec;
            case 0x2A60F0u: goto label_2a60f0;
            case 0x2A60F4u: goto label_2a60f4;
            case 0x2A60F8u: goto label_2a60f8;
            case 0x2A60FCu: goto label_2a60fc;
            case 0x2A6100u: goto label_2a6100;
            case 0x2A6104u: goto label_2a6104;
            case 0x2A6108u: goto label_2a6108;
            case 0x2A610Cu: goto label_2a610c;
            case 0x2A6110u: goto label_2a6110;
            case 0x2A6114u: goto label_2a6114;
            case 0x2A6118u: goto label_2a6118;
            case 0x2A611Cu: goto label_2a611c;
            case 0x2A6120u: goto label_2a6120;
            case 0x2A6124u: goto label_2a6124;
            case 0x2A6128u: goto label_2a6128;
            case 0x2A612Cu: goto label_2a612c;
            case 0x2A6130u: goto label_2a6130;
            case 0x2A6134u: goto label_2a6134;
            case 0x2A6138u: goto label_2a6138;
            case 0x2A613Cu: goto label_2a613c;
            case 0x2A6140u: goto label_2a6140;
            case 0x2A6144u: goto label_2a6144;
            case 0x2A6148u: goto label_2a6148;
            case 0x2A614Cu: goto label_2a614c;
            case 0x2A6150u: goto label_2a6150;
            case 0x2A6154u: goto label_2a6154;
            case 0x2A6158u: goto label_2a6158;
            case 0x2A615Cu: goto label_2a615c;
            case 0x2A6160u: goto label_2a6160;
            case 0x2A6164u: goto label_2a6164;
            case 0x2A6168u: goto label_2a6168;
            case 0x2A616Cu: goto label_2a616c;
            case 0x2A6170u: goto label_2a6170;
            case 0x2A6174u: goto label_2a6174;
            case 0x2A6178u: goto label_2a6178;
            case 0x2A617Cu: goto label_2a617c;
            case 0x2A6180u: goto label_2a6180;
            case 0x2A6184u: goto label_2a6184;
            case 0x2A6188u: goto label_2a6188;
            case 0x2A618Cu: goto label_2a618c;
            case 0x2A6190u: goto label_2a6190;
            case 0x2A6194u: goto label_2a6194;
            case 0x2A6198u: goto label_2a6198;
            case 0x2A619Cu: goto label_2a619c;
            case 0x2A61A0u: goto label_2a61a0;
            case 0x2A61A4u: goto label_2a61a4;
            case 0x2A61A8u: goto label_2a61a8;
            case 0x2A61ACu: goto label_2a61ac;
            case 0x2A61B0u: goto label_2a61b0;
            case 0x2A61B4u: goto label_2a61b4;
            case 0x2A61B8u: goto label_2a61b8;
            case 0x2A61BCu: goto label_2a61bc;
            case 0x2A61C0u: goto label_2a61c0;
            case 0x2A61C4u: goto label_2a61c4;
            case 0x2A61C8u: goto label_2a61c8;
            case 0x2A61CCu: goto label_2a61cc;
            case 0x2A61D0u: goto label_2a61d0;
            case 0x2A61D4u: goto label_2a61d4;
            case 0x2A61D8u: goto label_2a61d8;
            case 0x2A61DCu: goto label_2a61dc;
            case 0x2A61E0u: goto label_2a61e0;
            case 0x2A61E4u: goto label_2a61e4;
            case 0x2A61E8u: goto label_2a61e8;
            case 0x2A61ECu: goto label_2a61ec;
            case 0x2A61F0u: goto label_2a61f0;
            case 0x2A61F4u: goto label_2a61f4;
            case 0x2A61F8u: goto label_2a61f8;
            case 0x2A61FCu: goto label_2a61fc;
            case 0x2A6200u: goto label_2a6200;
            case 0x2A6204u: goto label_2a6204;
            case 0x2A6208u: goto label_2a6208;
            case 0x2A620Cu: goto label_2a620c;
            case 0x2A6210u: goto label_2a6210;
            case 0x2A6214u: goto label_2a6214;
            case 0x2A6218u: goto label_2a6218;
            case 0x2A621Cu: goto label_2a621c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5F5Cu;
label_2a5f5c:
    // 0x2a5f5c: 0x8e020020
    ctx->pc = 0x2a5f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5f60:
    // 0x2a5f60: 0x8fc30034
    ctx->pc = 0x2a5f60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5f64:
    // 0x2a5f64: 0x24040018
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5f68:
    // 0x2a5f68: 0x641818
    ctx->pc = 0x2a5f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5f6c:
    // 0x2a5f6c: 0x2444002c
    ctx->pc = 0x2a5f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a5f70:
    // 0x2a5f70: 0x80102d
    ctx->pc = 0x2a5f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f74:
    // 0x2a5f74: 0x431821
    ctx->pc = 0x2a5f74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5f78:
    // 0x2a5f78: 0x3c021000
    ctx->pc = 0x2a5f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a5f7c:
    // 0x2a5f7c: 0x34428000
    ctx->pc = 0x2a5f7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_2a5f80:
    // 0x2a5f80: 0xac620000
    ctx->pc = 0x2a5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a5f84:
    // 0x2a5f84: 0x8e020020
    ctx->pc = 0x2a5f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5f88:
    // 0x2a5f88: 0x8fc30034
    ctx->pc = 0x2a5f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5f8c:
    // 0x2a5f8c: 0x24040018
    ctx->pc = 0x2a5f8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5f90:
    // 0x2a5f90: 0x641818
    ctx->pc = 0x2a5f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5f94:
    // 0x2a5f94: 0x24440030
    ctx->pc = 0x2a5f94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a5f98:
    // 0x2a5f98: 0x80102d
    ctx->pc = 0x2a5f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f9c:
    // 0x2a5f9c: 0x431821
    ctx->pc = 0x2a5f9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5fa0:
    // 0x2a5fa0: 0x24020040
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
label_2a5fa4:
    // 0x2a5fa4: 0xac620000
    ctx->pc = 0x2a5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a5fa8:
    // 0x2a5fa8: 0x1000007f
label_2a5fac:
    if (ctx->pc == 0x2A5FACu) {
        ctx->pc = 0x2A5FB0u;
        goto label_2a5fb0;
    }
    ctx->pc = 0x2A5FA8u;
    {
        const bool branch_taken_0x2a5fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5fa8) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A5FB0u;
label_2a5fb0:
    // 0x2a5fb0: 0x8e020020
    ctx->pc = 0x2a5fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5fb4:
    // 0x2a5fb4: 0x8fc30034
    ctx->pc = 0x2a5fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5fb8:
    // 0x2a5fb8: 0x24040018
    ctx->pc = 0x2a5fb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5fbc:
    // 0x2a5fbc: 0x641818
    ctx->pc = 0x2a5fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5fc0:
    // 0x2a5fc0: 0x2444002c
    ctx->pc = 0x2a5fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a5fc4:
    // 0x2a5fc4: 0x80102d
    ctx->pc = 0x2a5fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fc8:
    // 0x2a5fc8: 0x431821
    ctx->pc = 0x2a5fc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5fcc:
    // 0x2a5fcc: 0x3c021000
    ctx->pc = 0x2a5fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a5fd0:
    // 0x2a5fd0: 0x34429000
    ctx->pc = 0x2a5fd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36864));
label_2a5fd4:
    // 0x2a5fd4: 0xac620000
    ctx->pc = 0x2a5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a5fd8:
    // 0x2a5fd8: 0x8e020020
    ctx->pc = 0x2a5fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a5fdc:
    // 0x2a5fdc: 0x8fc30034
    ctx->pc = 0x2a5fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a5fe0:
    // 0x2a5fe0: 0x24040018
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a5fe4:
    // 0x2a5fe4: 0x641818
    ctx->pc = 0x2a5fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a5fe8:
    // 0x2a5fe8: 0x24440030
    ctx->pc = 0x2a5fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a5fec:
    // 0x2a5fec: 0x80102d
    ctx->pc = 0x2a5fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ff0:
    // 0x2a5ff0: 0x431821
    ctx->pc = 0x2a5ff0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5ff4:
    // 0x2a5ff4: 0x24020080
    ctx->pc = 0x2a5ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2a5ff8:
    // 0x2a5ff8: 0xac620000
    ctx->pc = 0x2a5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a5ffc:
    // 0x2a5ffc: 0x1000006a
label_2a6000:
    if (ctx->pc == 0x2A6000u) {
        ctx->pc = 0x2A6004u;
        goto label_2a6004;
    }
    ctx->pc = 0x2A5FFCu;
    {
        const bool branch_taken_0x2a5ffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5ffc) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A6004u;
label_2a6004:
    // 0x2a6004: 0x8e020020
    ctx->pc = 0x2a6004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6008:
    // 0x2a6008: 0x8fc30034
    ctx->pc = 0x2a6008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a600c:
    // 0x2a600c: 0x24040018
    ctx->pc = 0x2a600cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6010:
    // 0x2a6010: 0x641818
    ctx->pc = 0x2a6010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6014:
    // 0x2a6014: 0x2444002c
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a6018:
    // 0x2a6018: 0x80102d
    ctx->pc = 0x2a6018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a601c:
    // 0x2a601c: 0x431821
    ctx->pc = 0x2a601cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6020:
    // 0x2a6020: 0x3c021000
    ctx->pc = 0x2a6020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a6024:
    // 0x2a6024: 0x3442a000
    ctx->pc = 0x2a6024u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40960));
label_2a6028:
    // 0x2a6028: 0xac620000
    ctx->pc = 0x2a6028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a602c:
    // 0x2a602c: 0x8e020020
    ctx->pc = 0x2a602cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6030:
    // 0x2a6030: 0x8fc30034
    ctx->pc = 0x2a6030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6034:
    // 0x2a6034: 0x24040018
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6038:
    // 0x2a6038: 0x641818
    ctx->pc = 0x2a6038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a603c:
    // 0x2a603c: 0x24440030
    ctx->pc = 0x2a603cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a6040:
    // 0x2a6040: 0x80102d
    ctx->pc = 0x2a6040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6044:
    // 0x2a6044: 0x431821
    ctx->pc = 0x2a6044u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6048:
    // 0x2a6048: 0x24020100
    ctx->pc = 0x2a6048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
label_2a604c:
    // 0x2a604c: 0xac620000
    ctx->pc = 0x2a604cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a6050:
    // 0x2a6050: 0x10000055
label_2a6054:
    if (ctx->pc == 0x2A6054u) {
        ctx->pc = 0x2A6058u;
        goto label_2a6058;
    }
    ctx->pc = 0x2A6050u;
    {
        const bool branch_taken_0x2a6050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6050) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A6058u;
label_2a6058:
    // 0x2a6058: 0x8e020020
    ctx->pc = 0x2a6058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a605c:
    // 0x2a605c: 0x8fc30034
    ctx->pc = 0x2a605cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6060:
    // 0x2a6060: 0x24040018
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6064:
    // 0x2a6064: 0x641818
    ctx->pc = 0x2a6064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6068:
    // 0x2a6068: 0x2444002c
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a606c:
    // 0x2a606c: 0x80102d
    ctx->pc = 0x2a606cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6070:
    // 0x2a6070: 0x431821
    ctx->pc = 0x2a6070u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6074:
    // 0x2a6074: 0x3c021000
    ctx->pc = 0x2a6074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a6078:
    // 0x2a6078: 0x3442b000
    ctx->pc = 0x2a6078u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
label_2a607c:
    // 0x2a607c: 0xac620000
    ctx->pc = 0x2a607cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a6080:
    // 0x2a6080: 0x8e020020
    ctx->pc = 0x2a6080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6084:
    // 0x2a6084: 0x8fc30034
    ctx->pc = 0x2a6084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6088:
    // 0x2a6088: 0x24040018
    ctx->pc = 0x2a6088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a608c:
    // 0x2a608c: 0x641818
    ctx->pc = 0x2a608cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6090:
    // 0x2a6090: 0x24440030
    ctx->pc = 0x2a6090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a6094:
    // 0x2a6094: 0x80102d
    ctx->pc = 0x2a6094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6098:
    // 0x2a6098: 0x431821
    ctx->pc = 0x2a6098u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a609c:
    // 0x2a609c: 0x24020200
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
label_2a60a0:
    // 0x2a60a0: 0xac620000
    ctx->pc = 0x2a60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a60a4:
    // 0x2a60a4: 0x10000040
label_2a60a8:
    if (ctx->pc == 0x2A60A8u) {
        ctx->pc = 0x2A60ACu;
        goto label_2a60ac;
    }
    ctx->pc = 0x2A60A4u;
    {
        const bool branch_taken_0x2a60a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a60a4) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A60ACu;
label_2a60ac:
    // 0x2a60ac: 0x8e020020
    ctx->pc = 0x2a60acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a60b0:
    // 0x2a60b0: 0x8fc30034
    ctx->pc = 0x2a60b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a60b4:
    // 0x2a60b4: 0x24040018
    ctx->pc = 0x2a60b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a60b8:
    // 0x2a60b8: 0x641818
    ctx->pc = 0x2a60b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a60bc:
    // 0x2a60bc: 0x2444002c
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a60c0:
    // 0x2a60c0: 0x80102d
    ctx->pc = 0x2a60c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a60c4:
    // 0x2a60c4: 0x431821
    ctx->pc = 0x2a60c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a60c8:
    // 0x2a60c8: 0x3c021000
    ctx->pc = 0x2a60c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a60cc:
    // 0x2a60cc: 0x3442b400
    ctx->pc = 0x2a60ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
label_2a60d0:
    // 0x2a60d0: 0xac620000
    ctx->pc = 0x2a60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a60d4:
    // 0x2a60d4: 0x8e020020
    ctx->pc = 0x2a60d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a60d8:
    // 0x2a60d8: 0x8fc30034
    ctx->pc = 0x2a60d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a60dc:
    // 0x2a60dc: 0x24040018
    ctx->pc = 0x2a60dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a60e0:
    // 0x2a60e0: 0x641818
    ctx->pc = 0x2a60e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a60e4:
    // 0x2a60e4: 0x24440030
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a60e8:
    // 0x2a60e8: 0x80102d
    ctx->pc = 0x2a60e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a60ec:
    // 0x2a60ec: 0x431821
    ctx->pc = 0x2a60ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a60f0:
    // 0x2a60f0: 0x24020400
    ctx->pc = 0x2a60f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_2a60f4:
    // 0x2a60f4: 0xac620000
    ctx->pc = 0x2a60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a60f8:
    // 0x2a60f8: 0x1000002b
label_2a60fc:
    if (ctx->pc == 0x2A60FCu) {
        ctx->pc = 0x2A6100u;
        goto label_2a6100;
    }
    ctx->pc = 0x2A60F8u;
    {
        const bool branch_taken_0x2a60f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a60f8) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A6100u;
label_2a6100:
    // 0x2a6100: 0x8e020020
    ctx->pc = 0x2a6100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6104:
    // 0x2a6104: 0x8fc30034
    ctx->pc = 0x2a6104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6108:
    // 0x2a6108: 0x24040018
    ctx->pc = 0x2a6108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a610c:
    // 0x2a610c: 0x641818
    ctx->pc = 0x2a610cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6110:
    // 0x2a6110: 0x2444002c
    ctx->pc = 0x2a6110u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a6114:
    // 0x2a6114: 0x80102d
    ctx->pc = 0x2a6114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6118:
    // 0x2a6118: 0x431821
    ctx->pc = 0x2a6118u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a611c:
    // 0x2a611c: 0x3c021000
    ctx->pc = 0x2a611cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a6120:
    // 0x2a6120: 0x3442d000
    ctx->pc = 0x2a6120u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53248));
label_2a6124:
    // 0x2a6124: 0xac620000
    ctx->pc = 0x2a6124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a6128:
    // 0x2a6128: 0x8e020020
    ctx->pc = 0x2a6128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a612c:
    // 0x2a612c: 0x8fc30034
    ctx->pc = 0x2a612cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6130:
    // 0x2a6130: 0x24040018
    ctx->pc = 0x2a6130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6134:
    // 0x2a6134: 0x641818
    ctx->pc = 0x2a6134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6138:
    // 0x2a6138: 0x24440030
    ctx->pc = 0x2a6138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a613c:
    // 0x2a613c: 0x80102d
    ctx->pc = 0x2a613cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6140:
    // 0x2a6140: 0x431821
    ctx->pc = 0x2a6140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6144:
    // 0x2a6144: 0x24024000
    ctx->pc = 0x2a6144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
label_2a6148:
    // 0x2a6148: 0xac620000
    ctx->pc = 0x2a6148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a614c:
    // 0x2a614c: 0x10000016
label_2a6150:
    if (ctx->pc == 0x2A6150u) {
        ctx->pc = 0x2A6154u;
        goto label_2a6154;
    }
    ctx->pc = 0x2A614Cu;
    {
        const bool branch_taken_0x2a614c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a614c) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A6154u;
label_2a6154:
    // 0x2a6154: 0x8e020020
    ctx->pc = 0x2a6154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6158:
    // 0x2a6158: 0x8fc30034
    ctx->pc = 0x2a6158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a615c:
    // 0x2a615c: 0x24040018
    ctx->pc = 0x2a615cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6160:
    // 0x2a6160: 0x641818
    ctx->pc = 0x2a6160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a6164:
    // 0x2a6164: 0x2444002c
    ctx->pc = 0x2a6164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
label_2a6168:
    // 0x2a6168: 0x80102d
    ctx->pc = 0x2a6168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a616c:
    // 0x2a616c: 0x431821
    ctx->pc = 0x2a616cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6170:
    // 0x2a6170: 0x3c021000
    ctx->pc = 0x2a6170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2a6174:
    // 0x2a6174: 0x3442d400
    ctx->pc = 0x2a6174u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
label_2a6178:
    // 0x2a6178: 0xac620000
    ctx->pc = 0x2a6178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a617c:
    // 0x2a617c: 0x8e020020
    ctx->pc = 0x2a617cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a6180:
    // 0x2a6180: 0x8fc30034
    ctx->pc = 0x2a6180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a6184:
    // 0x2a6184: 0x24040018
    ctx->pc = 0x2a6184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_2a6188:
    // 0x2a6188: 0x641818
    ctx->pc = 0x2a6188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2a618c:
    // 0x2a618c: 0x24440030
    ctx->pc = 0x2a618cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 48));
label_2a6190:
    // 0x2a6190: 0x80102d
    ctx->pc = 0x2a6190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6194:
    // 0x2a6194: 0x431821
    ctx->pc = 0x2a6194u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6198:
    // 0x2a6198: 0x34028000
    ctx->pc = 0x2a6198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_2a619c:
    // 0x2a619c: 0xac620000
    ctx->pc = 0x2a619cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a61a0:
    // 0x2a61a0: 0x10000001
label_2a61a4:
    if (ctx->pc == 0x2A61A4u) {
        ctx->pc = 0x2A61A8u;
        goto label_2a61a8;
    }
    ctx->pc = 0x2A61A0u;
    {
        const bool branch_taken_0x2a61a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a61a0) {
            ctx->pc = 0x2A61A8u;
            goto label_2a61a8;
        }
    }
    ctx->pc = 0x2A61A8u;
label_2a61a8:
    // 0x2a61a8: 0x8fc20034
    ctx->pc = 0x2a61a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_2a61ac:
    // 0x2a61ac: 0x24430001
    ctx->pc = 0x2a61acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_2a61b0:
    // 0x2a61b0: 0xafc30034
    ctx->pc = 0x2a61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
label_2a61b4:
    // 0x2a61b4: 0x1000ff36
label_2a61b8:
    if (ctx->pc == 0x2A61B8u) {
        ctx->pc = 0x2A61BCu;
        goto label_2a61bc;
    }
    ctx->pc = 0x2A61B4u;
    {
        const bool branch_taken_0x2a61b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a61b4) {
            ctx->pc = 0x2A5E90u;
            goto label_2a5e90;
        }
    }
    ctx->pc = 0x2A61BCu;
label_2a61bc:
    // 0x2a61bc: 0x8e020020
    ctx->pc = 0x2a61bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61c0:
    // 0x2a61c0: 0xac400068
    ctx->pc = 0x2a61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_2a61c4:
    // 0x2a61c4: 0x8e020020
    ctx->pc = 0x2a61c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61c8:
    // 0x2a61c8: 0xac40006c
    ctx->pc = 0x2a61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_2a61cc:
    // 0x2a61cc: 0x8e020020
    ctx->pc = 0x2a61ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61d0:
    // 0x2a61d0: 0xac400070
    ctx->pc = 0x2a61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_2a61d4:
    // 0x2a61d4: 0x8e020020
    ctx->pc = 0x2a61d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61d8:
    // 0x2a61d8: 0xac400074
    ctx->pc = 0x2a61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_2a61dc:
    // 0x2a61dc: 0x8e020020
    ctx->pc = 0x2a61dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61e0:
    // 0x2a61e0: 0xac400078
    ctx->pc = 0x2a61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
label_2a61e4:
    // 0x2a61e4: 0x8e020020
    ctx->pc = 0x2a61e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61e8:
    // 0x2a61e8: 0xac40007c
    ctx->pc = 0x2a61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_2a61ec:
    // 0x2a61ec: 0x8e020020
    ctx->pc = 0x2a61ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61f0:
    // 0x2a61f0: 0xac400080
    ctx->pc = 0x2a61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_2a61f4:
    // 0x2a61f4: 0x8e020020
    ctx->pc = 0x2a61f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a61f8:
    // 0x2a61f8: 0xac400084
    ctx->pc = 0x2a61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_2a61fc:
    // 0x2a61fc: 0xc0a94aa
label_2a6200:
    if (ctx->pc == 0x2A6200u) {
        ctx->pc = 0x2A6204u;
        goto label_2a6204;
    }
    ctx->pc = 0x2A61FCu;
    SET_GPR_U32(ctx, 31, 0x2A6204u);
    ctx->pc = 0x2A52A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPFreeAll_0x2a52a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6204u; }
    }
    if (ctx->pc != 0x2A6204u) { return; }
    ctx->pc = 0x2A6204u;
label_2a6204:
    // 0x2a6204: 0x3c0e82d
    ctx->pc = 0x2a6204u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a6208:
    // 0x2a6208: 0xdfbf0060
    ctx->pc = 0x2a6208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a620c:
    // 0x2a620c: 0xdfbe0050
    ctx->pc = 0x2a620cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a6210:
    // 0x2a6210: 0xdfb00040
    ctx->pc = 0x2a6210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a6214:
    // 0x2a6214: 0x27bd0070
    ctx->pc = 0x2a6214u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
label_2a6218:
    // 0x2a6218: 0x3e00008
label_2a621c:
    if (ctx->pc == 0x2A621Cu) {
        ctx->pc = 0x2A6220u;
        goto label_fallthrough_0x2a6218;
    }
    ctx->pc = 0x2A6218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5E68u: goto label_2a5e68;
            case 0x2A5E6Cu: goto label_2a5e6c;
            case 0x2A5E70u: goto label_2a5e70;
            case 0x2A5E74u: goto label_2a5e74;
            case 0x2A5E78u: goto label_2a5e78;
            case 0x2A5E7Cu: goto label_2a5e7c;
            case 0x2A5E80u: goto label_2a5e80;
            case 0x2A5E84u: goto label_2a5e84;
            case 0x2A5E88u: goto label_2a5e88;
            case 0x2A5E8Cu: goto label_2a5e8c;
            case 0x2A5E90u: goto label_2a5e90;
            case 0x2A5E94u: goto label_2a5e94;
            case 0x2A5E98u: goto label_2a5e98;
            case 0x2A5E9Cu: goto label_2a5e9c;
            case 0x2A5EA0u: goto label_2a5ea0;
            case 0x2A5EA4u: goto label_2a5ea4;
            case 0x2A5EA8u: goto label_2a5ea8;
            case 0x2A5EACu: goto label_2a5eac;
            case 0x2A5EB0u: goto label_2a5eb0;
            case 0x2A5EB4u: goto label_2a5eb4;
            case 0x2A5EB8u: goto label_2a5eb8;
            case 0x2A5EBCu: goto label_2a5ebc;
            case 0x2A5EC0u: goto label_2a5ec0;
            case 0x2A5EC4u: goto label_2a5ec4;
            case 0x2A5EC8u: goto label_2a5ec8;
            case 0x2A5ECCu: goto label_2a5ecc;
            case 0x2A5ED0u: goto label_2a5ed0;
            case 0x2A5ED4u: goto label_2a5ed4;
            case 0x2A5ED8u: goto label_2a5ed8;
            case 0x2A5EDCu: goto label_2a5edc;
            case 0x2A5EE0u: goto label_2a5ee0;
            case 0x2A5EE4u: goto label_2a5ee4;
            case 0x2A5EE8u: goto label_2a5ee8;
            case 0x2A5EECu: goto label_2a5eec;
            case 0x2A5EF0u: goto label_2a5ef0;
            case 0x2A5EF4u: goto label_2a5ef4;
            case 0x2A5EF8u: goto label_2a5ef8;
            case 0x2A5EFCu: goto label_2a5efc;
            case 0x2A5F00u: goto label_2a5f00;
            case 0x2A5F04u: goto label_2a5f04;
            case 0x2A5F08u: goto label_2a5f08;
            case 0x2A5F0Cu: goto label_2a5f0c;
            case 0x2A5F10u: goto label_2a5f10;
            case 0x2A5F14u: goto label_2a5f14;
            case 0x2A5F18u: goto label_2a5f18;
            case 0x2A5F1Cu: goto label_2a5f1c;
            case 0x2A5F20u: goto label_2a5f20;
            case 0x2A5F24u: goto label_2a5f24;
            case 0x2A5F28u: goto label_2a5f28;
            case 0x2A5F2Cu: goto label_2a5f2c;
            case 0x2A5F30u: goto label_2a5f30;
            case 0x2A5F34u: goto label_2a5f34;
            case 0x2A5F38u: goto label_2a5f38;
            case 0x2A5F3Cu: goto label_2a5f3c;
            case 0x2A5F40u: goto label_2a5f40;
            case 0x2A5F44u: goto label_2a5f44;
            case 0x2A5F48u: goto label_2a5f48;
            case 0x2A5F4Cu: goto label_2a5f4c;
            case 0x2A5F50u: goto label_2a5f50;
            case 0x2A5F54u: goto label_2a5f54;
            case 0x2A5F58u: goto label_2a5f58;
            case 0x2A5F5Cu: goto label_2a5f5c;
            case 0x2A5F60u: goto label_2a5f60;
            case 0x2A5F64u: goto label_2a5f64;
            case 0x2A5F68u: goto label_2a5f68;
            case 0x2A5F6Cu: goto label_2a5f6c;
            case 0x2A5F70u: goto label_2a5f70;
            case 0x2A5F74u: goto label_2a5f74;
            case 0x2A5F78u: goto label_2a5f78;
            case 0x2A5F7Cu: goto label_2a5f7c;
            case 0x2A5F80u: goto label_2a5f80;
            case 0x2A5F84u: goto label_2a5f84;
            case 0x2A5F88u: goto label_2a5f88;
            case 0x2A5F8Cu: goto label_2a5f8c;
            case 0x2A5F90u: goto label_2a5f90;
            case 0x2A5F94u: goto label_2a5f94;
            case 0x2A5F98u: goto label_2a5f98;
            case 0x2A5F9Cu: goto label_2a5f9c;
            case 0x2A5FA0u: goto label_2a5fa0;
            case 0x2A5FA4u: goto label_2a5fa4;
            case 0x2A5FA8u: goto label_2a5fa8;
            case 0x2A5FACu: goto label_2a5fac;
            case 0x2A5FB0u: goto label_2a5fb0;
            case 0x2A5FB4u: goto label_2a5fb4;
            case 0x2A5FB8u: goto label_2a5fb8;
            case 0x2A5FBCu: goto label_2a5fbc;
            case 0x2A5FC0u: goto label_2a5fc0;
            case 0x2A5FC4u: goto label_2a5fc4;
            case 0x2A5FC8u: goto label_2a5fc8;
            case 0x2A5FCCu: goto label_2a5fcc;
            case 0x2A5FD0u: goto label_2a5fd0;
            case 0x2A5FD4u: goto label_2a5fd4;
            case 0x2A5FD8u: goto label_2a5fd8;
            case 0x2A5FDCu: goto label_2a5fdc;
            case 0x2A5FE0u: goto label_2a5fe0;
            case 0x2A5FE4u: goto label_2a5fe4;
            case 0x2A5FE8u: goto label_2a5fe8;
            case 0x2A5FECu: goto label_2a5fec;
            case 0x2A5FF0u: goto label_2a5ff0;
            case 0x2A5FF4u: goto label_2a5ff4;
            case 0x2A5FF8u: goto label_2a5ff8;
            case 0x2A5FFCu: goto label_2a5ffc;
            case 0x2A6000u: goto label_2a6000;
            case 0x2A6004u: goto label_2a6004;
            case 0x2A6008u: goto label_2a6008;
            case 0x2A600Cu: goto label_2a600c;
            case 0x2A6010u: goto label_2a6010;
            case 0x2A6014u: goto label_2a6014;
            case 0x2A6018u: goto label_2a6018;
            case 0x2A601Cu: goto label_2a601c;
            case 0x2A6020u: goto label_2a6020;
            case 0x2A6024u: goto label_2a6024;
            case 0x2A6028u: goto label_2a6028;
            case 0x2A602Cu: goto label_2a602c;
            case 0x2A6030u: goto label_2a6030;
            case 0x2A6034u: goto label_2a6034;
            case 0x2A6038u: goto label_2a6038;
            case 0x2A603Cu: goto label_2a603c;
            case 0x2A6040u: goto label_2a6040;
            case 0x2A6044u: goto label_2a6044;
            case 0x2A6048u: goto label_2a6048;
            case 0x2A604Cu: goto label_2a604c;
            case 0x2A6050u: goto label_2a6050;
            case 0x2A6054u: goto label_2a6054;
            case 0x2A6058u: goto label_2a6058;
            case 0x2A605Cu: goto label_2a605c;
            case 0x2A6060u: goto label_2a6060;
            case 0x2A6064u: goto label_2a6064;
            case 0x2A6068u: goto label_2a6068;
            case 0x2A606Cu: goto label_2a606c;
            case 0x2A6070u: goto label_2a6070;
            case 0x2A6074u: goto label_2a6074;
            case 0x2A6078u: goto label_2a6078;
            case 0x2A607Cu: goto label_2a607c;
            case 0x2A6080u: goto label_2a6080;
            case 0x2A6084u: goto label_2a6084;
            case 0x2A6088u: goto label_2a6088;
            case 0x2A608Cu: goto label_2a608c;
            case 0x2A6090u: goto label_2a6090;
            case 0x2A6094u: goto label_2a6094;
            case 0x2A6098u: goto label_2a6098;
            case 0x2A609Cu: goto label_2a609c;
            case 0x2A60A0u: goto label_2a60a0;
            case 0x2A60A4u: goto label_2a60a4;
            case 0x2A60A8u: goto label_2a60a8;
            case 0x2A60ACu: goto label_2a60ac;
            case 0x2A60B0u: goto label_2a60b0;
            case 0x2A60B4u: goto label_2a60b4;
            case 0x2A60B8u: goto label_2a60b8;
            case 0x2A60BCu: goto label_2a60bc;
            case 0x2A60C0u: goto label_2a60c0;
            case 0x2A60C4u: goto label_2a60c4;
            case 0x2A60C8u: goto label_2a60c8;
            case 0x2A60CCu: goto label_2a60cc;
            case 0x2A60D0u: goto label_2a60d0;
            case 0x2A60D4u: goto label_2a60d4;
            case 0x2A60D8u: goto label_2a60d8;
            case 0x2A60DCu: goto label_2a60dc;
            case 0x2A60E0u: goto label_2a60e0;
            case 0x2A60E4u: goto label_2a60e4;
            case 0x2A60E8u: goto label_2a60e8;
            case 0x2A60ECu: goto label_2a60ec;
            case 0x2A60F0u: goto label_2a60f0;
            case 0x2A60F4u: goto label_2a60f4;
            case 0x2A60F8u: goto label_2a60f8;
            case 0x2A60FCu: goto label_2a60fc;
            case 0x2A6100u: goto label_2a6100;
            case 0x2A6104u: goto label_2a6104;
            case 0x2A6108u: goto label_2a6108;
            case 0x2A610Cu: goto label_2a610c;
            case 0x2A6110u: goto label_2a6110;
            case 0x2A6114u: goto label_2a6114;
            case 0x2A6118u: goto label_2a6118;
            case 0x2A611Cu: goto label_2a611c;
            case 0x2A6120u: goto label_2a6120;
            case 0x2A6124u: goto label_2a6124;
            case 0x2A6128u: goto label_2a6128;
            case 0x2A612Cu: goto label_2a612c;
            case 0x2A6130u: goto label_2a6130;
            case 0x2A6134u: goto label_2a6134;
            case 0x2A6138u: goto label_2a6138;
            case 0x2A613Cu: goto label_2a613c;
            case 0x2A6140u: goto label_2a6140;
            case 0x2A6144u: goto label_2a6144;
            case 0x2A6148u: goto label_2a6148;
            case 0x2A614Cu: goto label_2a614c;
            case 0x2A6150u: goto label_2a6150;
            case 0x2A6154u: goto label_2a6154;
            case 0x2A6158u: goto label_2a6158;
            case 0x2A615Cu: goto label_2a615c;
            case 0x2A6160u: goto label_2a6160;
            case 0x2A6164u: goto label_2a6164;
            case 0x2A6168u: goto label_2a6168;
            case 0x2A616Cu: goto label_2a616c;
            case 0x2A6170u: goto label_2a6170;
            case 0x2A6174u: goto label_2a6174;
            case 0x2A6178u: goto label_2a6178;
            case 0x2A617Cu: goto label_2a617c;
            case 0x2A6180u: goto label_2a6180;
            case 0x2A6184u: goto label_2a6184;
            case 0x2A6188u: goto label_2a6188;
            case 0x2A618Cu: goto label_2a618c;
            case 0x2A6190u: goto label_2a6190;
            case 0x2A6194u: goto label_2a6194;
            case 0x2A6198u: goto label_2a6198;
            case 0x2A619Cu: goto label_2a619c;
            case 0x2A61A0u: goto label_2a61a0;
            case 0x2A61A4u: goto label_2a61a4;
            case 0x2A61A8u: goto label_2a61a8;
            case 0x2A61ACu: goto label_2a61ac;
            case 0x2A61B0u: goto label_2a61b0;
            case 0x2A61B4u: goto label_2a61b4;
            case 0x2A61B8u: goto label_2a61b8;
            case 0x2A61BCu: goto label_2a61bc;
            case 0x2A61C0u: goto label_2a61c0;
            case 0x2A61C4u: goto label_2a61c4;
            case 0x2A61C8u: goto label_2a61c8;
            case 0x2A61CCu: goto label_2a61cc;
            case 0x2A61D0u: goto label_2a61d0;
            case 0x2A61D4u: goto label_2a61d4;
            case 0x2A61D8u: goto label_2a61d8;
            case 0x2A61DCu: goto label_2a61dc;
            case 0x2A61E0u: goto label_2a61e0;
            case 0x2A61E4u: goto label_2a61e4;
            case 0x2A61E8u: goto label_2a61e8;
            case 0x2A61ECu: goto label_2a61ec;
            case 0x2A61F0u: goto label_2a61f0;
            case 0x2A61F4u: goto label_2a61f4;
            case 0x2A61F8u: goto label_2a61f8;
            case 0x2A61FCu: goto label_2a61fc;
            case 0x2A6200u: goto label_2a6200;
            case 0x2A6204u: goto label_2a6204;
            case 0x2A6208u: goto label_2a6208;
            case 0x2A620Cu: goto label_2a620c;
            case 0x2A6210u: goto label_2a6210;
            case 0x2A6214u: goto label_2a6214;
            case 0x2A6218u: goto label_2a6218;
            case 0x2A621Cu: goto label_2a621c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2a6218:
    ctx->pc = 0x2A6220u;
}
