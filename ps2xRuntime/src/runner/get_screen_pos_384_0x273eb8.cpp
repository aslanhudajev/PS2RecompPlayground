#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_screen_pos_384
// Address: 0x273eb8 - 0x273f80
void get_screen_pos_384_0x273eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273eb8u;

    // 0x273eb8: 0x27bdffa0
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x273ebc: 0xffbf0050
    ctx->pc = 0x273ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x273ec0: 0xffb30040
    ctx->pc = 0x273ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x273ec4: 0xffb20030
    ctx->pc = 0x273ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x273ec8: 0xffb10020
    ctx->pc = 0x273ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x273ecc: 0xffb00010
    ctx->pc = 0x273eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x273ed0: 0xa0882d
    ctx->pc = 0x273ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ed4: 0xc0982d
    ctx->pc = 0x273ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ed8: 0xc0aa372
    ctx->pc = 0x273ED8u;
    SET_GPR_U32(ctx, 31, 0x273EE0u);
    ctx->pc = 0x273EDCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EE0u; }
    }
    if (ctx->pc != 0x273EE0u) { return; }
    ctx->pc = 0x273EE0u;
    // 0x273ee0: 0xc0aa36c
    ctx->pc = 0x273EE0u;
    SET_GPR_U32(ctx, 31, 0x273EE8u);
    ctx->pc = 0x273EE4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EE8u; }
    }
    if (ctx->pc != 0x273EE8u) { return; }
    ctx->pc = 0x273EE8u;
    // 0x273ee8: 0x3c02003a
    ctx->pc = 0x273ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x273eec: 0x8c451bd0
    ctx->pc = 0x273eecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x273ef0: 0x200202d
    ctx->pc = 0x273ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ef4: 0x24a50070
    ctx->pc = 0x273ef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 112));
    // 0x273ef8: 0x302d
    ctx->pc = 0x273ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273efc: 0xc0b45e8
    ctx->pc = 0x273EFCu;
    SET_GPR_U32(ctx, 31, 0x273F04u);
    ctx->pc = 0x273F00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D17A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProject_0x2d17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F04u; }
    }
    if (ctx->pc != 0x273F04u) { return; }
    ctx->pc = 0x273F04u;
    // 0x273f04: 0x87a20000
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f08: 0xae220000
    ctx->pc = 0x273f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x273f0c: 0x97a20002
    ctx->pc = 0x273f0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x273f10: 0x24030180
    ctx->pc = 0x273f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 384));
    // 0x273f14: 0x621023
    ctx->pc = 0x273f14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273f18: 0x16430005
    ctx->pc = 0x273F18u;
    {
        const bool branch_taken_0x273f18 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        ctx->pc = 0x273F1Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x273f18) {
            ctx->pc = 0x273F30u;
            goto label_273f30;
        }
    }
    ctx->pc = 0x273F20u;
    // 0x273f20: 0x21400
    ctx->pc = 0x273f20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x273f24: 0x21403
    ctx->pc = 0x273f24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x273f28: 0x1000000e
    ctx->pc = 0x273F28u;
    {
        const bool branch_taken_0x273f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273F2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x273f28) {
            ctx->pc = 0x273F64u;
            goto label_273f64;
        }
    }
    ctx->pc = 0x273F30u;
label_273f30:
    // 0x273f30: 0x87a20002
    ctx->pc = 0x273f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x273f34: 0x44820000
    ctx->pc = 0x273f34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x273f38: 0x46800020
    ctx->pc = 0x273f38u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x273f3c: 0x3c0143c0
    ctx->pc = 0x273f3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17344 << 16));
    // 0x273f40: 0x44810800
    ctx->pc = 0x273f40u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273f44: 0x46010002
    ctx->pc = 0x273f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273f48: 0x44920800
    ctx->pc = 0x273f48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 18);
    // 0x273f4c: 0x46800860
    ctx->pc = 0x273f4cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x273f50: 0x0
    ctx->pc = 0x273f50u;
    // NOP
    // 0x273f54: 0x0
    ctx->pc = 0x273f54u;
    // NOP
    // 0x273f58: 0x46010003
    ctx->pc = 0x273f58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x273f5c: 0x46000064
    ctx->pc = 0x273f5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x273f60: 0xe6610000
    ctx->pc = 0x273f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_273f64:
    // 0x273f64: 0xdfbf0050
    ctx->pc = 0x273f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273f68: 0xdfb30040
    ctx->pc = 0x273f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273f6c: 0xdfb20030
    ctx->pc = 0x273f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273f70: 0xdfb10020
    ctx->pc = 0x273f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273f74: 0xdfb00010
    ctx->pc = 0x273f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273f78: 0x3e00008
    ctx->pc = 0x273F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273F30u: goto label_273f30;
            case 0x273F64u: goto label_273f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x273F80u;
}
