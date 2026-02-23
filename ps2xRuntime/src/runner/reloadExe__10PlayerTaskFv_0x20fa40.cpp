#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reloadExe__10PlayerTaskFv
// Address: 0x20fa40 - 0x20fc14
void reloadExe__10PlayerTaskFv_0x20fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reloadExe__10PlayerTaskFv");


    ctx->pc = 0x20fa40u;

label_20fa40:
    // 0x20fa40: 0x27bdffe0
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_20fa44:
    // 0x20fa44: 0x7fbf0010
    ctx->pc = 0x20fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_20fa48:
    // 0x20fa48: 0x7fb00000
    ctx->pc = 0x20fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20fa4c:
    // 0x20fa4c: 0x8c831cbc
    ctx->pc = 0x20fa4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
label_20fa50:
    // 0x20fa50: 0x70808628
    ctx->pc = 0x20fa50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20fa54:
    // 0x20fa54: 0x24020001
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20fa58:
    // 0x20fa58: 0xac60005c
    ctx->pc = 0x20fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_20fa5c:
    // 0x20fa5c: 0x8c841cbc
    ctx->pc = 0x20fa5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
label_20fa60:
    // 0x20fa60: 0x8c830048
    ctx->pc = 0x20fa60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_20fa64:
    // 0x20fa64: 0xac83004c
    ctx->pc = 0x20fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_20fa68:
    // 0x20fa68: 0x8f838bcc
    ctx->pc = 0x20fa68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_20fa6c:
    // 0x20fa6c: 0x1462000e
label_20fa70:
    if (ctx->pc == 0x20FA70u) {
        ctx->pc = 0x20FA74u;
        goto label_20fa74;
    }
    ctx->pc = 0x20FA6Cu;
    {
        const bool branch_taken_0x20fa6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20fa6c) {
            ctx->pc = 0x20FAA8u;
            goto label_20faa8;
        }
    }
    ctx->pc = 0x20FA74u;
label_20fa74:
    // 0x20fa74: 0x8e051cb8
    ctx->pc = 0x20fa74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
label_20fa78:
    // 0x20fa78: 0x3c020050
    ctx->pc = 0x20fa78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_20fa7c:
    // 0x20fa7c: 0x2444fc80
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966400));
label_20fa80:
    // 0x20fa80: 0x3c0200a1
    ctx->pc = 0x20fa80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)161 << 16));
label_20fa84:
    // 0x20fa84: 0x24430300
    ctx->pc = 0x20fa84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 768));
label_20fa88:
    // 0x20fa88: 0x8e021cbc
    ctx->pc = 0x20fa88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
label_20fa8c:
    // 0x20fa8c: 0x52880
    ctx->pc = 0x20fa8cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_20fa90:
    // 0x20fa90: 0x852021
    ctx->pc = 0x20fa90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20fa94:
    // 0x20fa94: 0x80840000
    ctx->pc = 0x20fa94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_20fa98:
    // 0x20fa98: 0x42040
    ctx->pc = 0x20fa98u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_20fa9c:
    // 0x20fa9c: 0x641821
    ctx->pc = 0x20fa9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20faa0:
    // 0x20faa0: 0x80630000
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20faa4:
    // 0x20faa4: 0xac43004c
    ctx->pc = 0x20faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_20faa8:
    // 0x20faa8: 0x8e021cbc
    ctx->pc = 0x20faa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
label_20faac:
    // 0x20faac: 0x72002628
    ctx->pc = 0x20faacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20fab0:
    // 0x20fab0: 0xac400050
    ctx->pc = 0x20fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_20fab4:
    // 0x20fab4: 0x8e021cbc
    ctx->pc = 0x20fab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
label_20fab8:
    // 0x20fab8: 0xc084444
label_20fabc:
    if (ctx->pc == 0x20FABCu) {
        ctx->pc = 0x20FABCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x20FAC0u;
        goto label_20fac0;
    }
    ctx->pc = 0x20FAB8u;
    SET_GPR_U32(ctx, 31, 0x20FAC0u);
    ctx->pc = 0x20FABCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    ctx->pc = 0x211110u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispBulletInit__10PlayerTaskFv_0x211110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAC0u; }
        else if (ctx->pc != 0x20FAC0u) { ctx->pc = 0x20FAC0u; }
    }
    if (ctx->pc != 0x20FAC0u) { return; }
    ctx->pc = 0x20FAC0u;
label_20fac0:
    // 0x20fac0: 0x8e031cbc
    ctx->pc = 0x20fac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
label_20fac4:
    // 0x20fac4: 0xac600054
    ctx->pc = 0x20fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_20fac8:
    // 0x20fac8: 0x8f838b68
    ctx->pc = 0x20fac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
label_20facc:
    // 0x20facc: 0x1060004d
label_20fad0:
    if (ctx->pc == 0x20FAD0u) {
        ctx->pc = 0x20FAD4u;
        goto label_20fad4;
    }
    ctx->pc = 0x20FACCu;
    {
        const bool branch_taken_0x20facc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20facc) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FAD4u;
label_20fad4:
    // 0x20fad4: 0x8f838cb0
    ctx->pc = 0x20fad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_20fad8:
    // 0x20fad8: 0x30630010
    ctx->pc = 0x20fad8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
label_20fadc:
    // 0x20fadc: 0x14600049
label_20fae0:
    if (ctx->pc == 0x20FAE0u) {
        ctx->pc = 0x20FAE4u;
        goto label_20fae4;
    }
    ctx->pc = 0x20FADCu;
    {
        const bool branch_taken_0x20fadc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20fadc) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FAE4u;
label_20fae4:
    // 0x20fae4: 0x97838bf4
    ctx->pc = 0x20fae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_20fae8:
    // 0x20fae8: 0x14600046
label_20faec:
    if (ctx->pc == 0x20FAECu) {
        ctx->pc = 0x20FAF0u;
        goto label_20faf0;
    }
    ctx->pc = 0x20FAE8u;
    {
        const bool branch_taken_0x20fae8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20fae8) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FAF0u;
label_20faf0:
    // 0x20faf0: 0x3c020050
    ctx->pc = 0x20faf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_20faf4:
    // 0x20faf4: 0xc07ce18
label_20faf8:
    if (ctx->pc == 0x20FAF8u) {
        ctx->pc = 0x20FAF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x20FAFCu;
        goto label_20fafc;
    }
    ctx->pc = 0x20FAF4u;
    SET_GPR_U32(ctx, 31, 0x20FAFCu);
    ctx->pc = 0x20FAF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAFCu; }
        else if (ctx->pc != 0x20FAFCu) { ctx->pc = 0x20FAFCu; }
    }
    if (ctx->pc != 0x20FAFCu) { return; }
    ctx->pc = 0x20FAFCu;
label_20fafc:
    // 0x20fafc: 0x1c400041
label_20fb00:
    if (ctx->pc == 0x20FB00u) {
        ctx->pc = 0x20FB04u;
        goto label_20fb04;
    }
    ctx->pc = 0x20FAFCu;
    {
        const bool branch_taken_0x20fafc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20fafc) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FB04u;
label_20fb04:
    // 0x20fb04: 0x8f848bcc
    ctx->pc = 0x20fb04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_20fb08:
    // 0x20fb08: 0x24030001
    ctx->pc = 0x20fb08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20fb0c:
    // 0x20fb0c: 0x1083000b
label_20fb10:
    if (ctx->pc == 0x20FB10u) {
        ctx->pc = 0x20FB14u;
        goto label_20fb14;
    }
    ctx->pc = 0x20FB0Cu;
    {
        const bool branch_taken_0x20fb0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20fb0c) {
            ctx->pc = 0x20FB3Cu;
            goto label_20fb3c;
        }
    }
    ctx->pc = 0x20FB14u;
label_20fb14:
    // 0x20fb14: 0x3c020051
    ctx->pc = 0x20fb14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20fb18:
    // 0x20fb18: 0x244434f0
    ctx->pc = 0x20fb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20fb1c:
    // 0x20fb1c: 0x3c020002
    ctx->pc = 0x20fb1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_20fb20:
    // 0x20fb20: 0x34450027
    ctx->pc = 0x20fb20u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39));
label_20fb24:
    // 0x20fb24: 0x70003628
    ctx->pc = 0x20fb24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fb28:
    // 0x20fb28: 0x70003e28
    ctx->pc = 0x20fb28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fb2c:
    // 0x20fb2c: 0xc086018
label_20fb30:
    if (ctx->pc == 0x20FB30u) {
        ctx->pc = 0x20FB30u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x20FB34u;
        goto label_20fb34;
    }
    ctx->pc = 0x20FB2Cu;
    SET_GPR_U32(ctx, 31, 0x20FB34u);
    ctx->pc = 0x20FB30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB34u; }
        else if (ctx->pc != 0x20FB34u) { ctx->pc = 0x20FB34u; }
    }
    if (ctx->pc != 0x20FB34u) { return; }
    ctx->pc = 0x20FB34u;
label_20fb34:
    // 0x20fb34: 0x10000034
label_20fb38:
    if (ctx->pc == 0x20FB38u) {
        ctx->pc = 0x20FB38u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x20FB3Cu;
        goto label_20fb3c;
    }
    ctx->pc = 0x20FB34u;
    {
        const bool branch_taken_0x20fb34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FB38u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20fb34) {
            ctx->pc = 0x20FC08u;
            goto label_20fc08;
        }
    }
    ctx->pc = 0x20FB3Cu;
label_20fb3c:
    // 0x20fb3c: 0x83848ba8
    ctx->pc = 0x20fb3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20fb40:
    // 0x20fb40: 0x24030007
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_20fb44:
    // 0x20fb44: 0x1083002f
label_20fb48:
    if (ctx->pc == 0x20FB48u) {
        ctx->pc = 0x20FB4Cu;
        goto label_20fb4c;
    }
    ctx->pc = 0x20FB44u;
    {
        const bool branch_taken_0x20fb44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20fb44) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FB4Cu;
label_20fb4c:
    // 0x20fb4c: 0x8e031cb8
    ctx->pc = 0x20fb4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
label_20fb50:
    // 0x20fb50: 0x3c020050
    ctx->pc = 0x20fb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_20fb54:
    // 0x20fb54: 0x2442fc80
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966400));
label_20fb58:
    // 0x20fb58: 0x31880
    ctx->pc = 0x20fb58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20fb5c:
    // 0x20fb5c: 0x431021
    ctx->pc = 0x20fb5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20fb60:
    // 0x20fb60: 0x80420000
    ctx->pc = 0x20fb60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20fb64:
    // 0x20fb64: 0x2042fff8
    ctx->pc = 0x20fb64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967288, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_20fb68:
    // 0x20fb68: 0x2c410008
    ctx->pc = 0x20fb68u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_20fb6c:
    // 0x20fb6c: 0x5020001e
label_20fb70:
    if (ctx->pc == 0x20FB70u) {
        ctx->pc = 0x20FB70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        ctx->pc = 0x20FB74u;
        goto label_20fb74;
    }
    ctx->pc = 0x20FB6Cu;
    {
        const bool branch_taken_0x20fb6c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fb6c) {
            ctx->pc = 0x20FB70u;
            SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
            ctx->pc = 0x20FBE8u;
            goto label_20fbe8;
        }
    }
    ctx->pc = 0x20FB74u;
label_20fb74:
    // 0x20fb74: 0x3c03002c
    ctx->pc = 0x20fb74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_20fb78:
    // 0x20fb78: 0x21080
    ctx->pc = 0x20fb78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20fb7c:
    // 0x20fb7c: 0x246305f0
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1520));
label_20fb80:
    // 0x20fb80: 0x431021
    ctx->pc = 0x20fb80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20fb84:
    // 0x20fb84: 0x8c420000
    ctx->pc = 0x20fb84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fb88:
    // 0x20fb88: 0x400008
label_20fb8c:
    if (ctx->pc == 0x20FB8Cu) {
        ctx->pc = 0x20FB90u;
        goto label_20fb90;
    }
    ctx->pc = 0x20FB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FA40u: goto label_20fa40;
            case 0x20FA44u: goto label_20fa44;
            case 0x20FA48u: goto label_20fa48;
            case 0x20FA4Cu: goto label_20fa4c;
            case 0x20FA50u: goto label_20fa50;
            case 0x20FA54u: goto label_20fa54;
            case 0x20FA58u: goto label_20fa58;
            case 0x20FA5Cu: goto label_20fa5c;
            case 0x20FA60u: goto label_20fa60;
            case 0x20FA64u: goto label_20fa64;
            case 0x20FA68u: goto label_20fa68;
            case 0x20FA6Cu: goto label_20fa6c;
            case 0x20FA70u: goto label_20fa70;
            case 0x20FA74u: goto label_20fa74;
            case 0x20FA78u: goto label_20fa78;
            case 0x20FA7Cu: goto label_20fa7c;
            case 0x20FA80u: goto label_20fa80;
            case 0x20FA84u: goto label_20fa84;
            case 0x20FA88u: goto label_20fa88;
            case 0x20FA8Cu: goto label_20fa8c;
            case 0x20FA90u: goto label_20fa90;
            case 0x20FA94u: goto label_20fa94;
            case 0x20FA98u: goto label_20fa98;
            case 0x20FA9Cu: goto label_20fa9c;
            case 0x20FAA0u: goto label_20faa0;
            case 0x20FAA4u: goto label_20faa4;
            case 0x20FAA8u: goto label_20faa8;
            case 0x20FAACu: goto label_20faac;
            case 0x20FAB0u: goto label_20fab0;
            case 0x20FAB4u: goto label_20fab4;
            case 0x20FAB8u: goto label_20fab8;
            case 0x20FABCu: goto label_20fabc;
            case 0x20FAC0u: goto label_20fac0;
            case 0x20FAC4u: goto label_20fac4;
            case 0x20FAC8u: goto label_20fac8;
            case 0x20FACCu: goto label_20facc;
            case 0x20FAD0u: goto label_20fad0;
            case 0x20FAD4u: goto label_20fad4;
            case 0x20FAD8u: goto label_20fad8;
            case 0x20FADCu: goto label_20fadc;
            case 0x20FAE0u: goto label_20fae0;
            case 0x20FAE4u: goto label_20fae4;
            case 0x20FAE8u: goto label_20fae8;
            case 0x20FAECu: goto label_20faec;
            case 0x20FAF0u: goto label_20faf0;
            case 0x20FAF4u: goto label_20faf4;
            case 0x20FAF8u: goto label_20faf8;
            case 0x20FAFCu: goto label_20fafc;
            case 0x20FB00u: goto label_20fb00;
            case 0x20FB04u: goto label_20fb04;
            case 0x20FB08u: goto label_20fb08;
            case 0x20FB0Cu: goto label_20fb0c;
            case 0x20FB10u: goto label_20fb10;
            case 0x20FB14u: goto label_20fb14;
            case 0x20FB18u: goto label_20fb18;
            case 0x20FB1Cu: goto label_20fb1c;
            case 0x20FB20u: goto label_20fb20;
            case 0x20FB24u: goto label_20fb24;
            case 0x20FB28u: goto label_20fb28;
            case 0x20FB2Cu: goto label_20fb2c;
            case 0x20FB30u: goto label_20fb30;
            case 0x20FB34u: goto label_20fb34;
            case 0x20FB38u: goto label_20fb38;
            case 0x20FB3Cu: goto label_20fb3c;
            case 0x20FB40u: goto label_20fb40;
            case 0x20FB44u: goto label_20fb44;
            case 0x20FB48u: goto label_20fb48;
            case 0x20FB4Cu: goto label_20fb4c;
            case 0x20FB50u: goto label_20fb50;
            case 0x20FB54u: goto label_20fb54;
            case 0x20FB58u: goto label_20fb58;
            case 0x20FB5Cu: goto label_20fb5c;
            case 0x20FB60u: goto label_20fb60;
            case 0x20FB64u: goto label_20fb64;
            case 0x20FB68u: goto label_20fb68;
            case 0x20FB6Cu: goto label_20fb6c;
            case 0x20FB70u: goto label_20fb70;
            case 0x20FB74u: goto label_20fb74;
            case 0x20FB78u: goto label_20fb78;
            case 0x20FB7Cu: goto label_20fb7c;
            case 0x20FB80u: goto label_20fb80;
            case 0x20FB84u: goto label_20fb84;
            case 0x20FB88u: goto label_20fb88;
            case 0x20FB8Cu: goto label_20fb8c;
            case 0x20FB90u: goto label_20fb90;
            case 0x20FB94u: goto label_20fb94;
            case 0x20FB98u: goto label_20fb98;
            case 0x20FB9Cu: goto label_20fb9c;
            case 0x20FBA0u: goto label_20fba0;
            case 0x20FBA4u: goto label_20fba4;
            case 0x20FBA8u: goto label_20fba8;
            case 0x20FBACu: goto label_20fbac;
            case 0x20FBB0u: goto label_20fbb0;
            case 0x20FBB4u: goto label_20fbb4;
            case 0x20FBB8u: goto label_20fbb8;
            case 0x20FBBCu: goto label_20fbbc;
            case 0x20FBC0u: goto label_20fbc0;
            case 0x20FBC4u: goto label_20fbc4;
            case 0x20FBC8u: goto label_20fbc8;
            case 0x20FBCCu: goto label_20fbcc;
            case 0x20FBD0u: goto label_20fbd0;
            case 0x20FBD4u: goto label_20fbd4;
            case 0x20FBD8u: goto label_20fbd8;
            case 0x20FBDCu: goto label_20fbdc;
            case 0x20FBE0u: goto label_20fbe0;
            case 0x20FBE4u: goto label_20fbe4;
            case 0x20FBE8u: goto label_20fbe8;
            case 0x20FBECu: goto label_20fbec;
            case 0x20FBF0u: goto label_20fbf0;
            case 0x20FBF4u: goto label_20fbf4;
            case 0x20FBF8u: goto label_20fbf8;
            case 0x20FBFCu: goto label_20fbfc;
            case 0x20FC00u: goto label_20fc00;
            case 0x20FC04u: goto label_20fc04;
            case 0x20FC08u: goto label_20fc08;
            case 0x20FC0Cu: goto label_20fc0c;
            case 0x20FC10u: goto label_20fc10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FB90u;
label_20fb90:
    // 0x20fb90: 0x3c02000b
    ctx->pc = 0x20fb90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fb94:
    // 0x20fb94: 0x10000015
label_20fb98:
    if (ctx->pc == 0x20FB98u) {
        ctx->pc = 0x20FB98u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 271));
        ctx->pc = 0x20FB9Cu;
        goto label_20fb9c;
    }
    ctx->pc = 0x20FB94u;
    {
        const bool branch_taken_0x20fb94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FB98u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 271));
        if (branch_taken_0x20fb94) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FB9Cu;
label_20fb9c:
    // 0x20fb9c: 0x3c02000b
    ctx->pc = 0x20fb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fba0:
    // 0x20fba0: 0x10000012
label_20fba4:
    if (ctx->pc == 0x20FBA4u) {
        ctx->pc = 0x20FBA4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 275));
        ctx->pc = 0x20FBA8u;
        goto label_20fba8;
    }
    ctx->pc = 0x20FBA0u;
    {
        const bool branch_taken_0x20fba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBA4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 275));
        if (branch_taken_0x20fba0) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBA8u;
label_20fba8:
    // 0x20fba8: 0x3c02000b
    ctx->pc = 0x20fba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fbac:
    // 0x20fbac: 0x1000000f
label_20fbb0:
    if (ctx->pc == 0x20FBB0u) {
        ctx->pc = 0x20FBB0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 277));
        ctx->pc = 0x20FBB4u;
        goto label_20fbb4;
    }
    ctx->pc = 0x20FBACu;
    {
        const bool branch_taken_0x20fbac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBB0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 277));
        if (branch_taken_0x20fbac) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBB4u;
label_20fbb4:
    // 0x20fbb4: 0x3c02000b
    ctx->pc = 0x20fbb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fbb8:
    // 0x20fbb8: 0x1000000c
label_20fbbc:
    if (ctx->pc == 0x20FBBCu) {
        ctx->pc = 0x20FBBCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 279));
        ctx->pc = 0x20FBC0u;
        goto label_20fbc0;
    }
    ctx->pc = 0x20FBB8u;
    {
        const bool branch_taken_0x20fbb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBBCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 279));
        if (branch_taken_0x20fbb8) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBC0u;
label_20fbc0:
    // 0x20fbc0: 0x3c02000b
    ctx->pc = 0x20fbc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fbc4:
    // 0x20fbc4: 0x10000009
label_20fbc8:
    if (ctx->pc == 0x20FBC8u) {
        ctx->pc = 0x20FBC8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 281));
        ctx->pc = 0x20FBCCu;
        goto label_20fbcc;
    }
    ctx->pc = 0x20FBC4u;
    {
        const bool branch_taken_0x20fbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBC8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 281));
        if (branch_taken_0x20fbc4) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBCCu;
label_20fbcc:
    // 0x20fbcc: 0x3c02000b
    ctx->pc = 0x20fbccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fbd0:
    // 0x20fbd0: 0x10000006
label_20fbd4:
    if (ctx->pc == 0x20FBD4u) {
        ctx->pc = 0x20FBD4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 283));
        ctx->pc = 0x20FBD8u;
        goto label_20fbd8;
    }
    ctx->pc = 0x20FBD0u;
    {
        const bool branch_taken_0x20fbd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBD4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 283));
        if (branch_taken_0x20fbd0) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBD8u;
label_20fbd8:
    // 0x20fbd8: 0x3c02000b
    ctx->pc = 0x20fbd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)11 << 16));
label_20fbdc:
    // 0x20fbdc: 0x10000003
label_20fbe0:
    if (ctx->pc == 0x20FBE0u) {
        ctx->pc = 0x20FBE0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 285));
        ctx->pc = 0x20FBE4u;
        goto label_20fbe4;
    }
    ctx->pc = 0x20FBDCu;
    {
        const bool branch_taken_0x20fbdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FBE0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 285));
        if (branch_taken_0x20fbdc) {
            ctx->pc = 0x20FBECu;
            goto label_20fbec;
        }
    }
    ctx->pc = 0x20FBE4u;
label_20fbe4:
    // 0x20fbe4: 0x3c020002
    ctx->pc = 0x20fbe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_20fbe8:
    // 0x20fbe8: 0x34450027
    ctx->pc = 0x20fbe8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39));
label_20fbec:
    // 0x20fbec: 0x3c020051
    ctx->pc = 0x20fbecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20fbf0:
    // 0x20fbf0: 0x244434f0
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20fbf4:
    // 0x20fbf4: 0x70003628
    ctx->pc = 0x20fbf4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbf8:
    // 0x20fbf8: 0x70003e28
    ctx->pc = 0x20fbf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fbfc:
    // 0x20fbfc: 0xc086018
label_20fc00:
    if (ctx->pc == 0x20FC00u) {
        ctx->pc = 0x20FC00u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x20FC04u;
        goto label_20fc04;
    }
    ctx->pc = 0x20FBFCu;
    SET_GPR_U32(ctx, 31, 0x20FC04u);
    ctx->pc = 0x20FC00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC04u; }
        else if (ctx->pc != 0x20FC04u) { ctx->pc = 0x20FC04u; }
    }
    if (ctx->pc != 0x20FC04u) { return; }
    ctx->pc = 0x20FC04u;
label_20fc04:
    // 0x20fc04: 0x7bbf0010
    ctx->pc = 0x20fc04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20fc08:
    // 0x20fc08: 0x7bb00000
    ctx->pc = 0x20fc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20fc0c:
    // 0x20fc0c: 0x3e00008
label_20fc10:
    if (ctx->pc == 0x20FC10u) {
        ctx->pc = 0x20FC10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20FC14u;
        goto label_fallthrough_0x20fc0c;
    }
    ctx->pc = 0x20FC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FA40u: goto label_20fa40;
            case 0x20FA44u: goto label_20fa44;
            case 0x20FA48u: goto label_20fa48;
            case 0x20FA4Cu: goto label_20fa4c;
            case 0x20FA50u: goto label_20fa50;
            case 0x20FA54u: goto label_20fa54;
            case 0x20FA58u: goto label_20fa58;
            case 0x20FA5Cu: goto label_20fa5c;
            case 0x20FA60u: goto label_20fa60;
            case 0x20FA64u: goto label_20fa64;
            case 0x20FA68u: goto label_20fa68;
            case 0x20FA6Cu: goto label_20fa6c;
            case 0x20FA70u: goto label_20fa70;
            case 0x20FA74u: goto label_20fa74;
            case 0x20FA78u: goto label_20fa78;
            case 0x20FA7Cu: goto label_20fa7c;
            case 0x20FA80u: goto label_20fa80;
            case 0x20FA84u: goto label_20fa84;
            case 0x20FA88u: goto label_20fa88;
            case 0x20FA8Cu: goto label_20fa8c;
            case 0x20FA90u: goto label_20fa90;
            case 0x20FA94u: goto label_20fa94;
            case 0x20FA98u: goto label_20fa98;
            case 0x20FA9Cu: goto label_20fa9c;
            case 0x20FAA0u: goto label_20faa0;
            case 0x20FAA4u: goto label_20faa4;
            case 0x20FAA8u: goto label_20faa8;
            case 0x20FAACu: goto label_20faac;
            case 0x20FAB0u: goto label_20fab0;
            case 0x20FAB4u: goto label_20fab4;
            case 0x20FAB8u: goto label_20fab8;
            case 0x20FABCu: goto label_20fabc;
            case 0x20FAC0u: goto label_20fac0;
            case 0x20FAC4u: goto label_20fac4;
            case 0x20FAC8u: goto label_20fac8;
            case 0x20FACCu: goto label_20facc;
            case 0x20FAD0u: goto label_20fad0;
            case 0x20FAD4u: goto label_20fad4;
            case 0x20FAD8u: goto label_20fad8;
            case 0x20FADCu: goto label_20fadc;
            case 0x20FAE0u: goto label_20fae0;
            case 0x20FAE4u: goto label_20fae4;
            case 0x20FAE8u: goto label_20fae8;
            case 0x20FAECu: goto label_20faec;
            case 0x20FAF0u: goto label_20faf0;
            case 0x20FAF4u: goto label_20faf4;
            case 0x20FAF8u: goto label_20faf8;
            case 0x20FAFCu: goto label_20fafc;
            case 0x20FB00u: goto label_20fb00;
            case 0x20FB04u: goto label_20fb04;
            case 0x20FB08u: goto label_20fb08;
            case 0x20FB0Cu: goto label_20fb0c;
            case 0x20FB10u: goto label_20fb10;
            case 0x20FB14u: goto label_20fb14;
            case 0x20FB18u: goto label_20fb18;
            case 0x20FB1Cu: goto label_20fb1c;
            case 0x20FB20u: goto label_20fb20;
            case 0x20FB24u: goto label_20fb24;
            case 0x20FB28u: goto label_20fb28;
            case 0x20FB2Cu: goto label_20fb2c;
            case 0x20FB30u: goto label_20fb30;
            case 0x20FB34u: goto label_20fb34;
            case 0x20FB38u: goto label_20fb38;
            case 0x20FB3Cu: goto label_20fb3c;
            case 0x20FB40u: goto label_20fb40;
            case 0x20FB44u: goto label_20fb44;
            case 0x20FB48u: goto label_20fb48;
            case 0x20FB4Cu: goto label_20fb4c;
            case 0x20FB50u: goto label_20fb50;
            case 0x20FB54u: goto label_20fb54;
            case 0x20FB58u: goto label_20fb58;
            case 0x20FB5Cu: goto label_20fb5c;
            case 0x20FB60u: goto label_20fb60;
            case 0x20FB64u: goto label_20fb64;
            case 0x20FB68u: goto label_20fb68;
            case 0x20FB6Cu: goto label_20fb6c;
            case 0x20FB70u: goto label_20fb70;
            case 0x20FB74u: goto label_20fb74;
            case 0x20FB78u: goto label_20fb78;
            case 0x20FB7Cu: goto label_20fb7c;
            case 0x20FB80u: goto label_20fb80;
            case 0x20FB84u: goto label_20fb84;
            case 0x20FB88u: goto label_20fb88;
            case 0x20FB8Cu: goto label_20fb8c;
            case 0x20FB90u: goto label_20fb90;
            case 0x20FB94u: goto label_20fb94;
            case 0x20FB98u: goto label_20fb98;
            case 0x20FB9Cu: goto label_20fb9c;
            case 0x20FBA0u: goto label_20fba0;
            case 0x20FBA4u: goto label_20fba4;
            case 0x20FBA8u: goto label_20fba8;
            case 0x20FBACu: goto label_20fbac;
            case 0x20FBB0u: goto label_20fbb0;
            case 0x20FBB4u: goto label_20fbb4;
            case 0x20FBB8u: goto label_20fbb8;
            case 0x20FBBCu: goto label_20fbbc;
            case 0x20FBC0u: goto label_20fbc0;
            case 0x20FBC4u: goto label_20fbc4;
            case 0x20FBC8u: goto label_20fbc8;
            case 0x20FBCCu: goto label_20fbcc;
            case 0x20FBD0u: goto label_20fbd0;
            case 0x20FBD4u: goto label_20fbd4;
            case 0x20FBD8u: goto label_20fbd8;
            case 0x20FBDCu: goto label_20fbdc;
            case 0x20FBE0u: goto label_20fbe0;
            case 0x20FBE4u: goto label_20fbe4;
            case 0x20FBE8u: goto label_20fbe8;
            case 0x20FBECu: goto label_20fbec;
            case 0x20FBF0u: goto label_20fbf0;
            case 0x20FBF4u: goto label_20fbf4;
            case 0x20FBF8u: goto label_20fbf8;
            case 0x20FBFCu: goto label_20fbfc;
            case 0x20FC00u: goto label_20fc00;
            case 0x20FC04u: goto label_20fc04;
            case 0x20FC08u: goto label_20fc08;
            case 0x20FC0Cu: goto label_20fc0c;
            case 0x20FC10u: goto label_20fc10;
            default: break;
        }
        return;
    }
label_fallthrough_0x20fc0c:
    ctx->pc = 0x20FC14u;
}
