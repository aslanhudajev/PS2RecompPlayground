#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupDynGrid
// Address: 0x280170 - 0x2802bc
void SetupDynGrid_0x280170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280170u;

    // 0x280170: 0x27bdffa0
    ctx->pc = 0x280170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x280174: 0xffbf0050
    ctx->pc = 0x280174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x280178: 0xffb40040
    ctx->pc = 0x280178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28017c: 0xffb30030
    ctx->pc = 0x28017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x280180: 0xffb20020
    ctx->pc = 0x280180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x280184: 0xffb10010
    ctx->pc = 0x280184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280188: 0xffb00000
    ctx->pc = 0x280188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28018c: 0x302d
    ctx->pc = 0x28018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280190: 0x3c020034
    ctx->pc = 0x280190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x280194: 0x244956a8
    ctx->pc = 0x280194u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 22184));
    // 0x280198: 0x2407ffff
    ctx->pc = 0x280198u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28019c: 0x3c020034
    ctx->pc = 0x28019cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2801a0: 0x244856aa
    ctx->pc = 0x2801a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 22186));
    // 0x2801a4: 0x202d
    ctx->pc = 0x2801a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2801a8:
    // 0x2801a8: 0x62a00
    ctx->pc = 0x2801a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 8));
    // 0x2801ac: 0x41080
    ctx->pc = 0x2801acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2801b0:
    // 0x2801b0: 0x451021
    ctx->pc = 0x2801b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2801b4: 0x491821
    ctx->pc = 0x2801b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2801b8: 0xa4670000
    ctx->pc = 0x2801b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2801bc: 0x481021
    ctx->pc = 0x2801bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2801c0: 0xa4470000
    ctx->pc = 0x2801c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2801c4: 0x24840001
    ctx->pc = 0x2801c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2801c8: 0x28820040
    ctx->pc = 0x2801c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 64));
    // 0x2801cc: 0x1440fff8
    ctx->pc = 0x2801CCu;
    {
        const bool branch_taken_0x2801cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2801D0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2801cc) {
            ctx->pc = 0x2801B0u;
            goto label_2801b0;
        }
    }
    ctx->pc = 0x2801D4u;
    // 0x2801d4: 0x24c60001
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2801d8: 0x28c20040
    ctx->pc = 0x2801d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 64));
    // 0x2801dc: 0x5440fff2
    ctx->pc = 0x2801DCu;
    {
        const bool branch_taken_0x2801dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2801dc) {
            ctx->pc = 0x2801E0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2801A8u;
            goto label_2801a8;
        }
    }
    ctx->pc = 0x2801E4u;
    // 0x2801e4: 0x3c020034
    ctx->pc = 0x2801e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2801e8: 0x8c42cd98
    ctx->pc = 0x2801e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x2801ec: 0x18400016
    ctx->pc = 0x2801ECu;
    {
        const bool branch_taken_0x2801ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2801F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2801ec) {
            ctx->pc = 0x280248u;
            goto label_280248;
        }
    }
    ctx->pc = 0x2801F4u;
    // 0x2801f4: 0x3c140034
    ctx->pc = 0x2801f4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x2801f8: 0x24130110
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 272));
    // 0x2801fc: 0x2411ffff
    ctx->pc = 0x2801fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280200: 0x3c120034
    ctx->pc = 0x280200u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x280204: 0x8e83cd94
    ctx->pc = 0x280204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294954388)));
label_280208:
    // 0x280208: 0x2131018
    ctx->pc = 0x280208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28020c: 0x431821
    ctx->pc = 0x28020cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280210: 0x846200d8
    ctx->pc = 0x280210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x280214: 0x50510008
    ctx->pc = 0x280214u;
    {
        const bool branch_taken_0x280214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x280214) {
            ctx->pc = 0x280218u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x280238u;
            goto label_280238;
        }
    }
    ctx->pc = 0x28021Cu;
    // 0x28021c: 0x8c620000
    ctx->pc = 0x28021cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280220: 0x8c420000
    ctx->pc = 0x280220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280224: 0x50510004
    ctx->pc = 0x280224u;
    {
        const bool branch_taken_0x280224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x280224) {
            ctx->pc = 0x280228u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x280238u;
            goto label_280238;
        }
    }
    ctx->pc = 0x28022Cu;
    // 0x28022c: 0xc0a0016
    ctx->pc = 0x28022Cu;
    SET_GPR_U32(ctx, 31, 0x280234u);
    ctx->pc = 0x280230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280058u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItemInGrid_0x280058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280234u; }
    }
    if (ctx->pc != 0x280234u) { return; }
    ctx->pc = 0x280234u;
    // 0x280234: 0x26100001
    ctx->pc = 0x280234u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_280238:
    // 0x280238: 0x8e42cd98
    ctx->pc = 0x280238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
    // 0x28023c: 0x202102a
    ctx->pc = 0x28023cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x280240: 0x1440fff1
    ctx->pc = 0x280240u;
    {
        const bool branch_taken_0x280240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280244u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294954388)));
        if (branch_taken_0x280240) {
            ctx->pc = 0x280208u;
            goto label_280208;
        }
    }
    ctx->pc = 0x280248u;
label_280248:
    // 0x280248: 0x3c020033
    ctx->pc = 0x280248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28024c: 0x8c423c00
    ctx->pc = 0x28024cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x280250: 0x18400012
    ctx->pc = 0x280250u;
    {
        const bool branch_taken_0x280250 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280254u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280250) {
            ctx->pc = 0x28029Cu;
            goto label_28029c;
        }
    }
    ctx->pc = 0x280258u;
    // 0x280258: 0x3c020033
    ctx->pc = 0x280258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28025c: 0x2453dfd0
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x280260: 0x241203b0
    ctx->pc = 0x280260u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 944));
    // 0x280264: 0x3c110033
    ctx->pc = 0x280264u;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
    // 0x280268: 0x2121818
    ctx->pc = 0x280268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28026c: 0x0
    ctx->pc = 0x28026cu;
    // NOP
label_280270:
    // 0x280270: 0x731021
    ctx->pc = 0x280270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x280274: 0x8c4200c8
    ctx->pc = 0x280274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x280278: 0x50400004
    ctx->pc = 0x280278u;
    {
        const bool branch_taken_0x280278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280278) {
            ctx->pc = 0x28027Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28028Cu;
            goto label_28028c;
        }
    }
    ctx->pc = 0x280280u;
    // 0x280280: 0xc0a003c
    ctx->pc = 0x280280u;
    SET_GPR_U32(ctx, 31, 0x280288u);
    ctx->pc = 0x280284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2800F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEnemyInGrid_0x2800f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280288u; }
    }
    if (ctx->pc != 0x280288u) { return; }
    ctx->pc = 0x280288u;
    // 0x280288: 0x26100001
    ctx->pc = 0x280288u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28028c:
    // 0x28028c: 0x8e223c00
    ctx->pc = 0x28028cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 15360)));
    // 0x280290: 0x202102a
    ctx->pc = 0x280290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x280294: 0x1440fff6
    ctx->pc = 0x280294u;
    {
        const bool branch_taken_0x280294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280298u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x280294) {
            ctx->pc = 0x280270u;
            goto label_280270;
        }
    }
    ctx->pc = 0x28029Cu;
label_28029c:
    // 0x28029c: 0xdfbf0050
    ctx->pc = 0x28029cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2802a0: 0xdfb40040
    ctx->pc = 0x2802a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2802a4: 0xdfb30030
    ctx->pc = 0x2802a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2802a8: 0xdfb20020
    ctx->pc = 0x2802a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2802ac: 0xdfb10010
    ctx->pc = 0x2802acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2802b0: 0xdfb00000
    ctx->pc = 0x2802b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2802b4: 0x3e00008
    ctx->pc = 0x2802B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2802B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2801A8u: goto label_2801a8;
            case 0x2801B0u: goto label_2801b0;
            case 0x280208u: goto label_280208;
            case 0x280238u: goto label_280238;
            case 0x280248u: goto label_280248;
            case 0x280270u: goto label_280270;
            case 0x28028Cu: goto label_28028c;
            case 0x28029Cu: goto label_28029c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2802BCu;
}
