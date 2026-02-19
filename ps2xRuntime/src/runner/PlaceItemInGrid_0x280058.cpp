#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlaceItemInGrid
// Address: 0x280058 - 0x2800f0
void PlaceItemInGrid_0x280058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280058u;

    // 0x280058: 0x27bdffb0
    ctx->pc = 0x280058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28005c: 0xffbf0040
    ctx->pc = 0x28005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x280060: 0xffb30030
    ctx->pc = 0x280060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x280064: 0xffb20020
    ctx->pc = 0x280064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x280068: 0xffb10010
    ctx->pc = 0x280068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28006c: 0xffb00000
    ctx->pc = 0x28006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280070: 0x80982d
    ctx->pc = 0x280070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280074: 0x3c120034
    ctx->pc = 0x280074u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x280078: 0x8e42cd94
    ctx->pc = 0x280078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954388)));
    // 0x28007c: 0x24110110
    ctx->pc = 0x28007cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 272));
    // 0x280080: 0x2718818
    ctx->pc = 0x280080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x280084: 0x2221021
    ctx->pc = 0x280084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x280088: 0xc09fff6
    ctx->pc = 0x280088u;
    SET_GPR_U32(ctx, 31, 0x280090u);
    ctx->pc = 0x28008Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280090u; }
    }
    if (ctx->pc != 0x280090u) { return; }
    ctx->pc = 0x280090u;
    // 0x280090: 0x40802d
    ctx->pc = 0x280090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280094: 0x8e42cd94
    ctx->pc = 0x280094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954388)));
    // 0x280098: 0x2221021
    ctx->pc = 0x280098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28009c: 0xc0a0006
    ctx->pc = 0x28009Cu;
    SET_GPR_U32(ctx, 31, 0x2800A4u);
    ctx->pc = 0x2800A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800A4u; }
    }
    if (ctx->pc != 0x2800A4u) { return; }
    ctx->pc = 0x2800A4u;
    // 0x2800a4: 0x3c030034
    ctx->pc = 0x2800a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2800a8: 0x246356a8
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22184));
    // 0x2800ac: 0x108080
    ctx->pc = 0x2800acu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2800b0: 0x21200
    ctx->pc = 0x2800b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x2800b4: 0x2028021
    ctx->pc = 0x2800b4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2800b8: 0x24630002
    ctx->pc = 0x2800b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x2800bc: 0x2038021
    ctx->pc = 0x2800bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2800c0: 0x86030000
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2800c4: 0xa6130000
    ctx->pc = 0x2800c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x2800c8: 0x8e42cd94
    ctx->pc = 0x2800c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954388)));
    // 0x2800cc: 0x2228821
    ctx->pc = 0x2800ccu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2800d0: 0xa62300e6
    ctx->pc = 0x2800d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 230), (uint16_t)GPR_U32(ctx, 3));
    // 0x2800d4: 0xdfbf0040
    ctx->pc = 0x2800d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2800d8: 0xdfb30030
    ctx->pc = 0x2800d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2800dc: 0xdfb20020
    ctx->pc = 0x2800dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2800e0: 0xdfb10010
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2800e4: 0xdfb00000
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2800e8: 0x3e00008
    ctx->pc = 0x2800E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2800ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2800F0u;
}
