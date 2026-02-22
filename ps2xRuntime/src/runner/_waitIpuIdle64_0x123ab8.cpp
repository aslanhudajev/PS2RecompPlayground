#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitIpuIdle64
// Address: 0x123ab8 - 0x123b68
void _waitIpuIdle64_0x123ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123ab8u;

    // 0x123ab8: 0x27bdffc0
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x123abc: 0x3c021000
    ctx->pc = 0x123abcu;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123ac0: 0xffbf0030
    ctx->pc = 0x123ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123ac4: 0x34422000
    ctx->pc = 0x123ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8192);
    // 0x123ac8: 0xffb20020
    ctx->pc = 0x123ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123acc: 0x282d
    ctx->pc = 0x123accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ad0: 0xffb10010
    ctx->pc = 0x123ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123ad4: 0xffb00000
    ctx->pc = 0x123ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ad8: 0xdc440000
    ctx->pc = 0x123ad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123adc: 0x481001c
    ctx->pc = 0x123ADCu;
    {
        const bool branch_taken_0x123adc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123AE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x123adc) {
            ctx->pc = 0x123B50u;
            goto label_123b50;
        }
    }
    ctx->pc = 0x123AE4u;
    // 0x123ae4: 0x3c021000
    ctx->pc = 0x123ae4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123ae8: 0x34422010
    ctx->pc = 0x123ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8208);
    // 0x123aec: 0x8c430000
    ctx->pc = 0x123aecu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x123af0: 0x30634000
    ctx->pc = 0x123af0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x123af4: 0x14600017
    ctx->pc = 0x123AF4u;
    {
        const bool branch_taken_0x123af4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x123AF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123af4) {
            ctx->pc = 0x123B54u;
            goto label_123b54;
        }
    }
    ctx->pc = 0x123AFCu;
    // 0x123afc: 0x3c111000
    ctx->pc = 0x123afcu;
    SET_GPR_S32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x123b00: 0x3c101000
    ctx->pc = 0x123b00u;
    SET_GPR_S32(ctx, 16, ((uint32_t)4096 << 16));
    // 0x123b04: 0x3c120017
    ctx->pc = 0x123b04u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x123b08: 0x36312000
    ctx->pc = 0x123b08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)8192);
    // 0x123b0c: 0x36102010
    ctx->pc = 0x123b0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)8208);
    // 0x123b10: 0xa0102d
    ctx->pc = 0x123b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b14: 0x0
    ctx->pc = 0x123b14u;
    // NOP
label_123b18:
    // 0x123b18: 0x28421389
    ctx->pc = 0x123b18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x123b1c: 0x14400004
    ctx->pc = 0x123B1Cu;
    {
        const bool branch_taken_0x123b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123B20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x123b1c) {
            ctx->pc = 0x123B30u;
            goto label_123b30;
        }
    }
    ctx->pc = 0x123B24u;
    // 0x123b24: 0xc047df4
    ctx->pc = 0x123B24u;
    SET_GPR_U32(ctx, 31, 0x123B2Cu);
    ctx->pc = 0x123B28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 6076)));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B2Cu; }
    }
    if (ctx->pc != 0x123B2Cu) { return; }
    ctx->pc = 0x123B2Cu;
    // 0x123b2c: 0x282d
    ctx->pc = 0x123b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123b30:
    // 0x123b30: 0xde240000
    ctx->pc = 0x123b30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123b34: 0x4810006
    ctx->pc = 0x123B34u;
    {
        const bool branch_taken_0x123b34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123B38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x123b34) {
            ctx->pc = 0x123B50u;
            goto label_123b50;
        }
    }
    ctx->pc = 0x123B3Cu;
    // 0x123b3c: 0x8e020000
    ctx->pc = 0x123b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123b40: 0x30424000
    ctx->pc = 0x123b40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x123b44: 0x1040fff4
    ctx->pc = 0x123B44u;
    {
        const bool branch_taken_0x123b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123B48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123b44) {
            ctx->pc = 0x123B18u;
            goto label_123b18;
        }
    }
    ctx->pc = 0x123B4Cu;
    // 0x123b4c: 0xdfbf0030
    ctx->pc = 0x123b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123b50:
    // 0x123b50: 0x80102d
    ctx->pc = 0x123b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123b54:
    // 0x123b54: 0xdfb20020
    ctx->pc = 0x123b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123b58: 0xdfb10010
    ctx->pc = 0x123b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123b5c: 0xdfb00000
    ctx->pc = 0x123b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123b60: 0x3e00008
    ctx->pc = 0x123B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123B18u: goto label_123b18;
            case 0x123B30u: goto label_123b30;
            case 0x123B50u: goto label_123b50;
            case 0x123B54u: goto label_123b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123B68u;
}
