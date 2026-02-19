#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCopyAnim
// Address: 0x295b80 - 0x295bec
void CritterCopyAnim_0x295b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x295b80u;

    // 0x295b80: 0x27bdffd0
    ctx->pc = 0x295b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295b84: 0xffbf0020
    ctx->pc = 0x295b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x295b88: 0xffb10010
    ctx->pc = 0x295b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295b8c: 0xffb00000
    ctx->pc = 0x295b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295b90: 0x80882d
    ctx->pc = 0x295b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b94: 0xa0802d
    ctx->pc = 0x295b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b98: 0xc621009c
    ctx->pc = 0x295b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b9c: 0x3c013f00
    ctx->pc = 0x295b9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x295ba0: 0x44810000
    ctx->pc = 0x295ba0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x295ba4: 0x46000840
    ctx->pc = 0x295ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x295ba8: 0x26040080
    ctx->pc = 0x295ba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    // 0x295bac: 0x86250092
    ctx->pc = 0x295bacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x295bb0: 0x46000824
    ctx->pc = 0x295bb0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x295bb4: 0x44060000
    ctx->pc = 0x295bb4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x295bb8: 0xc084af4
    ctx->pc = 0x295BB8u;
    SET_GPR_U32(ctx, 31, 0x295BC0u);
    ctx->pc = 0x295BBCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x212BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATreeFrame_0x212bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295BC0u; }
    }
    if (ctx->pc != 0x295BC0u) { return; }
    ctx->pc = 0x295BC0u;
    // 0x295bc0: 0x9622012e
    ctx->pc = 0x295bc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 302)));
    // 0x295bc4: 0xa602012e
    ctx->pc = 0x295bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 302), (uint16_t)GPR_U32(ctx, 2));
    // 0x295bc8: 0x2402ffff
    ctx->pc = 0x295bc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295bcc: 0xa6020124
    ctx->pc = 0x295bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x295bd0: 0xa6020128
    ctx->pc = 0x295bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 2));
    // 0x295bd4: 0xa602012c
    ctx->pc = 0x295bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 2));
    // 0x295bd8: 0xdfbf0020
    ctx->pc = 0x295bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295bdc: 0xdfb10010
    ctx->pc = 0x295bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295be0: 0xdfb00000
    ctx->pc = 0x295be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295be4: 0x3e00008
    ctx->pc = 0x295BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295BECu;
}
