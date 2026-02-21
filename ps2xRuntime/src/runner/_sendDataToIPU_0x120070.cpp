#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sendDataToIPU
// Address: 0x120070 - 0x120144
void _sendDataToIPU_0x120070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120070u;

    // 0x120070: 0x3c0f0075
    ctx->pc = 0x120070u;
    SET_GPR_U32(ctx, 15, ((uint32_t)117 << 16));
    // 0x120074: 0x3c020fff
    ctx->pc = 0x120074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x120078: 0x25e3dcc0
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 15), 4294958272));
    // 0x12007c: 0x3442ffff
    ctx->pc = 0x12007cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120080: 0x621824
    ctx->pc = 0x120080u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120084: 0x3c062000
    ctx->pc = 0x120084u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x120088: 0x665825
    ctx->pc = 0x120088u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12008c: 0xa0402d
    ctx->pc = 0x12008cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120090: 0x1900001d
    ctx->pc = 0x120090u;
    {
        const bool branch_taken_0x120090 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x120094u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x120090) {
            ctx->pc = 0x120108u;
            goto label_120108;
        }
    }
    ctx->pc = 0x120098u;
    // 0x120098: 0x3c09000f
    ctx->pc = 0x120098u;
    SET_GPR_U32(ctx, 9, ((uint32_t)15 << 16));
    // 0x12009c: 0x3c0c0fff
    ctx->pc = 0x12009cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)4095 << 16));
    // 0x1200a0: 0x3529ff40
    ctx->pc = 0x1200a0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65344));
    // 0x1200a4: 0x358cffff
    ctx->pc = 0x1200a4u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 65535));
    // 0x1200a8: 0x240e0003
    ctx->pc = 0x1200a8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1200ac: 0x240dffff
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1200b0:
    // 0x1200b0: 0x128102a
    ctx->pc = 0x1200b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1200b4: 0x120382d
    ctx->pc = 0x1200b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b8: 0x102380a
    ctx->pc = 0x1200b8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    // 0x1200bc: 0x182d
    ctx->pc = 0x1200bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c0: 0x24e6000f
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 15));
    // 0x1200c4: 0x24e2001e
    ctx->pc = 0x1200c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 30));
    // 0x1200c8: 0x1a6282a
    ctx->pc = 0x1200c8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x1200cc: 0x1074023
    ctx->pc = 0x1200ccu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1200d0: 0xc5100b
    ctx->pc = 0x1200d0u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x1200d4: 0x14c2024
    ctx->pc = 0x1200d4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1200d8: 0x1c8180b
    ctx->pc = 0x1200d8u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 14));
    // 0x1200dc: 0x21103
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1200e0: 0x4203c
    ctx->pc = 0x1200e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1200e4: 0x31f38
    ctx->pc = 0x1200e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1200e8: 0x2103c
    ctx->pc = 0x1200e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1200ec: 0x832025
    ctx->pc = 0x1200ecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1200f0: 0x2103e
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1200f4: 0x1475021
    ctx->pc = 0x1200f4u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1200f8: 0x822025
    ctx->pc = 0x1200f8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1200fc: 0xfd640000
    ctx->pc = 0x1200fcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x120100: 0x1d00ffeb
    ctx->pc = 0x120100u;
    {
        const bool branch_taken_0x120100 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x120104u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
        if (branch_taken_0x120100) {
            ctx->pc = 0x1200B0u;
            goto label_1200b0;
        }
    }
    ctx->pc = 0x120108u;
label_120108:
    // 0x120108: 0x3c020fff
    ctx->pc = 0x120108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x12010c: 0x25e4dcc0
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 15), 4294958272));
    // 0x120110: 0x3442ffff
    ctx->pc = 0x120110u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120114: 0x3c031000
    ctx->pc = 0x120114u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x120118: 0x822024
    ctx->pc = 0x120118u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12011c: 0x3463b430
    ctx->pc = 0x12011cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46128));
    // 0x120120: 0x3c021000
    ctx->pc = 0x120120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x120124: 0xac640000
    ctx->pc = 0x120124u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x120128: 0x3442b420
    ctx->pc = 0x120128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x12012c: 0x3c031000
    ctx->pc = 0x12012cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x120130: 0xac400000
    ctx->pc = 0x120130u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x120134: 0x3463b400
    ctx->pc = 0x120134u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x120138: 0x24020105
    ctx->pc = 0x120138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 261));
    // 0x12013c: 0x3e00008
    ctx->pc = 0x12013Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120140u;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1200B0u: goto label_1200b0;
            case 0x120108u: goto label_120108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120144u;
}
