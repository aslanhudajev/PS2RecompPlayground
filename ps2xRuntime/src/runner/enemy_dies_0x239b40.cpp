#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_dies
// Address: 0x239b40 - 0x239bd0
void enemy_dies_0x239b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239b40u;

    // 0x239b40: 0x27bdffd0
    ctx->pc = 0x239b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239b44: 0xffbf0020
    ctx->pc = 0x239b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239b48: 0xffb10010
    ctx->pc = 0x239b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239b4c: 0xffb00000
    ctx->pc = 0x239b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239b50: 0x3c020033
    ctx->pc = 0x239b50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239b54: 0x2442dfd0
    ctx->pc = 0x239b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239b58: 0x828823
    ctx->pc = 0x239b58u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x239b5c: 0x3c02a08a
    ctx->pc = 0x239b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41098 << 16));
    // 0x239b60: 0x3442d8f3
    ctx->pc = 0x239b60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55539));
    // 0x239b64: 0x2221018
    ctx->pc = 0x239b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239b68: 0x28903
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
    // 0x239b6c: 0xac800214
    ctx->pc = 0x239b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 0));
    // 0x239b70: 0x24020008
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x239b74: 0xac8200c8
    ctx->pc = 0x239b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
    // 0x239b78: 0xa4850212
    ctx->pc = 0x239b78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 530), (uint16_t)GPR_U32(ctx, 5));
    // 0x239b7c: 0x84830324
    ctx->pc = 0x239b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x239b80: 0x24020012
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x239b84: 0x5462000d
    ctx->pc = 0x239B84u;
    {
        const bool branch_taken_0x239b84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239b84) {
            ctx->pc = 0x239B88u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x239BBCu;
            goto label_239bbc;
        }
    }
    ctx->pc = 0x239B8Cu;
    // 0x239b8c: 0x3c020034
    ctx->pc = 0x239b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x239b90: 0x8c42e7c8
    ctx->pc = 0x239b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x239b94: 0xc44000bc
    ctx->pc = 0x239b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239b98: 0x3c014248
    ctx->pc = 0x239b98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x239b9c: 0x44816000
    ctx->pc = 0x239b9cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x239ba0: 0x24900060
    ctx->pc = 0x239ba0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 96));
    // 0x239ba4: 0x200202d
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ba8: 0xc09f9e2
    ctx->pc = 0x239BA8u;
    SET_GPR_U32(ctx, 31, 0x239BB0u);
    ctx->pc = 0x239BACu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x27E788u;
    {
        const uint32_t __entryPc = ctx->pc;
        SuicideExplosion_0x27e788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BB0u; }
    }
    if (ctx->pc != 0x239BB0u) { return; }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0xc097f96
    ctx->pc = 0x239BB0u;
    SET_GPR_U32(ctx, 31, 0x239BB8u);
    ctx->pc = 0x239BB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSuicideBomb_0x25fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BB8u; }
    }
    if (ctx->pc != 0x239BB8u) { return; }
    ctx->pc = 0x239BB8u;
    // 0x239bb8: 0x220202d
    ctx->pc = 0x239bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239bbc:
    // 0x239bbc: 0xdfbf0020
    ctx->pc = 0x239bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239bc0: 0xdfb10010
    ctx->pc = 0x239bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239bc4: 0xdfb00000
    ctx->pc = 0x239bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239bc8: 0x808e688
    ctx->pc = 0x239BC8u;
    ctx->pc = 0x239BCCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x239A20u;
    uncouple_enemy_0x239a20(rdram, ctx, runtime); return;
    ctx->pc = 0x239BD0u;
}
