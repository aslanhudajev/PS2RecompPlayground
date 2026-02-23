#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _updateTempTackData
// Address: 0x161ea0 - 0x161f80
void _updateTempTackData_0x161ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_updateTempTackData");


    ctx->pc = 0x161ea0u;

    // 0x161ea0: 0x3c020023
    ctx->pc = 0x161ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x161ea4: 0x24040003
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x161ea8: 0x8c43a3bc
    ctx->pc = 0x161ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
    // 0x161eac: 0x1064001d
    ctx->pc = 0x161EACu;
    {
        const bool branch_taken_0x161eac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x161EB0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
        if (branch_taken_0x161eac) {
            ctx->pc = 0x161F24u;
            goto label_161f24;
        }
    }
    ctx->pc = 0x161EB4u;
    // 0x161eb4: 0x3c070023
    ctx->pc = 0x161eb4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x161eb8: 0x8ca4a3b8
    ctx->pc = 0x161eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294943672)));
    // 0x161ebc: 0x8ce3a1b0
    ctx->pc = 0x161ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294943152)));
    // 0x161ec0: 0x10830018
    ctx->pc = 0x161EC0u;
    {
        const bool branch_taken_0x161ec0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x161EC4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161ec0) {
            ctx->pc = 0x161F24u;
            goto label_161f24;
        }
    }
    ctx->pc = 0x161EC8u;
    // 0x161ec8: 0x3c080023
    ctx->pc = 0x161ec8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x161ecc: 0x8d02a1ac
    ctx->pc = 0x161eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294943148)));
    // 0x161ed0: 0x10400007
    ctx->pc = 0x161ED0u;
    {
        const bool branch_taken_0x161ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161ED4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161ed0) {
            ctx->pc = 0x161EF0u;
            goto label_161ef0;
        }
    }
    ctx->pc = 0x161ED8u;
    // 0x161ed8: 0x3c0a0023
    ctx->pc = 0x161ed8u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x161edc: 0xad00a1ac
    ctx->pc = 0x161edcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943148), GPR_U32(ctx, 0));
    // 0x161ee0: 0x8d42a170
    ctx->pc = 0x161ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 4294943088)));
    // 0x161ee4: 0x24420400
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x161ee8: 0x10000002
    ctx->pc = 0x161EE8u;
    {
        const bool branch_taken_0x161ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161EECu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294943088), GPR_U32(ctx, 2));
        if (branch_taken_0x161ee8) {
            ctx->pc = 0x161EF4u;
            goto label_161ef4;
        }
    }
    ctx->pc = 0x161EF0u;
label_161ef0:
    // 0x161ef0: 0x3c0a0023
    ctx->pc = 0x161ef0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
label_161ef4:
    // 0x161ef4: 0x83102a
    ctx->pc = 0x161ef4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x161ef8: 0x10400006
    ctx->pc = 0x161EF8u;
    {
        const bool branch_taken_0x161ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161EFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x161ef8) {
            ctx->pc = 0x161F14u;
            goto label_161f14;
        }
    }
    ctx->pc = 0x161F00u;
    // 0x161f00: 0x8c62a178
    ctx->pc = 0x161f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943096)));
    // 0x161f04: 0x14400004
    ctx->pc = 0x161F04u;
    {
        const bool branch_taken_0x161f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161F08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294943672)));
        if (branch_taken_0x161f04) {
            ctx->pc = 0x161F18u;
            goto label_161f18;
        }
    }
    ctx->pc = 0x161F0Cu;
    // 0x161f0c: 0x24020001
    ctx->pc = 0x161f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f10: 0xacc2a1ac
    ctx->pc = 0x161f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943148), GPR_U32(ctx, 2));
label_161f14:
    // 0x161f14: 0x8d22a3b8
    ctx->pc = 0x161f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294943672)));
label_161f18:
    // 0x161f18: 0xac60a178
    ctx->pc = 0x161f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943096), GPR_U32(ctx, 0));
    // 0x161f1c: 0x10000003
    ctx->pc = 0x161F1Cu;
    {
        const bool branch_taken_0x161f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161F20u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294943152), GPR_U32(ctx, 2));
        if (branch_taken_0x161f1c) {
            ctx->pc = 0x161F2Cu;
            goto label_161f2c;
        }
    }
    ctx->pc = 0x161F24u;
label_161f24:
    // 0x161f24: 0x3c080023
    ctx->pc = 0x161f24u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x161f28: 0x3c0a0023
    ctx->pc = 0x161f28u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
label_161f2c:
    // 0x161f2c: 0x8d43a170
    ctx->pc = 0x161f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 4294943088)));
    // 0x161f30: 0x3c060023
    ctx->pc = 0x161f30u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x161f34: 0x8ca4a3b8
    ctx->pc = 0x161f34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294943672)));
    // 0x161f38: 0x8d02a1ac
    ctx->pc = 0x161f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294943148)));
    // 0x161f3c: 0x642821
    ctx->pc = 0x161f3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161f40: 0x10400008
    ctx->pc = 0x161F40u;
    {
        const bool branch_taken_0x161f40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161F44u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294943864), GPR_U32(ctx, 5));
        if (branch_taken_0x161f40) {
            ctx->pc = 0x161F64u;
            goto label_161f64;
        }
    }
    ctx->pc = 0x161F48u;
    // 0x161f48: 0x3c030023
    ctx->pc = 0x161f48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x161f4c: 0x8c62a1b0
    ctx->pc = 0x161f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943152)));
    // 0x161f50: 0x44102a
    ctx->pc = 0x161f50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x161f54: 0x54400004
    ctx->pc = 0x161F54u;
    {
        const bool branch_taken_0x161f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x161f54) {
            ctx->pc = 0x161F58u;
            SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
            ctx->pc = 0x161F68u;
            goto label_161f68;
        }
    }
    ctx->pc = 0x161F5Cu;
    // 0x161f5c: 0x24a20400
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1024));
    // 0x161f60: 0xacc2a478
    ctx->pc = 0x161f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943864), GPR_U32(ctx, 2));
label_161f64:
    // 0x161f64: 0x3c050023
    ctx->pc = 0x161f64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_161f68:
    // 0x161f68: 0x8cc4a478
    ctx->pc = 0x161f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4294943864)));
    // 0x161f6c: 0x8ca2a174
    ctx->pc = 0x161f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943092)));
    // 0x161f70: 0x44182a
    ctx->pc = 0x161f70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x161f74: 0x83100b
    ctx->pc = 0x161f74u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x161f78: 0x3e00008
    ctx->pc = 0x161F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943092), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161EF0u: goto label_161ef0;
            case 0x161EF4u: goto label_161ef4;
            case 0x161F14u: goto label_161f14;
            case 0x161F18u: goto label_161f18;
            case 0x161F24u: goto label_161f24;
            case 0x161F2Cu: goto label_161f2c;
            case 0x161F64u: goto label_161f64;
            case 0x161F68u: goto label_161f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161F80u;
}
