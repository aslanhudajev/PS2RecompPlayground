#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlaceEnemyInGrid
// Address: 0x2800f0 - 0x28016c
void PlaceEnemyInGrid_0x2800f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2800f0u;

    // 0x2800f0: 0x27bdffc0
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2800f4: 0xffbf0030
    ctx->pc = 0x2800f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2800f8: 0xffb20020
    ctx->pc = 0x2800f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2800fc: 0xffb10010
    ctx->pc = 0x2800fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280100: 0xffb00000
    ctx->pc = 0x280100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280104: 0x80902d
    ctx->pc = 0x280104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280108: 0x3c020033
    ctx->pc = 0x280108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28010c: 0x2442dfd0
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x280110: 0x241103b0
    ctx->pc = 0x280110u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 944));
    // 0x280114: 0x2518818
    ctx->pc = 0x280114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x280118: 0x2228821
    ctx->pc = 0x280118u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28011c: 0xc09fff6
    ctx->pc = 0x28011Cu;
    SET_GPR_U32(ctx, 31, 0x280124u);
    ctx->pc = 0x280120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280124u; }
    }
    if (ctx->pc != 0x280124u) { return; }
    ctx->pc = 0x280124u;
    // 0x280124: 0x40802d
    ctx->pc = 0x280124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280128: 0xc0a0006
    ctx->pc = 0x280128u;
    SET_GPR_U32(ctx, 31, 0x280130u);
    ctx->pc = 0x28012Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280130u; }
    }
    if (ctx->pc != 0x280130u) { return; }
    ctx->pc = 0x280130u;
    // 0x280130: 0x3c030034
    ctx->pc = 0x280130u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x280134: 0x246356a8
    ctx->pc = 0x280134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22184));
    // 0x280138: 0x108080
    ctx->pc = 0x280138u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x28013c: 0x21200
    ctx->pc = 0x28013cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x280140: 0x2028021
    ctx->pc = 0x280140u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x280144: 0x2038021
    ctx->pc = 0x280144u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x280148: 0x86020000
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28014c: 0xa6120000
    ctx->pc = 0x28014cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x280150: 0xa6220210
    ctx->pc = 0x280150u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 2));
    // 0x280154: 0xdfbf0030
    ctx->pc = 0x280154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280158: 0xdfb20020
    ctx->pc = 0x280158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28015c: 0xdfb10010
    ctx->pc = 0x28015cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280160: 0xdfb00000
    ctx->pc = 0x280160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280164: 0x3e00008
    ctx->pc = 0x280164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28016Cu;
}
