#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeVampire__10PeopleTaskFv
// Address: 0x20b600 - 0x20b778
void changeVampire__10PeopleTaskFv_0x20b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeVampire__10PeopleTaskFv");


    ctx->pc = 0x20b600u;

    // 0x20b600: 0x27bdffe0
    ctx->pc = 0x20b600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b604: 0x7fbf0010
    ctx->pc = 0x20b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20b608: 0x7fb00000
    ctx->pc = 0x20b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b60c: 0x70808628
    ctx->pc = 0x20b60cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20b610: 0x3c020027
    ctx->pc = 0x20b610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b614: 0x24422f18
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12056));
    // 0x20b618: 0x8c450008
    ctx->pc = 0x20b618u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b61c: 0x8c841d70
    ctx->pc = 0x20b61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7536)));
    // 0x20b620: 0xc068fd8
    ctx->pc = 0x20B620u;
    SET_GPR_U32(ctx, 31, 0x20B628u);
    ctx->pc = 0x20B624u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B628u; }
        else if (ctx->pc != 0x20B628u) { ctx->pc = 0x20B628u; }
    }
    if (ctx->pc != 0x20B628u) { return; }
    ctx->pc = 0x20B628u;
    // 0x20b628: 0x8e031da4
    ctx->pc = 0x20b628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7588)));
    // 0x20b62c: 0x24020013
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x20b630: 0x10620009
    ctx->pc = 0x20B630u;
    {
        const bool branch_taken_0x20b630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20b630) {
            ctx->pc = 0x20B658u;
            goto label_20b658;
        }
    }
    ctx->pc = 0x20B638u;
    // 0x20b638: 0x2402ffff
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20b63c:
    // 0x20b63c: 0xae021da4
    ctx->pc = 0x20b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7588), GPR_U32(ctx, 2));
    // 0x20b640: 0xc082450
    ctx->pc = 0x20B640u;
    SET_GPR_U32(ctx, 31, 0x20B648u);
    ctx->pc = 0x20B644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x209140u;
    {
        const uint32_t __entryPc = ctx->pc;
        getParam__10PeopleTaskFv_0x209140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B648u; }
        else if (ctx->pc != 0x20B648u) { ctx->pc = 0x20B648u; }
    }
    if (ctx->pc != 0x20B648u) { return; }
    ctx->pc = 0x20B648u;
    // 0x20b648: 0x8e031da4
    ctx->pc = 0x20b648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7588)));
    // 0x20b64c: 0x24020013
    ctx->pc = 0x20b64cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x20b650: 0x1462fffa
    ctx->pc = 0x20B650u;
    {
        const bool branch_taken_0x20b650 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20B654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20b650) {
            ctx->pc = 0x20B63Cu;
            goto label_20b63c;
        }
    }
    ctx->pc = 0x20B658u;
label_20b658:
    // 0x20b658: 0xae001db8
    ctx->pc = 0x20b658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7608), GPR_U32(ctx, 0));
    // 0x20b65c: 0x8e06000c
    ctx->pc = 0x20b65cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b660: 0x3c020008
    ctx->pc = 0x20b660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x20b664: 0x34450100
    ctx->pc = 0x20b664u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 256));
    // 0x20b668: 0x3c02efff
    ctx->pc = 0x20b668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
    // 0x20b66c: 0x3444ffff
    ctx->pc = 0x20b66cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
    // 0x20b670: 0x2403ffff
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b674: 0xc51025
    ctx->pc = 0x20b674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20b678: 0xae02000c
    ctx->pc = 0x20b678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20b67c: 0x8e06000c
    ctx->pc = 0x20b67cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b680: 0x24020001
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b684: 0x72002e28
    ctx->pc = 0x20b684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20b688: 0xc42024
    ctx->pc = 0x20b688u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20b68c: 0xae04000c
    ctx->pc = 0x20b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x20b690: 0xae031dd0
    ctx->pc = 0x20b690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7632), GPR_U32(ctx, 3));
    // 0x20b694: 0x12000002
    ctx->pc = 0x20B694u;
    {
        const bool branch_taken_0x20b694 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B698u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937984), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x20b694) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B69Cu;
    // 0x20b69c: 0x24a50030
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20b6a0:
    // 0x20b6a0: 0x8e071db0
    ctx->pc = 0x20b6a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
    // 0x20b6a4: 0x3c020027
    ctx->pc = 0x20b6a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b6a8: 0x24462908
    ctx->pc = 0x20b6a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 10504));
    // 0x20b6ac: 0x3c02004a
    ctx->pc = 0x20b6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x20b6b0: 0x2444e8e0
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    // 0x20b6b4: 0x82031e01
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7681)));
    // 0x20b6b8: 0x71080
    ctx->pc = 0x20b6b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20b6bc: 0xc21021
    ctx->pc = 0x20b6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20b6c0: 0x8c460000
    ctx->pc = 0x20b6c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6c4: 0x2407000a
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20b6c8: 0x31080
    ctx->pc = 0x20b6c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b6cc: 0x461021
    ctx->pc = 0x20b6ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20b6d0: 0x8446fffc
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x20b6d4: 0xc07eabc
    ctx->pc = 0x20B6D4u;
    SET_GPR_U32(ctx, 31, 0x20B6DCu);
    ctx->pc = 0x20B6D8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B6DCu; }
        else if (ctx->pc != 0x20B6DCu) { ctx->pc = 0x20B6DCu; }
    }
    if (ctx->pc != 0x20B6DCu) { return; }
    ctx->pc = 0x20B6DCu;
    // 0x20b6dc: 0x24020001
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b6e0: 0xae021dac
    ctx->pc = 0x20b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
    // 0x20b6e4: 0x2402002a
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x20b6e8: 0xae021da4
    ctx->pc = 0x20b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7588), GPR_U32(ctx, 2));
    // 0x20b6ec: 0x8e051db0
    ctx->pc = 0x20b6ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
    // 0x20b6f0: 0x3c024120
    ctx->pc = 0x20b6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x20b6f4: 0x44826000
    ctx->pc = 0x20b6f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20b6f8: 0x3c020027
    ctx->pc = 0x20b6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b6fc: 0x24432908
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 10504));
    // 0x20b700: 0x52880
    ctx->pc = 0x20b700u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20b704: 0x82021e01
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7681)));
    // 0x20b708: 0x651821
    ctx->pc = 0x20b708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b70c: 0x8c630000
    ctx->pc = 0x20b70cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b710: 0x21080
    ctx->pc = 0x20b710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b714: 0x431021
    ctx->pc = 0x20b714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b718: 0x8445fffe
    ctx->pc = 0x20b718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x20b71c: 0xc082de0
    ctx->pc = 0x20B71Cu;
    SET_GPR_U32(ctx, 31, 0x20B724u);
    ctx->pc = 0x20B720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20B780u;
    {
        const uint32_t __entryPc = ctx->pc;
        keepAwaySpeed__10PeopleTaskFif_0x20b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B724u; }
        else if (ctx->pc != 0x20B724u) { ctx->pc = 0x20B724u; }
    }
    if (ctx->pc != 0x20B724u) { return; }
    ctx->pc = 0x20B724u;
    // 0x20b724: 0x3c020027
    ctx->pc = 0x20b724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b728: 0x24422f28
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12072));
    // 0x20b72c: 0x8c450008
    ctx->pc = 0x20b72cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b730: 0x8e041d70
    ctx->pc = 0x20b730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7536)));
    // 0x20b734: 0x72004628
    ctx->pc = 0x20b734u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20b738: 0x3c020027
    ctx->pc = 0x20b738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b73c: 0x24472f40
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 12096));
    // 0x20b740: 0x3c020003
    ctx->pc = 0x20b740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x20b744: 0xc068f70
    ctx->pc = 0x20B744u;
    SET_GPR_U32(ctx, 31, 0x20B74Cu);
    ctx->pc = 0x20B748u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 5));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B74Cu; }
        else if (ctx->pc != 0x20B74Cu) { ctx->pc = 0x20B74Cu; }
    }
    if (ctx->pc != 0x20B74Cu) { return; }
    ctx->pc = 0x20B74Cu;
    // 0x20b74c: 0xae001e28
    ctx->pc = 0x20b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7720), GPR_U32(ctx, 0));
    // 0x20b750: 0x83848ba8
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x20b754: 0x24030006
    ctx->pc = 0x20b754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20b758: 0x14830003
    ctx->pc = 0x20B758u;
    {
        const bool branch_taken_0x20b758 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20B75Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20b758) {
            ctx->pc = 0x20B768u;
            goto label_20b768;
        }
    }
    ctx->pc = 0x20B760u;
    // 0x20b760: 0x3c010050
    ctx->pc = 0x20b760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20b764: 0xa023e424
    ctx->pc = 0x20b764u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960164), (uint8_t)GPR_U32(ctx, 3));
label_20b768:
    // 0x20b768: 0x7bbf0010
    ctx->pc = 0x20b768u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b76c: 0x7bb00000
    ctx->pc = 0x20b76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b770: 0x3e00008
    ctx->pc = 0x20B770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B63Cu: goto label_20b63c;
            case 0x20B658u: goto label_20b658;
            case 0x20B6A0u: goto label_20b6a0;
            case 0x20B768u: goto label_20b768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B778u;
}
