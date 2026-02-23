#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_DecodeFrm
// Address: 0x19a4b0 - 0x19a5e0
void SFMPVP_DecodeFrm_0x19a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_DecodeFrm");


    ctx->pc = 0x19a4b0u;

    // 0x19a4b0: 0x27bdff80
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19a4b4: 0xffb40040
    ctx->pc = 0x19a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19a4b8: 0xffb00000
    ctx->pc = 0x19a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a4bc: 0x100a02d
    ctx->pc = 0x19a4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4c0: 0xffb60060
    ctx->pc = 0x19a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x19a4c4: 0x80802d
    ctx->pc = 0x19a4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4c8: 0xffb30030
    ctx->pc = 0x19a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19a4cc: 0xc0b02d
    ctx->pc = 0x19a4ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4d0: 0xffb10010
    ctx->pc = 0x19a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a4d4: 0xe0982d
    ctx->pc = 0x19a4d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4d8: 0xffbf0070
    ctx->pc = 0x19a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19a4dc: 0xa0882d
    ctx->pc = 0x19a4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4e0: 0xffb50050
    ctx->pc = 0x19a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19a4e4: 0x280202d
    ctx->pc = 0x19a4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4e8: 0xc066774
    ctx->pc = 0x19A4E8u;
    SET_GPR_U32(ctx, 31, 0x19A4F0u);
    ctx->pc = 0x19A4ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4F0u; }
        else if (ctx->pc != 0x19A4F0u) { ctx->pc = 0x19A4F0u; }
    }
    if (ctx->pc != 0x19A4F0u) { return; }
    ctx->pc = 0x19A4F0u;
    // 0x19a4f0: 0x14400007
    ctx->pc = 0x19A4F0u;
    {
        const bool branch_taken_0x19a4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A4F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a4f0) {
            ctx->pc = 0x19A510u;
            goto label_19a510;
        }
    }
    ctx->pc = 0x19A4F8u;
    // 0x19a4f8: 0x220282d
    ctx->pc = 0x19a4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4fc: 0x2c0302d
    ctx->pc = 0x19a4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a500: 0xc061864
    ctx->pc = 0x19A500u;
    SET_GPR_U32(ctx, 31, 0x19A508u);
    ctx->pc = 0x19A504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186190u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_DecodeFrm_0x186190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A508u; }
        else if (ctx->pc != 0x19A508u) { ctx->pc = 0x19A508u; }
    }
    if (ctx->pc != 0x19A508u) { return; }
    ctx->pc = 0x19A508u;
    // 0x19a508: 0x1000002c
    ctx->pc = 0x19A508u;
    {
        const bool branch_taken_0x19a508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A50Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19a508) {
            ctx->pc = 0x19A5BCu;
            goto label_19a5bc;
        }
    }
    ctx->pc = 0x19A510u;
label_19a510:
    // 0x19a510: 0x220282d
    ctx->pc = 0x19a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a514: 0x2c0302d
    ctx->pc = 0x19a514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a518: 0xc0618ce
    ctx->pc = 0x19A518u;
    SET_GPR_U32(ctx, 31, 0x19A520u);
    ctx->pc = 0x19A51Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 15736));
    ctx->pc = 0x186338u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SkipFrm_0x186338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A520u; }
        else if (ctx->pc != 0x19A520u) { ctx->pc = 0x19A520u; }
    }
    if (ctx->pc != 0x19A520u) { return; }
    ctx->pc = 0x19A520u;
    // 0x19a520: 0x26923d10
    ctx->pc = 0x19a520u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 15632));
    // 0x19a524: 0x8e730020
    ctx->pc = 0x19a524u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x19a528: 0x40a82d
    ctx->pc = 0x19a528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a52c: 0x220202d
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a530: 0xc066682
    ctx->pc = 0x19A530u;
    SET_GPR_U32(ctx, 31, 0x19A538u);
    ctx->pc = 0x19A534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 14148));
    ctx->pc = 0x199A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA_0x199a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A538u; }
        else if (ctx->pc != 0x19A538u) { ctx->pc = 0x19A538u; }
    }
    if (ctx->pc != 0x19A538u) { return; }
    ctx->pc = 0x19A538u;
    // 0x19a538: 0xc0665c6
    ctx->pc = 0x19A538u;
    SET_GPR_U32(ctx, 31, 0x19A540u);
    ctx->pc = 0x19A53Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199718u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x199718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A540u; }
        else if (ctx->pc != 0x19A540u) { ctx->pc = 0x19A540u; }
    }
    if (ctx->pc != 0x19A540u) { return; }
    ctx->pc = 0x19A540u;
    // 0x19a540: 0x24030001
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a544: 0x2408ffff
    ctx->pc = 0x19a544u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a548: 0xae430014
    ctx->pc = 0x19a548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x19a54c: 0x260282d
    ctx->pc = 0x19a54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a550: 0x8e07000c
    ctx->pc = 0x19a550u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19a554: 0x8e030008
    ctx->pc = 0x19a554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19a558: 0x107482a
    ctx->pc = 0x19a558u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x19a55c: 0x24e2000f
    ctx->pc = 0x19a55cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 15));
    // 0x19a560: 0x2466000f
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 15));
    // 0x19a564: 0x103402a
    ctx->pc = 0x19a564u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 3)));
    // 0x19a568: 0x68300b
    ctx->pc = 0x19a568u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x19a56c: 0xe9100b
    ctx->pc = 0x19a56cu;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x19a570: 0x63103
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x19a574: 0x21103
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x19a578: 0xc20018
    ctx->pc = 0x19a578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x19a57c: 0x3012
    ctx->pc = 0x19a57cu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x19a580: 0xc058e6a
    ctx->pc = 0x19A580u;
    SET_GPR_U32(ctx, 31, 0x19A588u);
    ctx->pc = 0x19A584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 15664));
    ctx->pc = 0x1639A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegGetPicture_0x1639a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A588u; }
        else if (ctx->pc != 0x19A588u) { ctx->pc = 0x19A588u; }
    }
    if (ctx->pc != 0x19A588u) { return; }
    ctx->pc = 0x19A588u;
    // 0x19a588: 0xae400014
    ctx->pc = 0x19a588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x19a58c: 0xc066642
    ctx->pc = 0x19A58Cu;
    SET_GPR_U32(ctx, 31, 0x19A594u);
    ctx->pc = 0x19A590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199908u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x199908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A594u; }
        else if (ctx->pc != 0x19A594u) { ctx->pc = 0x19A594u; }
    }
    if (ctx->pc != 0x19A594u) { return; }
    ctx->pc = 0x19A594u;
    // 0x19a594: 0xc0669e2
    ctx->pc = 0x19A594u;
    SET_GPR_U32(ctx, 31, 0x19A59Cu);
    ctx->pc = 0x19A598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A788u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvp_ConsumePsc_0x19a788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A59Cu; }
        else if (ctx->pc != 0x19A59Cu) { ctx->pc = 0x19A59Cu; }
    }
    if (ctx->pc != 0x19A59Cu) { return; }
    ctx->pc = 0x19A59Cu;
    // 0x19a59c: 0x8e420018
    ctx->pc = 0x19a59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x19a5a0: 0x10400005
    ctx->pc = 0x19A5A0u;
    {
        const bool branch_taken_0x19a5a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A5A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a5a0) {
            ctx->pc = 0x19A5B8u;
            goto label_19a5b8;
        }
    }
    ctx->pc = 0x19A5A8u;
    // 0x19a5a8: 0x3c15ffff
    ctx->pc = 0x19a5a8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)65535 << 16));
    // 0x19a5ac: 0xaec00000
    ctx->pc = 0x19a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x19a5b0: 0x36b5fffd
    ctx->pc = 0x19a5b0u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), 65533));
    // 0x19a5b4: 0x2a0102d
    ctx->pc = 0x19a5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a5b8:
    // 0x19a5b8: 0xdfbf0070
    ctx->pc = 0x19a5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19a5bc:
    // 0x19a5bc: 0xdfb60060
    ctx->pc = 0x19a5bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a5c0: 0xdfb50050
    ctx->pc = 0x19a5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a5c4: 0xdfb40040
    ctx->pc = 0x19a5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a5c8: 0xdfb30030
    ctx->pc = 0x19a5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a5cc: 0xdfb20020
    ctx->pc = 0x19a5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a5d0: 0xdfb10010
    ctx->pc = 0x19a5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5d4: 0xdfb00000
    ctx->pc = 0x19a5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a5d8: 0x3e00008
    ctx->pc = 0x19A5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A510u: goto label_19a510;
            case 0x19A5B8u: goto label_19a5b8;
            case 0x19A5BCu: goto label_19a5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A5E0u;
}
