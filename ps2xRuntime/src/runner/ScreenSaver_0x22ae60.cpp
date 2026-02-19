#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaver
// Address: 0x22ae60 - 0x22b04c
void ScreenSaver_0x22ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ae60u;

    // 0x22ae60: 0x27bdffa0
    ctx->pc = 0x22ae60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ae64: 0xffbf0050
    ctx->pc = 0x22ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ae68: 0xffb40040
    ctx->pc = 0x22ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22ae6c: 0xffb30030
    ctx->pc = 0x22ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22ae70: 0xffb20020
    ctx->pc = 0x22ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ae74: 0xffb10010
    ctx->pc = 0x22ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22ae78: 0xffb00000
    ctx->pc = 0x22ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ae7c: 0x3c020031
    ctx->pc = 0x22ae7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22ae80: 0x8c430018
    ctx->pc = 0x22ae80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22ae84: 0x30628000
    ctx->pc = 0x22ae84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x22ae88: 0x14400066
    ctx->pc = 0x22AE88u;
    {
        const bool branch_taken_0x22ae88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AE8Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ae88) {
            ctx->pc = 0x22B024u;
            goto label_22b024;
        }
    }
    ctx->pc = 0x22AE90u;
    // 0x22ae90: 0x2402400e
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16398));
    // 0x22ae94: 0x10620063
    ctx->pc = 0x22AE94u;
    {
        const bool branch_taken_0x22ae94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22AE98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16405));
        if (branch_taken_0x22ae94) {
            ctx->pc = 0x22B024u;
            goto label_22b024;
        }
    }
    ctx->pc = 0x22AE9Cu;
    // 0x22ae9c: 0x10620061
    ctx->pc = 0x22AE9Cu;
    {
        const bool branch_taken_0x22ae9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22AEA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ae9c) {
            ctx->pc = 0x22B024u;
            goto label_22b024;
        }
    }
    ctx->pc = 0x22AEA4u;
    // 0x22aea4: 0xc09908c
    ctx->pc = 0x22AEA4u;
    SET_GPR_U32(ctx, 31, 0x22AEACu);
    ctx->pc = 0x22AEA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AEACu; }
    }
    if (ctx->pc != 0x22AEACu) { return; }
    ctx->pc = 0x22AEACu;
    // 0x22aeac: 0x1040005d
    ctx->pc = 0x22AEACu;
    {
        const bool branch_taken_0x22aeac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AEB0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x22aeac) {
            ctx->pc = 0x22B024u;
            goto label_22b024;
        }
    }
    ctx->pc = 0x22AEB4u;
    // 0x22aeb4: 0x3c030031
    ctx->pc = 0x22aeb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x22aeb8: 0x8c821048
    ctx->pc = 0x22aeb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4168)));
    // 0x22aebc: 0x8c63ffc0
    ctx->pc = 0x22aebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x22aec0: 0x431021
    ctx->pc = 0x22aec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22aec4: 0xac821048
    ctx->pc = 0x22aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4168), GPR_U32(ctx, 2));
    // 0x22aec8: 0x282d
    ctx->pc = 0x22aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aecc: 0x3c020032
    ctx->pc = 0x22aeccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22aed0: 0x24481320
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4896));
    // 0x22aed4: 0x2407003c
    ctx->pc = 0x22aed4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 60));
    // 0x22aed8: 0x3c020031
    ctx->pc = 0x22aed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22aedc: 0x24491b94
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7060));
    // 0x22aee0: 0x80302d
    ctx->pc = 0x22aee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aee4: 0x51080
    ctx->pc = 0x22aee4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_22aee8:
    // 0x22aee8: 0x481021
    ctx->pc = 0x22aee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22aeec: 0xa72018
    ctx->pc = 0x22aeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22aef0: 0x891821
    ctx->pc = 0x22aef0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22aef4: 0x8c440000
    ctx->pc = 0x22aef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22aef8: 0x8c620000
    ctx->pc = 0x22aef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22aefc: 0x54820001
    ctx->pc = 0x22AEFCu;
    {
        const bool branch_taken_0x22aefc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x22aefc) {
            ctx->pc = 0x22AF00u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 4168), GPR_U32(ctx, 0));
            ctx->pc = 0x22AF04u;
            goto label_22af04;
        }
    }
    ctx->pc = 0x22AF04u;
label_22af04:
    // 0x22af04: 0x24a50001
    ctx->pc = 0x22af04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22af08: 0x28a20004
    ctx->pc = 0x22af08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22af0c: 0x1440fff6
    ctx->pc = 0x22AF0Cu;
    {
        const bool branch_taken_0x22af0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AF10u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x22af0c) {
            ctx->pc = 0x22AEE8u;
            goto label_22aee8;
        }
    }
    ctx->pc = 0x22AF14u;
    // 0x22af14: 0x3c020031
    ctx->pc = 0x22af14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22af18: 0xdc420e28
    ctx->pc = 0x22af18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x22af1c: 0x34038000
    ctx->pc = 0x22af1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x22af20: 0x31c78
    ctx->pc = 0x22af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x22af24: 0x431024
    ctx->pc = 0x22af24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22af28: 0x10400004
    ctx->pc = 0x22AF28u;
    {
        const bool branch_taken_0x22af28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AF2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22af28) {
            ctx->pc = 0x22AF3Cu;
            goto label_22af3c;
        }
    }
    ctx->pc = 0x22AF30u;
    // 0x22af30: 0x3c030031
    ctx->pc = 0x22af30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x22af34: 0x9463f1b2
    ctx->pc = 0x22af34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963634)));
    // 0x22af38: 0xac431048
    ctx->pc = 0x22af38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4168), GPR_U32(ctx, 3));
label_22af3c:
    // 0x22af3c: 0x3c040032
    ctx->pc = 0x22af3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22af40: 0x3c020031
    ctx->pc = 0x22af40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22af44: 0x9443f1b2
    ctx->pc = 0x22af44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963634)));
    // 0x22af48: 0x8c821048
    ctx->pc = 0x22af48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4168)));
    // 0x22af4c: 0x43102b
    ctx->pc = 0x22af4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22af50: 0x10400012
    ctx->pc = 0x22AF50u;
    {
        const bool branch_taken_0x22af50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AF54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22af50) {
            ctx->pc = 0x22AF9Cu;
            goto label_22af9c;
        }
    }
    ctx->pc = 0x22AF58u;
    // 0x22af58: 0x3c020032
    ctx->pc = 0x22af58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22af5c: 0x24461320
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4896));
    // 0x22af60: 0x2404003c
    ctx->pc = 0x22af60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x22af64: 0x3c020031
    ctx->pc = 0x22af64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22af68: 0x24481b94
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7060));
    // 0x22af6c: 0x51880
    ctx->pc = 0x22af6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_22af70:
    // 0x22af70: 0x661821
    ctx->pc = 0x22af70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22af74: 0xa43818
    ctx->pc = 0x22af74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22af78: 0xe81021
    ctx->pc = 0x22af78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x22af7c: 0x8c420000
    ctx->pc = 0x22af7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22af80: 0xac620000
    ctx->pc = 0x22af80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22af84: 0x24a50001
    ctx->pc = 0x22af84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22af88: 0x28a20004
    ctx->pc = 0x22af88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22af8c: 0x1440fff8
    ctx->pc = 0x22AF8Cu;
    {
        const bool branch_taken_0x22af8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AF90u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x22af8c) {
            ctx->pc = 0x22AF70u;
            goto label_22af70;
        }
    }
    ctx->pc = 0x22AF94u;
    // 0x22af94: 0x10000026
    ctx->pc = 0x22AF94u;
    {
        const bool branch_taken_0x22af94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AF98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22af94) {
            ctx->pc = 0x22B030u;
            goto label_22b030;
        }
    }
    ctx->pc = 0x22AF9Cu;
label_22af9c:
    // 0x22af9c: 0xc08ab12
    ctx->pc = 0x22AF9Cu;
    SET_GPR_U32(ctx, 31, 0x22AFA4u);
    ctx->pc = 0x22AC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverStart_0x22ac48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFA4u; }
    }
    if (ctx->pc != 0x22AFA4u) { return; }
    ctx->pc = 0x22AFA4u;
    // 0x22afa4: 0x1660001d
    ctx->pc = 0x22AFA4u;
    {
        const bool branch_taken_0x22afa4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AFA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x22afa4) {
            ctx->pc = 0x22B01Cu;
            goto label_22b01c;
        }
    }
    ctx->pc = 0x22AFACu;
    // 0x22afac: 0x3c020031
    ctx->pc = 0x22afacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22afb0: 0x24521b94
    ctx->pc = 0x22afb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7060));
    // 0x22afb4: 0x3c020032
    ctx->pc = 0x22afb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22afb8: 0x24511320
    ctx->pc = 0x22afb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4896));
    // 0x22afbc: 0x24100001
    ctx->pc = 0x22afbcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_22afc0:
    // 0x22afc0: 0xc080b88
    ctx->pc = 0x22AFC0u;
    SET_GPR_U32(ctx, 31, 0x22AFC8u);
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFC8u; }
    }
    if (ctx->pc != 0x22AFC8u) { return; }
    ctx->pc = 0x22AFC8u;
    // 0x22afc8: 0xc08ab84
    ctx->pc = 0x22AFC8u;
    SET_GPR_U32(ctx, 31, 0x22AFD0u);
    ctx->pc = 0x22AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverUpdate_0x22ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD0u; }
    }
    if (ctx->pc != 0x22AFD0u) { return; }
    ctx->pc = 0x22AFD0u;
    // 0x22afd0: 0xc0815b4
    ctx->pc = 0x22AFD0u;
    SET_GPR_U32(ctx, 31, 0x22AFD8u);
    ctx->pc = 0x2056D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerControls_0x2056d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD8u; }
    }
    if (ctx->pc != 0x22AFD8u) { return; }
    ctx->pc = 0x22AFD8u;
    // 0x22afd8: 0x282d
    ctx->pc = 0x22afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22afdc: 0x0
    ctx->pc = 0x22afdcu;
    // NOP
label_22afe0:
    // 0x22afe0: 0xb41018
    ctx->pc = 0x22afe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22afe4: 0x521821
    ctx->pc = 0x22afe4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22afe8: 0x51080
    ctx->pc = 0x22afe8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x22afec: 0x511021
    ctx->pc = 0x22afecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22aff0: 0x8c630000
    ctx->pc = 0x22aff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22aff4: 0x8c420000
    ctx->pc = 0x22aff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22aff8: 0x621826
    ctx->pc = 0x22aff8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22affc: 0x24a50001
    ctx->pc = 0x22affcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22b000: 0x28a20004
    ctx->pc = 0x22b000u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22b004: 0x1440fff6
    ctx->pc = 0x22B004u;
    {
        const bool branch_taken_0x22b004 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B008u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 16));
        if (branch_taken_0x22b004) {
            ctx->pc = 0x22AFE0u;
            goto label_22afe0;
        }
    }
    ctx->pc = 0x22B00Cu;
    // 0x22b00c: 0xc0b179a
    ctx->pc = 0x22B00Cu;
    SET_GPR_U32(ctx, 31, 0x22B014u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B014u; }
    }
    if (ctx->pc != 0x22B014u) { return; }
    ctx->pc = 0x22B014u;
    // 0x22b014: 0x1260ffea
    ctx->pc = 0x22B014u;
    {
        const bool branch_taken_0x22b014 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b014) {
            ctx->pc = 0x22AFC0u;
            goto label_22afc0;
        }
    }
    ctx->pc = 0x22B01Cu;
label_22b01c:
    // 0x22b01c: 0xc08ab54
    ctx->pc = 0x22B01Cu;
    SET_GPR_U32(ctx, 31, 0x22B024u);
    ctx->pc = 0x22AD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverEnd_0x22ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B024u; }
    }
    if (ctx->pc != 0x22B024u) { return; }
    ctx->pc = 0x22B024u;
label_22b024:
    // 0x22b024: 0x3c020032
    ctx->pc = 0x22b024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22b028: 0xac401048
    ctx->pc = 0x22b028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4168), GPR_U32(ctx, 0));
    // 0x22b02c: 0xdfbf0050
    ctx->pc = 0x22b02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22b030:
    // 0x22b030: 0xdfb40040
    ctx->pc = 0x22b030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b034: 0xdfb30030
    ctx->pc = 0x22b034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b038: 0xdfb20020
    ctx->pc = 0x22b038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b03c: 0xdfb10010
    ctx->pc = 0x22b03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b040: 0xdfb00000
    ctx->pc = 0x22b040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b044: 0x3e00008
    ctx->pc = 0x22B044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AEE8u: goto label_22aee8;
            case 0x22AF04u: goto label_22af04;
            case 0x22AF3Cu: goto label_22af3c;
            case 0x22AF70u: goto label_22af70;
            case 0x22AF9Cu: goto label_22af9c;
            case 0x22AFC0u: goto label_22afc0;
            case 0x22AFE0u: goto label_22afe0;
            case 0x22B01Cu: goto label_22b01c;
            case 0x22B024u: goto label_22b024;
            case 0x22B030u: goto label_22b030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B04Cu;
}
