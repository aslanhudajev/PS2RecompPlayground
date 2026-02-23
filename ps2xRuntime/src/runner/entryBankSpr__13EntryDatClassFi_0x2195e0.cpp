#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankSpr__13EntryDatClassFi
// Address: 0x2195e0 - 0x219650
void entryBankSpr__13EntryDatClassFi_0x2195e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankSpr__13EntryDatClassFi");


    ctx->pc = 0x2195e0u;

    // 0x2195e0: 0x27bdffd0
    ctx->pc = 0x2195e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2195e4: 0x7fbf0020
    ctx->pc = 0x2195e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2195e8: 0x7fb10010
    ctx->pc = 0x2195e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2195ec: 0x7fb00000
    ctx->pc = 0x2195ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2195f0: 0x84831002
    ctx->pc = 0x2195f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x2195f4: 0x24020009
    ctx->pc = 0x2195f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2195f8: 0x70a08628
    ctx->pc = 0x2195f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2195fc: 0x70808e28
    ctx->pc = 0x2195fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x219600: 0x31900
    ctx->pc = 0x219600u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219604: 0x831821
    ctx->pc = 0x219604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219608: 0xac620000
    ctx->pc = 0x219608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21960c: 0xac700008
    ctx->pc = 0x21960cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x219610: 0xc0864f0
    ctx->pc = 0x219610u;
    SET_GPR_U32(ctx, 31, 0x219618u);
    ctx->pc = 0x219614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219618u; }
        else if (ctx->pc != 0x219618u) { ctx->pc = 0x219618u; }
    }
    if (ctx->pc != 0x219618u) { return; }
    ctx->pc = 0x219618u;
    // 0x219618: 0x86231002
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4098)));
    // 0x21961c: 0x24020005
    ctx->pc = 0x21961cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x219620: 0x72202628
    ctx->pc = 0x219620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x219624: 0x31900
    ctx->pc = 0x219624u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219628: 0x2231821
    ctx->pc = 0x219628u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x21962c: 0xac620000
    ctx->pc = 0x21962cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219630: 0xac700008
    ctx->pc = 0x219630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x219634: 0xc0864f0
    ctx->pc = 0x219634u;
    SET_GPR_U32(ctx, 31, 0x21963Cu);
    ctx->pc = 0x219638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21963Cu; }
        else if (ctx->pc != 0x21963Cu) { ctx->pc = 0x21963Cu; }
    }
    if (ctx->pc != 0x21963Cu) { return; }
    ctx->pc = 0x21963Cu;
    // 0x21963c: 0x7bbf0020
    ctx->pc = 0x21963cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219640: 0x7bb10010
    ctx->pc = 0x219640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219644: 0x7bb00000
    ctx->pc = 0x219644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219648: 0x3e00008
    ctx->pc = 0x219648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21964Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219650u;
}
