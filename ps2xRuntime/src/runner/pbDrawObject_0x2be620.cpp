#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDrawObject
// Address: 0x2be620 - 0x2be9e0
void pbDrawObject_0x2be620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2be620u;

    // 0x2be620: 0x27bdff30
    ctx->pc = 0x2be620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2be624: 0xffbf00c0
    ctx->pc = 0x2be624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2be628: 0xffbe00b0
    ctx->pc = 0x2be628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2be62c: 0xffb700a0
    ctx->pc = 0x2be62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2be630: 0xffb60090
    ctx->pc = 0x2be630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2be634: 0xffb50080
    ctx->pc = 0x2be634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2be638: 0xffb40070
    ctx->pc = 0x2be638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2be63c: 0xffb30060
    ctx->pc = 0x2be63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2be640: 0xffb20050
    ctx->pc = 0x2be640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2be644: 0xffb10040
    ctx->pc = 0x2be644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2be648: 0xffb00030
    ctx->pc = 0x2be648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2be64c: 0xa0982d
    ctx->pc = 0x2be64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be650: 0xafa60024
    ctx->pc = 0x2be650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2be654: 0x3c020036
    ctx->pc = 0x2be654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2be658: 0x8c50dee0
    ctx->pc = 0x2be658u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2be65c: 0x8e62006c
    ctx->pc = 0x2be65cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2be660: 0x14400003
    ctx->pc = 0x2BE660u;
    {
        const bool branch_taken_0x2be660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE664u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be660) {
            ctx->pc = 0x2BE670u;
            goto label_2be670;
        }
    }
    ctx->pc = 0x2BE668u;
    // 0x2be668: 0x100000d1
    ctx->pc = 0x2BE668u;
    {
        const bool branch_taken_0x2be668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE66Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be668) {
            ctx->pc = 0x2BE9B0u;
            goto label_2be9b0;
        }
    }
    ctx->pc = 0x2BE670u;
label_2be670:
    // 0x2be670: 0x967e006e
    ctx->pc = 0x2be670u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
    // 0x2be674: 0x8e020038
    ctx->pc = 0x2be674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2be678: 0x1e1900
    ctx->pc = 0x2be678u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 4));
    // 0x2be67c: 0x431021
    ctx->pc = 0x2be67cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be680: 0x8c420010
    ctx->pc = 0x2be680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2be684: 0x14400004
    ctx->pc = 0x2BE684u;
    {
        const bool branch_taken_0x2be684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE688u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 112)));
        if (branch_taken_0x2be684) {
            ctx->pc = 0x2BE698u;
            goto label_2be698;
        }
    }
    ctx->pc = 0x2BE68Cu;
    // 0x2be68c: 0x8e42000c
    ctx->pc = 0x2be68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2be690: 0x14400003
    ctx->pc = 0x2BE690u;
    {
        const bool branch_taken_0x2be690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be690) {
            ctx->pc = 0x2BE6A0u;
            goto label_2be6a0;
        }
    }
    ctx->pc = 0x2BE698u;
label_2be698:
    // 0x2be698: 0x100000c5
    ctx->pc = 0x2BE698u;
    {
        const bool branch_taken_0x2be698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE69Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x2be698) {
            ctx->pc = 0x2BE9B0u;
            goto label_2be9b0;
        }
    }
    ctx->pc = 0x2BE6A0u;
label_2be6a0:
    // 0x2be6a0: 0x8c422740
    ctx->pc = 0x2be6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be6a4: 0x8c420004
    ctx->pc = 0x2be6a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2be6a8: 0x10400006
    ctx->pc = 0x2BE6A8u;
    {
        const bool branch_taken_0x2be6a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE6ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be6a8) {
            ctx->pc = 0x2BE6C4u;
            goto label_2be6c4;
        }
    }
    ctx->pc = 0x2BE6B0u;
    // 0x2be6b0: 0xc0af8d2
    ctx->pc = 0x2BE6B0u;
    SET_GPR_U32(ctx, 31, 0x2BE6B8u);
    ctx->pc = 0x2BE6B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE348u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObject_0x2be348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6B8u; }
    }
    if (ctx->pc != 0x2BE6B8u) { return; }
    ctx->pc = 0x2BE6B8u;
    // 0x2be6b8: 0x144000bd
    ctx->pc = 0x2BE6B8u;
    {
        const bool branch_taken_0x2be6b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE6BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x2be6b8) {
            ctx->pc = 0x2BE9B0u;
            goto label_2be9b0;
        }
    }
    ctx->pc = 0x2BE6C0u;
    // 0x2be6c0: 0x3c020037
    ctx->pc = 0x2be6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2be6c4:
    // 0x2be6c4: 0x8c422754
    ctx->pc = 0x2be6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10068)));
    // 0x2be6c8: 0x8c420008
    ctx->pc = 0x2be6c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2be6cc: 0x5040000a
    ctx->pc = 0x2BE6CCu;
    {
        const bool branch_taken_0x2be6cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be6cc) {
            ctx->pc = 0x2BE6D0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BE6F8u;
            goto label_2be6f8;
        }
    }
    ctx->pc = 0x2BE6D4u;
    // 0x2be6d4: 0x8e620070
    ctx->pc = 0x2be6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2be6d8: 0x8c45002c
    ctx->pc = 0x2be6d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2be6dc: 0x14a00003
    ctx->pc = 0x2BE6DCu;
    {
        const bool branch_taken_0x2be6dc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE6E0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2be6dc) {
            ctx->pc = 0x2BE6ECu;
            goto label_2be6ec;
        }
    }
    ctx->pc = 0x2BE6E4u;
    // 0x2be6e4: 0x3c02003b
    ctx->pc = 0x2be6e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2be6e8: 0x24456818
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 26648));
label_2be6ec:
    // 0x2be6ec: 0xc0b4a34
    ctx->pc = 0x2BE6ECu;
    SET_GPR_U32(ctx, 31, 0x2BE6F4u);
    ctx->pc = 0x2BE6F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27392));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6F4u; }
    }
    if (ctx->pc != 0x2BE6F4u) { return; }
    ctx->pc = 0x2BE6F4u;
    // 0x2be6f4: 0x260202d
    ctx->pc = 0x2be6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be6f8:
    // 0x2be6f8: 0xc0af64e
    ctx->pc = 0x2BE6F8u;
    SET_GPR_U32(ctx, 31, 0x2BE700u);
    ctx->pc = 0x2BE6FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BD938u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjDraw_0x2bd938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE700u; }
    }
    if (ctx->pc != 0x2BE700u) { return; }
    ctx->pc = 0x2BE700u;
    // 0x2be700: 0x40034800
    ctx->pc = 0x2be700u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2be704: 0x3c02003a
    ctx->pc = 0x2be704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2be708: 0xac432128
    ctx->pc = 0x2be708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8488), GPR_U32(ctx, 3));
    // 0x2be70c: 0x3c020037
    ctx->pc = 0x2be70cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be710: 0x8c422754
    ctx->pc = 0x2be710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10068)));
    // 0x2be714: 0x8c420000
    ctx->pc = 0x2be714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be718: 0x10400004
    ctx->pc = 0x2BE718u;
    {
        const bool branch_taken_0x2be718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE71Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 438));
        if (branch_taken_0x2be718) {
            ctx->pc = 0x2BE72Cu;
            goto label_2be72c;
        }
    }
    ctx->pc = 0x2BE720u;
    // 0x2be720: 0x3c05003b
    ctx->pc = 0x2be720u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2be724: 0xc0a9fe2
    ctx->pc = 0x2BE724u;
    SET_GPR_U32(ctx, 31, 0x2BE72Cu);
    ctx->pc = 0x2BE728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27416));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE72Cu; }
    }
    if (ctx->pc != 0x2BE72Cu) { return; }
    ctx->pc = 0x2BE72Cu;
label_2be72c:
    // 0x2be72c: 0x8fa20024
    ctx->pc = 0x2be72cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be730: 0x10400003
    ctx->pc = 0x2BE730u;
    {
        const bool branch_taken_0x2be730 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be730) {
            ctx->pc = 0x2BE740u;
            goto label_2be740;
        }
    }
    ctx->pc = 0x2BE738u;
    // 0x2be738: 0x10000004
    ctx->pc = 0x2BE738u;
    {
        const bool branch_taken_0x2be738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE73Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be738) {
            ctx->pc = 0x2BE74Cu;
            goto label_2be74c;
        }
    }
    ctx->pc = 0x2BE740u;
label_2be740:
    // 0x2be740: 0xc0afa78
    ctx->pc = 0x2BE740u;
    SET_GPR_U32(ctx, 31, 0x2BE748u);
    ctx->pc = 0x2BE9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectSpAddr_0x2be9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE748u; }
    }
    if (ctx->pc != 0x2BE748u) { return; }
    ctx->pc = 0x2BE748u;
    // 0x2be748: 0xafa2002c
    ctx->pc = 0x2be748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2be74c:
    // 0x2be74c: 0x8fb4002c
    ctx->pc = 0x2be74cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2be750: 0x8e620060
    ctx->pc = 0x2be750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2be754: 0x3c031090
    ctx->pc = 0x2be754u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4240 << 16));
    // 0x2be758: 0x3463d7c0
    ctx->pc = 0x2be758u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55232));
    // 0x2be75c: 0x431024
    ctx->pc = 0x2be75cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be760: 0xafa20020
    ctx->pc = 0x2be760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2be764: 0x260202d
    ctx->pc = 0x2be764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be768: 0x96450012
    ctx->pc = 0x2be768u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2be76c: 0x3c0302d
    ctx->pc = 0x2be76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be770: 0xc0af6f4
    ctx->pc = 0x2BE770u;
    SET_GPR_U32(ctx, 31, 0x2BE778u);
    ctx->pc = 0x2BE774u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2BDBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjTexSub_0x2bdbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE778u; }
    }
    if (ctx->pc != 0x2BE778u) { return; }
    ctx->pc = 0x2BE778u;
    // 0x2be778: 0xafa20028
    ctx->pc = 0x2be778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2be77c: 0x86570016
    ctx->pc = 0x2be77cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x2be780: 0x8e55001c
    ctx->pc = 0x2be780u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2be784: 0x8e420008
    ctx->pc = 0x2be784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2be788: 0x30420100
    ctx->pc = 0x2be788u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2be78c: 0x10400005
    ctx->pc = 0x2BE78Cu;
    {
        const bool branch_taken_0x2be78c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE790u;
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
        if (branch_taken_0x2be78c) {
            ctx->pc = 0x2BE7A4u;
            goto label_2be7a4;
        }
    }
    ctx->pc = 0x2BE794u;
    // 0x2be794: 0x8fa20020
    ctx->pc = 0x2be794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be798: 0x3c030002
    ctx->pc = 0x2be798u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x2be79c: 0x431025
    ctx->pc = 0x2be79cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be7a0: 0xafa20020
    ctx->pc = 0x2be7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2be7a4:
    // 0x2be7a4: 0x8fa30020
    ctx->pc = 0x2be7a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be7a8: 0x30628000
    ctx->pc = 0x2be7a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x2be7ac: 0x10400003
    ctx->pc = 0x2BE7ACu;
    {
        const bool branch_taken_0x2be7ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE7B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x2be7ac) {
            ctx->pc = 0x2BE7BCu;
            goto label_2be7bc;
        }
    }
    ctx->pc = 0x2BE7B4u;
    // 0x2be7b4: 0x621025
    ctx->pc = 0x2be7b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be7b8: 0xafa20020
    ctx->pc = 0x2be7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2be7bc:
    // 0x2be7bc: 0x3c020037
    ctx->pc = 0x2be7bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be7c0: 0x8c42264c
    ctx->pc = 0x2be7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    // 0x2be7c4: 0x50400006
    ctx->pc = 0x2BE7C4u;
    {
        const bool branch_taken_0x2be7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be7c4) {
            ctx->pc = 0x2BE7C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->pc = 0x2BE7E0u;
            goto label_2be7e0;
        }
    }
    ctx->pc = 0x2BE7CCu;
    // 0x2be7cc: 0x8e620060
    ctx->pc = 0x2be7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2be7d0: 0x3c038000
    ctx->pc = 0x2be7d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x2be7d4: 0x431025
    ctx->pc = 0x2be7d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be7d8: 0xae620060
    ctx->pc = 0x2be7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x2be7dc: 0x8e630060
    ctx->pc = 0x2be7dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2be7e0:
    // 0x2be7e0: 0x3c028000
    ctx->pc = 0x2be7e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2be7e4: 0x622824
    ctx->pc = 0x2be7e4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be7e8: 0x10a0000f
    ctx->pc = 0x2BE7E8u;
    {
        const bool branch_taken_0x2be7e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE7ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2be7e8) {
            ctx->pc = 0x2BE828u;
            goto label_2be828;
        }
    }
    ctx->pc = 0x2BE7F0u;
    // 0x2be7f0: 0x8e060004
    ctx->pc = 0x2be7f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2be7f4: 0x26250030
    ctx->pc = 0x2be7f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    // 0x2be7f8: 0xc0b626d
    ctx->pc = 0x2BE7F8u;
    SET_GPR_U32(ctx, 31, 0x2BE800u);
    ctx->pc = 0x2BE7FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 528));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE800u; }
    }
    if (ctx->pc != 0x2BE800u) { return; }
    ctx->pc = 0x2BE800u;
    // 0x2be800: 0x8e020004
    ctx->pc = 0x2be800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2be804: 0xc6400004
    ctx->pc = 0x2be804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be808: 0xc4410060
    ctx->pc = 0x2be808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be80c: 0x46010001
    ctx->pc = 0x2be80cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2be810: 0xc7a10018
    ctx->pc = 0x2be810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be814: 0x46000834
    ctx->pc = 0x2be814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be818: 0x0
    ctx->pc = 0x2be818u;
    // NOP
    // 0x2be81c: 0x45000002
    ctx->pc = 0x2BE81Cu;
    {
        const bool branch_taken_0x2be81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE820u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be81c) {
            ctx->pc = 0x2BE828u;
            goto label_2be828;
        }
    }
    ctx->pc = 0x2BE824u;
    // 0x2be824: 0x24050001
    ctx->pc = 0x2be824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2be828:
    // 0x2be828: 0x3c030037
    ctx->pc = 0x2be828u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2be82c: 0x8c622650
    ctx->pc = 0x2be82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 9808)));
    // 0x2be830: 0x10450006
    ctx->pc = 0x2BE830u;
    {
        const bool branch_taken_0x2be830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2BE834u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be830) {
            ctx->pc = 0x2BE84Cu;
            goto label_2be84c;
        }
    }
    ctx->pc = 0x2BE838u;
    // 0x2be838: 0xac652650
    ctx->pc = 0x2be838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9808), GPR_U32(ctx, 5));
    // 0x2be83c: 0xc0aafe4
    ctx->pc = 0x2BE83Cu;
    SET_GPR_U32(ctx, 31, 0x2BE844u);
    ctx->pc = 0x2BE840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ABF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetObjMtx_0x2abf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE844u; }
    }
    if (ctx->pc != 0x2BE844u) { return; }
    ctx->pc = 0x2BE844u;
    // 0x2be844: 0x40a02d
    ctx->pc = 0x2be844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be848: 0x3c020037
    ctx->pc = 0x2be848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2be84c:
    // 0x2be84c: 0x8c422654
    ctx->pc = 0x2be84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9812)));
    // 0x2be850: 0x10400006
    ctx->pc = 0x2BE850u;
    {
        const bool branch_taken_0x2be850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE854u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be850) {
            ctx->pc = 0x2BE86Cu;
            goto label_2be86c;
        }
    }
    ctx->pc = 0x2BE858u;
    // 0x2be858: 0x260282d
    ctx->pc = 0x2be858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be85c: 0x220302d
    ctx->pc = 0x2be85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be860: 0xc0afe7a
    ctx->pc = 0x2BE860u;
    SET_GPR_U32(ctx, 31, 0x2BE868u);
    ctx->pc = 0x2BE864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2BF9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetupPosLights_0x2bf9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE868u; }
    }
    if (ctx->pc != 0x2BE868u) { return; }
    ctx->pc = 0x2BE868u;
    // 0x2be868: 0x40a02d
    ctx->pc = 0x2be868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be86c:
    // 0x2be86c: 0xafb30000
    ctx->pc = 0x2be86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2be870: 0x280202d
    ctx->pc = 0x2be870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be874: 0x8fa50028
    ctx->pc = 0x2be874u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2be878: 0x2e0302d
    ctx->pc = 0x2be878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be87c: 0x2c0382d
    ctx->pc = 0x2be87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be880: 0x8fa80020
    ctx->pc = 0x2be880u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be884: 0x3c0482d
    ctx->pc = 0x2be884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be888: 0x220502d
    ctx->pc = 0x2be888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be88c: 0xc0aff46
    ctx->pc = 0x2BE88Cu;
    SET_GPR_U32(ctx, 31, 0x2BE894u);
    ctx->pc = 0x2BE890u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BFD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetDORegs_0x2bfd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE894u; }
    }
    if (ctx->pc != 0x2BE894u) { return; }
    ctx->pc = 0x2BE894u;
    // 0x2be894: 0x40a02d
    ctx->pc = 0x2be894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be898: 0x8e42000c
    ctx->pc = 0x2be898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2be89c: 0x2451ffff
    ctx->pc = 0x2be89cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2be8a0: 0x1220001c
    ctx->pc = 0x2BE8A0u;
    {
        const bool branch_taken_0x2be8a0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE8A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x2be8a0) {
            ctx->pc = 0x2BE914u;
            goto label_2be914;
        }
    }
    ctx->pc = 0x2BE8A8u;
    // 0x2be8a8: 0x8e500018
    ctx->pc = 0x2be8a8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2be8ac: 0x96520010
    ctx->pc = 0x2be8acu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_2be8b0:
    // 0x2be8b0: 0x121100
    ctx->pc = 0x2be8b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2be8b4: 0x2a2a821
    ctx->pc = 0x2be8b4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2be8b8: 0x260202d
    ctx->pc = 0x2be8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8bc: 0x96050002
    ctx->pc = 0x2be8bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2be8c0: 0x3c0302d
    ctx->pc = 0x2be8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8c4: 0xc0af6f4
    ctx->pc = 0x2BE8C4u;
    SET_GPR_U32(ctx, 31, 0x2BE8CCu);
    ctx->pc = 0x2BE8C8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2BDBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjTexSub_0x2bdbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8CCu; }
    }
    if (ctx->pc != 0x2BE8CCu) { return; }
    ctx->pc = 0x2BE8CCu;
    // 0x2be8cc: 0x86170006
    ctx->pc = 0x2be8ccu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2be8d0: 0x96160004
    ctx->pc = 0x2be8d0u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2be8d4: 0x96120000
    ctx->pc = 0x2be8d4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2be8d8: 0x8fa80020
    ctx->pc = 0x2be8d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be8dc: 0xafa00000
    ctx->pc = 0x2be8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2be8e0: 0x280202d
    ctx->pc = 0x2be8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8e4: 0x40282d
    ctx->pc = 0x2be8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8e8: 0x2e0302d
    ctx->pc = 0x2be8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8ec: 0x2c0382d
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8f0: 0x3c0482d
    ctx->pc = 0x2be8f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8f4: 0x502d
    ctx->pc = 0x2be8f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8f8: 0xc0aff46
    ctx->pc = 0x2BE8F8u;
    SET_GPR_U32(ctx, 31, 0x2BE900u);
    ctx->pc = 0x2BE8FCu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BFD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetDORegs_0x2bfd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE900u; }
    }
    if (ctx->pc != 0x2BE900u) { return; }
    ctx->pc = 0x2BE900u;
    // 0x2be900: 0x40a02d
    ctx->pc = 0x2be900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be904: 0x2631ffff
    ctx->pc = 0x2be904u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2be908: 0x1620ffe9
    ctx->pc = 0x2BE908u;
    {
        const bool branch_taken_0x2be908 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE90Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x2be908) {
            ctx->pc = 0x2BE8B0u;
            goto label_2be8b0;
        }
    }
    ctx->pc = 0x2BE910u;
    // 0x2be910: 0x8fa30024
    ctx->pc = 0x2be910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2be914:
    // 0x2be914: 0x1460000e
    ctx->pc = 0x2BE914u;
    {
        const bool branch_taken_0x2be914 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE918u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2be914) {
            ctx->pc = 0x2BE950u;
            goto label_2be950;
        }
    }
    ctx->pc = 0x2BE91Cu;
    // 0x2be91c: 0xc0aac5c
    ctx->pc = 0x2BE91Cu;
    SET_GPR_U32(ctx, 31, 0x2BE924u);
    ctx->pc = 0x2BE920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AB170u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetGeomSeq_0x2ab170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE924u; }
    }
    if (ctx->pc != 0x2BE924u) { return; }
    ctx->pc = 0x2BE924u;
    // 0x2be924: 0x40a02d
    ctx->pc = 0x2be924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be928: 0xc0a9ace
    ctx->pc = 0x2BE928u;
    SET_GPR_U32(ctx, 31, 0x2BE930u);
    ctx->pc = 0x2BE92Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->pc = 0x2A6B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaObject_0x2a6b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE930u; }
    }
    if (ctx->pc != 0x2BE930u) { return; }
    ctx->pc = 0x2BE930u;
    // 0x2be930: 0x3c020037
    ctx->pc = 0x2be930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be934: 0x8c422754
    ctx->pc = 0x2be934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10068)));
    // 0x2be938: 0x8c420004
    ctx->pc = 0x2be938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2be93c: 0x10400004
    ctx->pc = 0x2BE93Cu;
    {
        const bool branch_taken_0x2be93c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE940u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 438));
        if (branch_taken_0x2be93c) {
            ctx->pc = 0x2BE950u;
            goto label_2be950;
        }
    }
    ctx->pc = 0x2BE944u;
    // 0x2be944: 0x3c05003b
    ctx->pc = 0x2be944u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2be948: 0xc0a9fe2
    ctx->pc = 0x2BE948u;
    SET_GPR_U32(ctx, 31, 0x2BE950u);
    ctx->pc = 0x2BE94Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27416));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE950u; }
    }
    if (ctx->pc != 0x2BE950u) { return; }
    ctx->pc = 0x2BE950u;
label_2be950:
    // 0x2be950: 0x40044800
    ctx->pc = 0x2be950u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x2be954: 0x3c03003a
    ctx->pc = 0x2be954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2be958: 0x24632050
    ctx->pc = 0x2be958u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
    // 0x2be95c: 0x8c6200d8
    ctx->pc = 0x2be95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2be960: 0x822023
    ctx->pc = 0x2be960u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be964: 0x8c6200d0
    ctx->pc = 0x2be964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2be968: 0x822021
    ctx->pc = 0x2be968u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be96c: 0xac6400d0
    ctx->pc = 0x2be96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 4));
    // 0x2be970: 0x8c6200d4
    ctx->pc = 0x2be970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2be974: 0x24420001
    ctx->pc = 0x2be974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be978: 0xac6200d4
    ctx->pc = 0x2be978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 2));
    // 0x2be97c: 0x3c020037
    ctx->pc = 0x2be97cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be980: 0x8c422740
    ctx->pc = 0x2be980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be984: 0x8c420004
    ctx->pc = 0x2be984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2be988: 0x10400004
    ctx->pc = 0x2BE988u;
    {
        const bool branch_taken_0x2be988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE98Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be988) {
            ctx->pc = 0x2BE99Cu;
            goto label_2be99c;
        }
    }
    ctx->pc = 0x2BE990u;
    // 0x2be990: 0xc0af960
    ctx->pc = 0x2BE990u;
    SET_GPR_U32(ctx, 31, 0x2BE998u);
    ctx->pc = 0x2BE994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE580u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjectEnd_0x2be580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE998u; }
    }
    if (ctx->pc != 0x2BE998u) { return; }
    ctx->pc = 0x2BE998u;
    // 0x2be998: 0x260202d
    ctx->pc = 0x2be998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be99c:
    // 0x2be99c: 0xc0af668
    ctx->pc = 0x2BE99Cu;
    SET_GPR_U32(ctx, 31, 0x2BE9A4u);
    ctx->pc = 0x2BE9A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2BD9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjEnd_0x2bd9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9A4u; }
    }
    if (ctx->pc != 0x2BE9A4u) { return; }
    ctx->pc = 0x2BE9A4u;
    // 0x2be9a4: 0x102d
    ctx->pc = 0x2be9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9a8: 0x8fa30024
    ctx->pc = 0x2be9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be9ac: 0x283100b
    ctx->pc = 0x2be9acu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 20));
label_2be9b0:
    // 0x2be9b0: 0xdfbf00c0
    ctx->pc = 0x2be9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2be9b4: 0xdfbe00b0
    ctx->pc = 0x2be9b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2be9b8: 0xdfb700a0
    ctx->pc = 0x2be9b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2be9bc: 0xdfb60090
    ctx->pc = 0x2be9bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2be9c0: 0xdfb50080
    ctx->pc = 0x2be9c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2be9c4: 0xdfb40070
    ctx->pc = 0x2be9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2be9c8: 0xdfb30060
    ctx->pc = 0x2be9c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be9cc: 0xdfb20050
    ctx->pc = 0x2be9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be9d0: 0xdfb10040
    ctx->pc = 0x2be9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be9d4: 0xdfb00030
    ctx->pc = 0x2be9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be9d8: 0x3e00008
    ctx->pc = 0x2BE9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE9DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BE670u: goto label_2be670;
            case 0x2BE698u: goto label_2be698;
            case 0x2BE6A0u: goto label_2be6a0;
            case 0x2BE6C4u: goto label_2be6c4;
            case 0x2BE6ECu: goto label_2be6ec;
            case 0x2BE6F8u: goto label_2be6f8;
            case 0x2BE72Cu: goto label_2be72c;
            case 0x2BE740u: goto label_2be740;
            case 0x2BE74Cu: goto label_2be74c;
            case 0x2BE7A4u: goto label_2be7a4;
            case 0x2BE7BCu: goto label_2be7bc;
            case 0x2BE7E0u: goto label_2be7e0;
            case 0x2BE828u: goto label_2be828;
            case 0x2BE84Cu: goto label_2be84c;
            case 0x2BE86Cu: goto label_2be86c;
            case 0x2BE8B0u: goto label_2be8b0;
            case 0x2BE914u: goto label_2be914;
            case 0x2BE950u: goto label_2be950;
            case 0x2BE99Cu: goto label_2be99c;
            case 0x2BE9B0u: goto label_2be9b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BE9E0u;
}
