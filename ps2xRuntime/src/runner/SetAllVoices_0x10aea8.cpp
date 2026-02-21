#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetAllVoices
// Address: 0x10aea8 - 0x10b034
void SetAllVoices_0x10aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10aea8u;

    // 0x10aea8: 0x27bdff60
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10aeac: 0xffbe0080
    ctx->pc = 0x10aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x10aeb0: 0xffb70070
    ctx->pc = 0x10aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10aeb4: 0x3c1e0017
    ctx->pc = 0x10aeb4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)23 << 16));
    // 0x10aeb8: 0xffb60060
    ctx->pc = 0x10aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10aebc: 0x3c170017
    ctx->pc = 0x10aebcu;
    SET_GPR_U32(ctx, 23, ((uint32_t)23 << 16));
    // 0x10aec0: 0xffb50050
    ctx->pc = 0x10aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10aec4: 0x80b02d
    ctx->pc = 0x10aec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aec8: 0xffb30030
    ctx->pc = 0x10aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10aecc: 0xa0a82d
    ctx->pc = 0x10aeccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aed0: 0xffb10010
    ctx->pc = 0x10aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10aed4: 0x982d
    ctx->pc = 0x10aed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aed8: 0xffbf0090
    ctx->pc = 0x10aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10aedc: 0x2411ffff
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10aee0: 0xffb40040
    ctx->pc = 0x10aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10aee4: 0xffb20020
    ctx->pc = 0x10aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10aee8: 0xffb00000
    ctx->pc = 0x10aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aeec: 0x902d
    ctx->pc = 0x10aeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aef0:
    // 0x10aef0: 0x26740001
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 1));
    // 0x10aef4: 0x121040
    ctx->pc = 0x10aef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
label_10aef8:
    // 0x10aef8: 0x24040001
    ctx->pc = 0x10aef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aefc: 0x2628025
    ctx->pc = 0x10aefcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10af00: 0x34058010
    ctx->pc = 0x10af00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10af04: 0x200302d
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af08: 0xc045c80
    ctx->pc = 0x10AF08u;
    SET_GPR_U32(ctx, 31, 0x10AF10u);
    ctx->pc = 0x10AF0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF10u; }
    }
    if (ctx->pc != 0x10AF10u) { return; }
    ctx->pc = 0x10AF10u;
    // 0x10af10: 0x14510005
    ctx->pc = 0x10AF10u;
    {
        const bool branch_taken_0x10af10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AF14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10af10) {
            ctx->pc = 0x10AF28u;
            goto label_10af28;
        }
    }
    ctx->pc = 0x10AF18u;
    // 0x10af18: 0x3c020017
    ctx->pc = 0x10af18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10af1c: 0xc04ace4
    ctx->pc = 0x10AF1Cu;
    SET_GPR_U32(ctx, 31, 0x10AF24u);
    ctx->pc = 0x10AF20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24240));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF24u; }
    }
    if (ctx->pc != 0x10AF24u) { return; }
    ctx->pc = 0x10AF24u;
    // 0x10af24: 0x24040001
    ctx->pc = 0x10af24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10af28:
    // 0x10af28: 0x34058010
    ctx->pc = 0x10af28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10af2c: 0x36060100
    ctx->pc = 0x10af2cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 256));
    // 0x10af30: 0xc045c80
    ctx->pc = 0x10AF30u;
    SET_GPR_U32(ctx, 31, 0x10AF38u);
    ctx->pc = 0x10AF34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF38u; }
    }
    if (ctx->pc != 0x10AF38u) { return; }
    ctx->pc = 0x10AF38u;
    // 0x10af38: 0x14510005
    ctx->pc = 0x10AF38u;
    {
        const bool branch_taken_0x10af38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AF3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10af38) {
            ctx->pc = 0x10AF50u;
            goto label_10af50;
        }
    }
    ctx->pc = 0x10AF40u;
    // 0x10af40: 0x3c020017
    ctx->pc = 0x10af40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10af44: 0xc04ace4
    ctx->pc = 0x10AF44u;
    SET_GPR_U32(ctx, 31, 0x10AF4Cu);
    ctx->pc = 0x10AF48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24248));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF4Cu; }
    }
    if (ctx->pc != 0x10AF4Cu) { return; }
    ctx->pc = 0x10AF4Cu;
    // 0x10af4c: 0x24040001
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10af50:
    // 0x10af50: 0x34058010
    ctx->pc = 0x10af50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10af54: 0x36060200
    ctx->pc = 0x10af54u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 512));
    // 0x10af58: 0xc045c80
    ctx->pc = 0x10AF58u;
    SET_GPR_U32(ctx, 31, 0x10AF60u);
    ctx->pc = 0x10AF5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF60u; }
    }
    if (ctx->pc != 0x10AF60u) { return; }
    ctx->pc = 0x10AF60u;
    // 0x10af60: 0x14510005
    ctx->pc = 0x10AF60u;
    {
        const bool branch_taken_0x10af60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AF64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10af60) {
            ctx->pc = 0x10AF78u;
            goto label_10af78;
        }
    }
    ctx->pc = 0x10AF68u;
    // 0x10af68: 0x3c020017
    ctx->pc = 0x10af68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10af6c: 0xc04ace4
    ctx->pc = 0x10AF6Cu;
    SET_GPR_U32(ctx, 31, 0x10AF74u);
    ctx->pc = 0x10AF70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24256));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF74u; }
    }
    if (ctx->pc != 0x10AF74u) { return; }
    ctx->pc = 0x10AF74u;
    // 0x10af74: 0x24040001
    ctx->pc = 0x10af74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10af78:
    // 0x10af78: 0x34058050
    ctx->pc = 0x10af78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32848));
    // 0x10af7c: 0x36062040
    ctx->pc = 0x10af7cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 8256));
    // 0x10af80: 0xc045c80
    ctx->pc = 0x10AF80u;
    SET_GPR_U32(ctx, 31, 0x10AF88u);
    ctx->pc = 0x10AF84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF88u; }
    }
    if (ctx->pc != 0x10AF88u) { return; }
    ctx->pc = 0x10AF88u;
    // 0x10af88: 0x14510005
    ctx->pc = 0x10AF88u;
    {
        const bool branch_taken_0x10af88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AF8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10af88) {
            ctx->pc = 0x10AFA0u;
            goto label_10afa0;
        }
    }
    ctx->pc = 0x10AF90u;
    // 0x10af90: 0x3c020017
    ctx->pc = 0x10af90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10af94: 0xc04ace4
    ctx->pc = 0x10AF94u;
    SET_GPR_U32(ctx, 31, 0x10AF9Cu);
    ctx->pc = 0x10AF98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24264));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF9Cu; }
    }
    if (ctx->pc != 0x10AF9Cu) { return; }
    ctx->pc = 0x10AF9Cu;
    // 0x10af9c: 0x24040001
    ctx->pc = 0x10af9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10afa0:
    // 0x10afa0: 0x34058010
    ctx->pc = 0x10afa0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10afa4: 0x36060300
    ctx->pc = 0x10afa4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 768));
    // 0x10afa8: 0xc045c80
    ctx->pc = 0x10AFA8u;
    SET_GPR_U32(ctx, 31, 0x10AFB0u);
    ctx->pc = 0x10AFACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFB0u; }
    }
    if (ctx->pc != 0x10AFB0u) { return; }
    ctx->pc = 0x10AFB0u;
    // 0x10afb0: 0x14510004
    ctx->pc = 0x10AFB0u;
    {
        const bool branch_taken_0x10afb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AFB4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 1024));
        if (branch_taken_0x10afb0) {
            ctx->pc = 0x10AFC4u;
            goto label_10afc4;
        }
    }
    ctx->pc = 0x10AFB8u;
    // 0x10afb8: 0xc04ace4
    ctx->pc = 0x10AFB8u;
    SET_GPR_U32(ctx, 31, 0x10AFC0u);
    ctx->pc = 0x10AFBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 24272));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFC0u; }
    }
    if (ctx->pc != 0x10AFC0u) { return; }
    ctx->pc = 0x10AFC0u;
    // 0x10afc0: 0x36060400
    ctx->pc = 0x10afc0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 1024));
label_10afc4:
    // 0x10afc4: 0x24040001
    ctx->pc = 0x10afc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10afc8: 0x34058010
    ctx->pc = 0x10afc8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10afcc: 0xc045c80
    ctx->pc = 0x10AFCCu;
    SET_GPR_U32(ctx, 31, 0x10AFD4u);
    ctx->pc = 0x10AFD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8128));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFD4u; }
    }
    if (ctx->pc != 0x10AFD4u) { return; }
    ctx->pc = 0x10AFD4u;
    // 0x10afd4: 0x54510004
    ctx->pc = 0x10AFD4u;
    {
        const bool branch_taken_0x10afd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x10afd4) {
            ctx->pc = 0x10AFD8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x10AFE8u;
            goto label_10afe8;
        }
    }
    ctx->pc = 0x10AFDCu;
    // 0x10afdc: 0xc04ace4
    ctx->pc = 0x10AFDCu;
    SET_GPR_U32(ctx, 31, 0x10AFE4u);
    ctx->pc = 0x10AFE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 24280));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFE4u; }
    }
    if (ctx->pc != 0x10AFE4u) { return; }
    ctx->pc = 0x10AFE4u;
    // 0x10afe4: 0x26520001
    ctx->pc = 0x10afe4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10afe8:
    // 0x10afe8: 0x2a420018
    ctx->pc = 0x10afe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 24));
    // 0x10afec: 0x1440ffc2
    ctx->pc = 0x10AFECu;
    {
        const bool branch_taken_0x10afec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AFF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x10afec) {
            ctx->pc = 0x10AEF8u;
            goto label_10aef8;
        }
    }
    ctx->pc = 0x10AFF4u;
    // 0x10aff4: 0x280982d
    ctx->pc = 0x10aff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aff8: 0x2a620002
    ctx->pc = 0x10aff8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x10affc: 0x1440ffbc
    ctx->pc = 0x10AFFCu;
    {
        const bool branch_taken_0x10affc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B000u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10affc) {
            ctx->pc = 0x10AEF0u;
            goto label_10aef0;
        }
    }
    ctx->pc = 0x10B004u;
    // 0x10b004: 0xdfbf0090
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b008: 0xdfbe0080
    ctx->pc = 0x10b008u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b00c: 0xdfb70070
    ctx->pc = 0x10b00cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b010: 0xdfb60060
    ctx->pc = 0x10b010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b014: 0xdfb50050
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b018: 0xdfb40040
    ctx->pc = 0x10b018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b01c: 0xdfb30030
    ctx->pc = 0x10b01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b020: 0xdfb20020
    ctx->pc = 0x10b020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b024: 0xdfb10010
    ctx->pc = 0x10b024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b028: 0xdfb00000
    ctx->pc = 0x10b028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b02c: 0x3e00008
    ctx->pc = 0x10B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AEF0u: goto label_10aef0;
            case 0x10AEF8u: goto label_10aef8;
            case 0x10AF28u: goto label_10af28;
            case 0x10AF50u: goto label_10af50;
            case 0x10AF78u: goto label_10af78;
            case 0x10AFA0u: goto label_10afa0;
            case 0x10AFC4u: goto label_10afc4;
            case 0x10AFE8u: goto label_10afe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B034u;
}
