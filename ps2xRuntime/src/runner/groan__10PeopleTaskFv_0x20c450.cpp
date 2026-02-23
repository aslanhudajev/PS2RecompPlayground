#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: groan__10PeopleTaskFv
// Address: 0x20c450 - 0x20c628
void groan__10PeopleTaskFv_0x20c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("groan__10PeopleTaskFv");


    ctx->pc = 0x20c450u;

label_20c450:
    // 0x20c450: 0x27bdffe0
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c454:
    // 0x20c454: 0x7fbf0010
    ctx->pc = 0x20c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_20c458:
    // 0x20c458: 0x7fb00000
    ctx->pc = 0x20c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20c45c:
    // 0x20c45c: 0x83838ba8
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20c460:
    // 0x20c460: 0x70808628
    ctx->pc = 0x20c460u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20c464:
    // 0x20c464: 0x2c610007
    ctx->pc = 0x20c464u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_20c468:
    // 0x20c468: 0x10200061
label_20c46c:
    if (ctx->pc == 0x20C46Cu) {
        ctx->pc = 0x20C46Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20C470u;
        goto label_20c470;
    }
    ctx->pc = 0x20C468u;
    {
        const bool branch_taken_0x20c468 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C46Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c468) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C470u;
label_20c470:
    // 0x20c470: 0x3c04002c
    ctx->pc = 0x20c470u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_20c474:
    // 0x20c474: 0x31880
    ctx->pc = 0x20c474u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20c478:
    // 0x20c478: 0x24840510
    ctx->pc = 0x20c478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1296));
label_20c47c:
    // 0x20c47c: 0x641821
    ctx->pc = 0x20c47cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20c480:
    // 0x20c480: 0x8c630000
    ctx->pc = 0x20c480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20c484:
    // 0x20c484: 0x600008
label_20c488:
    if (ctx->pc == 0x20C488u) {
        ctx->pc = 0x20C48Cu;
        goto label_20c48c;
    }
    ctx->pc = 0x20C484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C450u: goto label_20c450;
            case 0x20C454u: goto label_20c454;
            case 0x20C458u: goto label_20c458;
            case 0x20C45Cu: goto label_20c45c;
            case 0x20C460u: goto label_20c460;
            case 0x20C464u: goto label_20c464;
            case 0x20C468u: goto label_20c468;
            case 0x20C46Cu: goto label_20c46c;
            case 0x20C470u: goto label_20c470;
            case 0x20C474u: goto label_20c474;
            case 0x20C478u: goto label_20c478;
            case 0x20C47Cu: goto label_20c47c;
            case 0x20C480u: goto label_20c480;
            case 0x20C484u: goto label_20c484;
            case 0x20C488u: goto label_20c488;
            case 0x20C48Cu: goto label_20c48c;
            case 0x20C490u: goto label_20c490;
            case 0x20C494u: goto label_20c494;
            case 0x20C498u: goto label_20c498;
            case 0x20C49Cu: goto label_20c49c;
            case 0x20C4A0u: goto label_20c4a0;
            case 0x20C4A4u: goto label_20c4a4;
            case 0x20C4A8u: goto label_20c4a8;
            case 0x20C4ACu: goto label_20c4ac;
            case 0x20C4B0u: goto label_20c4b0;
            case 0x20C4B4u: goto label_20c4b4;
            case 0x20C4B8u: goto label_20c4b8;
            case 0x20C4BCu: goto label_20c4bc;
            case 0x20C4C0u: goto label_20c4c0;
            case 0x20C4C4u: goto label_20c4c4;
            case 0x20C4C8u: goto label_20c4c8;
            case 0x20C4CCu: goto label_20c4cc;
            case 0x20C4D0u: goto label_20c4d0;
            case 0x20C4D4u: goto label_20c4d4;
            case 0x20C4D8u: goto label_20c4d8;
            case 0x20C4DCu: goto label_20c4dc;
            case 0x20C4E0u: goto label_20c4e0;
            case 0x20C4E4u: goto label_20c4e4;
            case 0x20C4E8u: goto label_20c4e8;
            case 0x20C4ECu: goto label_20c4ec;
            case 0x20C4F0u: goto label_20c4f0;
            case 0x20C4F4u: goto label_20c4f4;
            case 0x20C4F8u: goto label_20c4f8;
            case 0x20C4FCu: goto label_20c4fc;
            case 0x20C500u: goto label_20c500;
            case 0x20C504u: goto label_20c504;
            case 0x20C508u: goto label_20c508;
            case 0x20C50Cu: goto label_20c50c;
            case 0x20C510u: goto label_20c510;
            case 0x20C514u: goto label_20c514;
            case 0x20C518u: goto label_20c518;
            case 0x20C51Cu: goto label_20c51c;
            case 0x20C520u: goto label_20c520;
            case 0x20C524u: goto label_20c524;
            case 0x20C528u: goto label_20c528;
            case 0x20C52Cu: goto label_20c52c;
            case 0x20C530u: goto label_20c530;
            case 0x20C534u: goto label_20c534;
            case 0x20C538u: goto label_20c538;
            case 0x20C53Cu: goto label_20c53c;
            case 0x20C540u: goto label_20c540;
            case 0x20C544u: goto label_20c544;
            case 0x20C548u: goto label_20c548;
            case 0x20C54Cu: goto label_20c54c;
            case 0x20C550u: goto label_20c550;
            case 0x20C554u: goto label_20c554;
            case 0x20C558u: goto label_20c558;
            case 0x20C55Cu: goto label_20c55c;
            case 0x20C560u: goto label_20c560;
            case 0x20C564u: goto label_20c564;
            case 0x20C568u: goto label_20c568;
            case 0x20C56Cu: goto label_20c56c;
            case 0x20C570u: goto label_20c570;
            case 0x20C574u: goto label_20c574;
            case 0x20C578u: goto label_20c578;
            case 0x20C57Cu: goto label_20c57c;
            case 0x20C580u: goto label_20c580;
            case 0x20C584u: goto label_20c584;
            case 0x20C588u: goto label_20c588;
            case 0x20C58Cu: goto label_20c58c;
            case 0x20C590u: goto label_20c590;
            case 0x20C594u: goto label_20c594;
            case 0x20C598u: goto label_20c598;
            case 0x20C59Cu: goto label_20c59c;
            case 0x20C5A0u: goto label_20c5a0;
            case 0x20C5A4u: goto label_20c5a4;
            case 0x20C5A8u: goto label_20c5a8;
            case 0x20C5ACu: goto label_20c5ac;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5B4u: goto label_20c5b4;
            case 0x20C5B8u: goto label_20c5b8;
            case 0x20C5BCu: goto label_20c5bc;
            case 0x20C5C0u: goto label_20c5c0;
            case 0x20C5C4u: goto label_20c5c4;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5CCu: goto label_20c5cc;
            case 0x20C5D0u: goto label_20c5d0;
            case 0x20C5D4u: goto label_20c5d4;
            case 0x20C5D8u: goto label_20c5d8;
            case 0x20C5DCu: goto label_20c5dc;
            case 0x20C5E0u: goto label_20c5e0;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5E8u: goto label_20c5e8;
            case 0x20C5ECu: goto label_20c5ec;
            case 0x20C5F0u: goto label_20c5f0;
            case 0x20C5F4u: goto label_20c5f4;
            case 0x20C5F8u: goto label_20c5f8;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C608u: goto label_20c608;
            case 0x20C60Cu: goto label_20c60c;
            case 0x20C610u: goto label_20c610;
            case 0x20C614u: goto label_20c614;
            case 0x20C618u: goto label_20c618;
            case 0x20C61Cu: goto label_20c61c;
            case 0x20C620u: goto label_20c620;
            case 0x20C624u: goto label_20c624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C48Cu;
label_20c48c:
    // 0x20c48c: 0x8e041db0
    ctx->pc = 0x20c48cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c490:
    // 0x20c490: 0x24030001
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c494:
    // 0x20c494: 0x14830003
label_20c498:
    if (ctx->pc == 0x20C498u) {
        ctx->pc = 0x20C498u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        ctx->pc = 0x20C49Cu;
        goto label_20c49c;
    }
    ctx->pc = 0x20C494u;
    {
        const bool branch_taken_0x20c494 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C498u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        if (branch_taken_0x20c494) {
            ctx->pc = 0x20C4A4u;
            goto label_20c4a4;
        }
    }
    ctx->pc = 0x20C49Cu;
label_20c49c:
    // 0x20c49c: 0x10000054
label_20c4a0:
    if (ctx->pc == 0x20C4A0u) {
        ctx->pc = 0x20C4A0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 29));
        ctx->pc = 0x20C4A4u;
        goto label_20c4a4;
    }
    ctx->pc = 0x20C49Cu;
    {
        const bool branch_taken_0x20c49c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4A0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 29));
        if (branch_taken_0x20c49c) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C4A4u;
label_20c4a4:
    // 0x20c4a4: 0xc069fb8
label_20c4a8:
    if (ctx->pc == 0x20C4A8u) {
        ctx->pc = 0x20C4ACu;
        goto label_20c4ac;
    }
    ctx->pc = 0x20C4A4u;
    SET_GPR_U32(ctx, 31, 0x20C4ACu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4ACu; }
        else if (ctx->pc != 0x20C4ACu) { ctx->pc = 0x20C4ACu; }
    }
    if (ctx->pc != 0x20C4ACu) { return; }
    ctx->pc = 0x20C4ACu;
label_20c4ac:
    // 0x20c4ac: 0x4410004
label_20c4b0:
    if (ctx->pc == 0x20C4B0u) {
        ctx->pc = 0x20C4B0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C4B4u;
        goto label_20c4b4;
    }
    ctx->pc = 0x20C4ACu;
    {
        const bool branch_taken_0x20c4ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C4B0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c4ac) {
            ctx->pc = 0x20C4C0u;
            goto label_20c4c0;
        }
    }
    ctx->pc = 0x20C4B4u;
label_20c4b4:
    // 0x20c4b4: 0x10800003
label_20c4b8:
    if (ctx->pc == 0x20C4B8u) {
        ctx->pc = 0x20C4B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        ctx->pc = 0x20C4BCu;
        goto label_20c4bc;
    }
    ctx->pc = 0x20C4B4u;
    {
        const bool branch_taken_0x20c4b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        if (branch_taken_0x20c4b4) {
            ctx->pc = 0x20C4C4u;
            goto label_20c4c4;
        }
    }
    ctx->pc = 0x20C4BCu;
label_20c4bc:
    // 0x20c4bc: 0x2484fffe
    ctx->pc = 0x20c4bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c4c0:
    // 0x20c4c0: 0x3c030015
    ctx->pc = 0x20c4c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
label_20c4c4:
    // 0x20c4c4: 0x34650015
    ctx->pc = 0x20c4c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
label_20c4c8:
    // 0x20c4c8: 0x34630016
    ctx->pc = 0x20c4c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 22));
label_20c4cc:
    // 0x20c4cc: 0x10000048
label_20c4d0:
    if (ctx->pc == 0x20C4D0u) {
        ctx->pc = 0x20C4D0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C4D4u;
        goto label_20c4d4;
    }
    ctx->pc = 0x20C4CCu;
    {
        const bool branch_taken_0x20c4cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4D0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c4cc) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C4D4u;
label_20c4d4:
    // 0x20c4d4: 0x8e041db0
    ctx->pc = 0x20c4d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c4d8:
    // 0x20c4d8: 0x24030001
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c4dc:
    // 0x20c4dc: 0x14830003
label_20c4e0:
    if (ctx->pc == 0x20C4E0u) {
        ctx->pc = 0x20C4E0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
        ctx->pc = 0x20C4E4u;
        goto label_20c4e4;
    }
    ctx->pc = 0x20C4DCu;
    {
        const bool branch_taken_0x20c4dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C4E0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
        if (branch_taken_0x20c4dc) {
            ctx->pc = 0x20C4ECu;
            goto label_20c4ec;
        }
    }
    ctx->pc = 0x20C4E4u;
label_20c4e4:
    // 0x20c4e4: 0x10000042
label_20c4e8:
    if (ctx->pc == 0x20C4E8u) {
        ctx->pc = 0x20C4E8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
        ctx->pc = 0x20C4ECu;
        goto label_20c4ec;
    }
    ctx->pc = 0x20C4E4u;
    {
        const bool branch_taken_0x20c4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C4E8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
        if (branch_taken_0x20c4e4) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C4ECu;
label_20c4ec:
    // 0x20c4ec: 0xc069fb8
label_20c4f0:
    if (ctx->pc == 0x20C4F0u) {
        ctx->pc = 0x20C4F4u;
        goto label_20c4f4;
    }
    ctx->pc = 0x20C4ECu;
    SET_GPR_U32(ctx, 31, 0x20C4F4u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4F4u; }
        else if (ctx->pc != 0x20C4F4u) { ctx->pc = 0x20C4F4u; }
    }
    if (ctx->pc != 0x20C4F4u) { return; }
    ctx->pc = 0x20C4F4u;
label_20c4f4:
    // 0x20c4f4: 0x4410004
label_20c4f8:
    if (ctx->pc == 0x20C4F8u) {
        ctx->pc = 0x20C4F8u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C4FCu;
        goto label_20c4fc;
    }
    ctx->pc = 0x20C4F4u;
    {
        const bool branch_taken_0x20c4f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C4F8u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c4f4) {
            ctx->pc = 0x20C508u;
            goto label_20c508;
        }
    }
    ctx->pc = 0x20C4FCu;
label_20c4fc:
    // 0x20c4fc: 0x10800003
label_20c500:
    if (ctx->pc == 0x20C500u) {
        ctx->pc = 0x20C500u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
        ctx->pc = 0x20C504u;
        goto label_20c504;
    }
    ctx->pc = 0x20C4FCu;
    {
        const bool branch_taken_0x20c4fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C500u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
        if (branch_taken_0x20c4fc) {
            ctx->pc = 0x20C50Cu;
            goto label_20c50c;
        }
    }
    ctx->pc = 0x20C504u;
label_20c504:
    // 0x20c504: 0x2484fffe
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c508:
    // 0x20c508: 0x3c03000f
    ctx->pc = 0x20c508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
label_20c50c:
    // 0x20c50c: 0x3465000c
    ctx->pc = 0x20c50cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 12));
label_20c510:
    // 0x20c510: 0x3463000d
    ctx->pc = 0x20c510u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13));
label_20c514:
    // 0x20c514: 0x10000036
label_20c518:
    if (ctx->pc == 0x20C518u) {
        ctx->pc = 0x20C518u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C51Cu;
        goto label_20c51c;
    }
    ctx->pc = 0x20C514u;
    {
        const bool branch_taken_0x20c514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C518u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c514) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C51Cu;
label_20c51c:
    // 0x20c51c: 0x8e041db0
    ctx->pc = 0x20c51cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c520:
    // 0x20c520: 0x24030001
    ctx->pc = 0x20c520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c524:
    // 0x20c524: 0x14830003
label_20c528:
    if (ctx->pc == 0x20C528u) {
        ctx->pc = 0x20C528u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        ctx->pc = 0x20C52Cu;
        goto label_20c52c;
    }
    ctx->pc = 0x20C524u;
    {
        const bool branch_taken_0x20c524 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C528u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x20c524) {
            ctx->pc = 0x20C534u;
            goto label_20c534;
        }
    }
    ctx->pc = 0x20C52Cu;
label_20c52c:
    // 0x20c52c: 0x10000030
label_20c530:
    if (ctx->pc == 0x20C530u) {
        ctx->pc = 0x20C530u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
        ctx->pc = 0x20C534u;
        goto label_20c534;
    }
    ctx->pc = 0x20C52Cu;
    {
        const bool branch_taken_0x20c52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C530u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x20c52c) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C534u;
label_20c534:
    // 0x20c534: 0xc069fb8
label_20c538:
    if (ctx->pc == 0x20C538u) {
        ctx->pc = 0x20C53Cu;
        goto label_20c53c;
    }
    ctx->pc = 0x20C534u;
    SET_GPR_U32(ctx, 31, 0x20C53Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C53Cu; }
        else if (ctx->pc != 0x20C53Cu) { ctx->pc = 0x20C53Cu; }
    }
    if (ctx->pc != 0x20C53Cu) { return; }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x4410004
label_20c540:
    if (ctx->pc == 0x20C540u) {
        ctx->pc = 0x20C540u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C544u;
        goto label_20c544;
    }
    ctx->pc = 0x20C53Cu;
    {
        const bool branch_taken_0x20c53c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C540u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c53c) {
            ctx->pc = 0x20C550u;
            goto label_20c550;
        }
    }
    ctx->pc = 0x20C544u;
label_20c544:
    // 0x20c544: 0x10800003
label_20c548:
    if (ctx->pc == 0x20C548u) {
        ctx->pc = 0x20C548u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        ctx->pc = 0x20C54Cu;
        goto label_20c54c;
    }
    ctx->pc = 0x20C544u;
    {
        const bool branch_taken_0x20c544 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C548u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x20c544) {
            ctx->pc = 0x20C554u;
            goto label_20c554;
        }
    }
    ctx->pc = 0x20C54Cu;
label_20c54c:
    // 0x20c54c: 0x2484fffe
    ctx->pc = 0x20c54cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c550:
    // 0x20c550: 0x3c030008
    ctx->pc = 0x20c550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_20c554:
    // 0x20c554: 0x3465000e
    ctx->pc = 0x20c554u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
label_20c558:
    // 0x20c558: 0x3463000f
    ctx->pc = 0x20c558u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 15));
label_20c55c:
    // 0x20c55c: 0x10000024
label_20c560:
    if (ctx->pc == 0x20C560u) {
        ctx->pc = 0x20C560u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C564u;
        goto label_20c564;
    }
    ctx->pc = 0x20C55Cu;
    {
        const bool branch_taken_0x20c55c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C560u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c55c) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C564u;
label_20c564:
    // 0x20c564: 0x8e041db0
    ctx->pc = 0x20c564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c568:
    // 0x20c568: 0x24030001
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c56c:
    // 0x20c56c: 0x14830003
label_20c570:
    if (ctx->pc == 0x20C570u) {
        ctx->pc = 0x20C570u;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        ctx->pc = 0x20C574u;
        goto label_20c574;
    }
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C570u;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C57Cu;
            goto label_20c57c;
        }
    }
    ctx->pc = 0x20C574u;
label_20c574:
    // 0x20c574: 0x1000001e
label_20c578:
    if (ctx->pc == 0x20C578u) {
        ctx->pc = 0x20C578u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
        ctx->pc = 0x20C57Cu;
        goto label_20c57c;
    }
    ctx->pc = 0x20C574u;
    {
        const bool branch_taken_0x20c574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C578u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x20c574) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0xc069fb8
label_20c580:
    if (ctx->pc == 0x20C580u) {
        ctx->pc = 0x20C584u;
        goto label_20c584;
    }
    ctx->pc = 0x20C57Cu;
    SET_GPR_U32(ctx, 31, 0x20C584u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C584u; }
        else if (ctx->pc != 0x20C584u) { ctx->pc = 0x20C584u; }
    }
    if (ctx->pc != 0x20C584u) { return; }
    ctx->pc = 0x20C584u;
label_20c584:
    // 0x20c584: 0x4410004
label_20c588:
    if (ctx->pc == 0x20C588u) {
        ctx->pc = 0x20C588u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C58Cu;
        goto label_20c58c;
    }
    ctx->pc = 0x20C584u;
    {
        const bool branch_taken_0x20c584 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C588u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c584) {
            ctx->pc = 0x20C598u;
            goto label_20c598;
        }
    }
    ctx->pc = 0x20C58Cu;
label_20c58c:
    // 0x20c58c: 0x10800003
label_20c590:
    if (ctx->pc == 0x20C590u) {
        ctx->pc = 0x20C590u;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        ctx->pc = 0x20C594u;
        goto label_20c594;
    }
    ctx->pc = 0x20C58Cu;
    {
        const bool branch_taken_0x20c58c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C590u;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        if (branch_taken_0x20c58c) {
            ctx->pc = 0x20C59Cu;
            goto label_20c59c;
        }
    }
    ctx->pc = 0x20C594u;
label_20c594:
    // 0x20c594: 0x2484fffe
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c598:
    // 0x20c598: 0x3c030009
    ctx->pc = 0x20c598u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
label_20c59c:
    // 0x20c59c: 0x3465000e
    ctx->pc = 0x20c59cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
label_20c5a0:
    // 0x20c5a0: 0x3463000f
    ctx->pc = 0x20c5a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 15));
label_20c5a4:
    // 0x20c5a4: 0x10000012
label_20c5a8:
    if (ctx->pc == 0x20C5A8u) {
        ctx->pc = 0x20C5A8u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C5ACu;
        goto label_20c5ac;
    }
    ctx->pc = 0x20C5A4u;
    {
        const bool branch_taken_0x20c5a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C5A8u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c5a4) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C5ACu;
label_20c5ac:
    // 0x20c5ac: 0x8e041db0
    ctx->pc = 0x20c5acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c5b0:
    // 0x20c5b0: 0x24030001
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c5b4:
    // 0x20c5b4: 0x14830003
label_20c5b8:
    if (ctx->pc == 0x20C5B8u) {
        ctx->pc = 0x20C5B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        ctx->pc = 0x20C5BCu;
        goto label_20c5bc;
    }
    ctx->pc = 0x20C5B4u;
    {
        const bool branch_taken_0x20c5b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C5B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x20c5b4) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C5BCu;
label_20c5bc:
    // 0x20c5bc: 0x1000000c
label_20c5c0:
    if (ctx->pc == 0x20C5C0u) {
        ctx->pc = 0x20C5C0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
        ctx->pc = 0x20C5C4u;
        goto label_20c5c4;
    }
    ctx->pc = 0x20C5BCu;
    {
        const bool branch_taken_0x20c5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C5C0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
        if (branch_taken_0x20c5bc) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C5C4u;
label_20c5c4:
    // 0x20c5c4: 0xc069fb8
label_20c5c8:
    if (ctx->pc == 0x20C5C8u) {
        ctx->pc = 0x20C5CCu;
        goto label_20c5cc;
    }
    ctx->pc = 0x20C5C4u;
    SET_GPR_U32(ctx, 31, 0x20C5CCu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C5CCu; }
        else if (ctx->pc != 0x20C5CCu) { ctx->pc = 0x20C5CCu; }
    }
    if (ctx->pc != 0x20C5CCu) { return; }
    ctx->pc = 0x20C5CCu;
label_20c5cc:
    // 0x20c5cc: 0x4410004
label_20c5d0:
    if (ctx->pc == 0x20C5D0u) {
        ctx->pc = 0x20C5D0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C5D4u;
        goto label_20c5d4;
    }
    ctx->pc = 0x20C5CCu;
    {
        const bool branch_taken_0x20c5cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C5D0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c5cc) {
            ctx->pc = 0x20C5E0u;
            goto label_20c5e0;
        }
    }
    ctx->pc = 0x20C5D4u;
label_20c5d4:
    // 0x20c5d4: 0x10800003
label_20c5d8:
    if (ctx->pc == 0x20C5D8u) {
        ctx->pc = 0x20C5D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        ctx->pc = 0x20C5DCu;
        goto label_20c5dc;
    }
    ctx->pc = 0x20C5D4u;
    {
        const bool branch_taken_0x20c5d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C5D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x20c5d4) {
            ctx->pc = 0x20C5E4u;
            goto label_20c5e4;
        }
    }
    ctx->pc = 0x20C5DCu;
label_20c5dc:
    // 0x20c5dc: 0x2484fffe
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c5e0:
    // 0x20c5e0: 0x3c03000a
    ctx->pc = 0x20c5e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_20c5e4:
    // 0x20c5e4: 0x3465000c
    ctx->pc = 0x20c5e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 12));
label_20c5e8:
    // 0x20c5e8: 0x34630016
    ctx->pc = 0x20c5e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 22));
label_20c5ec:
    // 0x20c5ec: 0x64280a
    ctx->pc = 0x20c5ecu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_20c5f0:
    // 0x20c5f0: 0x10a00009
label_20c5f4:
    if (ctx->pc == 0x20C5F4u) {
        ctx->pc = 0x20C5F8u;
        goto label_20c5f8;
    }
    ctx->pc = 0x20C5F0u;
    {
        const bool branch_taken_0x20c5f0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c5f0) {
            ctx->pc = 0x20C618u;
            goto label_20c618;
        }
    }
    ctx->pc = 0x20C5F8u;
label_20c5f8:
    // 0x20c5f8: 0xae051e5c
    ctx->pc = 0x20c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7772), GPR_U32(ctx, 5));
label_20c5fc:
    // 0x20c5fc: 0x82030024
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_20c600:
    // 0x20c600: 0x3c020051
    ctx->pc = 0x20c600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20c604:
    // 0x20c604: 0x244434f0
    ctx->pc = 0x20c604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20c608:
    // 0x20c608: 0x70003e28
    ctx->pc = 0x20c608u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c60c:
    // 0x20c60c: 0x24080040
    ctx->pc = 0x20c60cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20c610:
    // 0x20c610: 0xc086018
label_20c614:
    if (ctx->pc == 0x20C614u) {
        ctx->pc = 0x20C614u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x20C618u;
        goto label_20c618;
    }
    ctx->pc = 0x20C610u;
    SET_GPR_U32(ctx, 31, 0x20C618u);
    ctx->pc = 0x20C614u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C618u; }
        else if (ctx->pc != 0x20C618u) { ctx->pc = 0x20C618u; }
    }
    if (ctx->pc != 0x20C618u) { return; }
    ctx->pc = 0x20C618u;
label_20c618:
    // 0x20c618: 0x7bbf0010
    ctx->pc = 0x20c618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c61c:
    // 0x20c61c: 0x7bb00000
    ctx->pc = 0x20c61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20c620:
    // 0x20c620: 0x3e00008
label_20c624:
    if (ctx->pc == 0x20C624u) {
        ctx->pc = 0x20C624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20C628u;
        goto label_fallthrough_0x20c620;
    }
    ctx->pc = 0x20C620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C450u: goto label_20c450;
            case 0x20C454u: goto label_20c454;
            case 0x20C458u: goto label_20c458;
            case 0x20C45Cu: goto label_20c45c;
            case 0x20C460u: goto label_20c460;
            case 0x20C464u: goto label_20c464;
            case 0x20C468u: goto label_20c468;
            case 0x20C46Cu: goto label_20c46c;
            case 0x20C470u: goto label_20c470;
            case 0x20C474u: goto label_20c474;
            case 0x20C478u: goto label_20c478;
            case 0x20C47Cu: goto label_20c47c;
            case 0x20C480u: goto label_20c480;
            case 0x20C484u: goto label_20c484;
            case 0x20C488u: goto label_20c488;
            case 0x20C48Cu: goto label_20c48c;
            case 0x20C490u: goto label_20c490;
            case 0x20C494u: goto label_20c494;
            case 0x20C498u: goto label_20c498;
            case 0x20C49Cu: goto label_20c49c;
            case 0x20C4A0u: goto label_20c4a0;
            case 0x20C4A4u: goto label_20c4a4;
            case 0x20C4A8u: goto label_20c4a8;
            case 0x20C4ACu: goto label_20c4ac;
            case 0x20C4B0u: goto label_20c4b0;
            case 0x20C4B4u: goto label_20c4b4;
            case 0x20C4B8u: goto label_20c4b8;
            case 0x20C4BCu: goto label_20c4bc;
            case 0x20C4C0u: goto label_20c4c0;
            case 0x20C4C4u: goto label_20c4c4;
            case 0x20C4C8u: goto label_20c4c8;
            case 0x20C4CCu: goto label_20c4cc;
            case 0x20C4D0u: goto label_20c4d0;
            case 0x20C4D4u: goto label_20c4d4;
            case 0x20C4D8u: goto label_20c4d8;
            case 0x20C4DCu: goto label_20c4dc;
            case 0x20C4E0u: goto label_20c4e0;
            case 0x20C4E4u: goto label_20c4e4;
            case 0x20C4E8u: goto label_20c4e8;
            case 0x20C4ECu: goto label_20c4ec;
            case 0x20C4F0u: goto label_20c4f0;
            case 0x20C4F4u: goto label_20c4f4;
            case 0x20C4F8u: goto label_20c4f8;
            case 0x20C4FCu: goto label_20c4fc;
            case 0x20C500u: goto label_20c500;
            case 0x20C504u: goto label_20c504;
            case 0x20C508u: goto label_20c508;
            case 0x20C50Cu: goto label_20c50c;
            case 0x20C510u: goto label_20c510;
            case 0x20C514u: goto label_20c514;
            case 0x20C518u: goto label_20c518;
            case 0x20C51Cu: goto label_20c51c;
            case 0x20C520u: goto label_20c520;
            case 0x20C524u: goto label_20c524;
            case 0x20C528u: goto label_20c528;
            case 0x20C52Cu: goto label_20c52c;
            case 0x20C530u: goto label_20c530;
            case 0x20C534u: goto label_20c534;
            case 0x20C538u: goto label_20c538;
            case 0x20C53Cu: goto label_20c53c;
            case 0x20C540u: goto label_20c540;
            case 0x20C544u: goto label_20c544;
            case 0x20C548u: goto label_20c548;
            case 0x20C54Cu: goto label_20c54c;
            case 0x20C550u: goto label_20c550;
            case 0x20C554u: goto label_20c554;
            case 0x20C558u: goto label_20c558;
            case 0x20C55Cu: goto label_20c55c;
            case 0x20C560u: goto label_20c560;
            case 0x20C564u: goto label_20c564;
            case 0x20C568u: goto label_20c568;
            case 0x20C56Cu: goto label_20c56c;
            case 0x20C570u: goto label_20c570;
            case 0x20C574u: goto label_20c574;
            case 0x20C578u: goto label_20c578;
            case 0x20C57Cu: goto label_20c57c;
            case 0x20C580u: goto label_20c580;
            case 0x20C584u: goto label_20c584;
            case 0x20C588u: goto label_20c588;
            case 0x20C58Cu: goto label_20c58c;
            case 0x20C590u: goto label_20c590;
            case 0x20C594u: goto label_20c594;
            case 0x20C598u: goto label_20c598;
            case 0x20C59Cu: goto label_20c59c;
            case 0x20C5A0u: goto label_20c5a0;
            case 0x20C5A4u: goto label_20c5a4;
            case 0x20C5A8u: goto label_20c5a8;
            case 0x20C5ACu: goto label_20c5ac;
            case 0x20C5B0u: goto label_20c5b0;
            case 0x20C5B4u: goto label_20c5b4;
            case 0x20C5B8u: goto label_20c5b8;
            case 0x20C5BCu: goto label_20c5bc;
            case 0x20C5C0u: goto label_20c5c0;
            case 0x20C5C4u: goto label_20c5c4;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5CCu: goto label_20c5cc;
            case 0x20C5D0u: goto label_20c5d0;
            case 0x20C5D4u: goto label_20c5d4;
            case 0x20C5D8u: goto label_20c5d8;
            case 0x20C5DCu: goto label_20c5dc;
            case 0x20C5E0u: goto label_20c5e0;
            case 0x20C5E4u: goto label_20c5e4;
            case 0x20C5E8u: goto label_20c5e8;
            case 0x20C5ECu: goto label_20c5ec;
            case 0x20C5F0u: goto label_20c5f0;
            case 0x20C5F4u: goto label_20c5f4;
            case 0x20C5F8u: goto label_20c5f8;
            case 0x20C5FCu: goto label_20c5fc;
            case 0x20C600u: goto label_20c600;
            case 0x20C604u: goto label_20c604;
            case 0x20C608u: goto label_20c608;
            case 0x20C60Cu: goto label_20c60c;
            case 0x20C610u: goto label_20c610;
            case 0x20C614u: goto label_20c614;
            case 0x20C618u: goto label_20c618;
            case 0x20C61Cu: goto label_20c61c;
            case 0x20C620u: goto label_20c620;
            case 0x20C624u: goto label_20c624;
            default: break;
        }
        return;
    }
label_fallthrough_0x20c620:
    ctx->pc = 0x20C628u;
}
