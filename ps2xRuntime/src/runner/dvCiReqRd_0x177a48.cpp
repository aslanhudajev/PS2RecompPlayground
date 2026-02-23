#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiReqRd
// Address: 0x177a48 - 0x177bac
void dvCiReqRd_0x177a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiReqRd");


    ctx->pc = 0x177a48u;

    // 0x177a48: 0x27bdffa0
    ctx->pc = 0x177a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x177a4c: 0xffb20020
    ctx->pc = 0x177a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177a50: 0xffb10010
    ctx->pc = 0x177a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177a54: 0xc0902d
    ctx->pc = 0x177a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a58: 0xffb00000
    ctx->pc = 0x177a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a5c: 0x80882d
    ctx->pc = 0x177a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a60: 0xffbf0050
    ctx->pc = 0x177a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x177a64: 0xa0802d
    ctx->pc = 0x177a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a68: 0xffb40040
    ctx->pc = 0x177a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x177a6c: 0x16200005
    ctx->pc = 0x177A6Cu;
    {
        const bool branch_taken_0x177a6c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x177A70u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        if (branch_taken_0x177a6c) {
            ctx->pc = 0x177A84u;
            goto label_177a84;
        }
    }
    ctx->pc = 0x177A74u;
    // 0x177a74: 0x3c05002c
    ctx->pc = 0x177a74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177a78: 0x202d
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a7c: 0x1000000b
    ctx->pc = 0x177A7Cu;
    {
        const bool branch_taken_0x177a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177A80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
        if (branch_taken_0x177a7c) {
            ctx->pc = 0x177AACu;
            goto label_177aac;
        }
    }
    ctx->pc = 0x177A84u;
label_177a84:
    // 0x177a84: 0x6010004
    ctx->pc = 0x177A84u;
    {
        const bool branch_taken_0x177a84 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x177A88u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x177a84) {
            ctx->pc = 0x177A98u;
            goto label_177a98;
        }
    }
    ctx->pc = 0x177A8Cu;
    // 0x177a8c: 0x220202d
    ctx->pc = 0x177a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a90: 0x10000006
    ctx->pc = 0x177A90u;
    {
        const bool branch_taken_0x177a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177A94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947864));
        if (branch_taken_0x177a90) {
            ctx->pc = 0x177AACu;
            goto label_177aac;
        }
    }
    ctx->pc = 0x177A98u;
label_177a98:
    // 0x177a98: 0x56400008
    ctx->pc = 0x177A98u;
    {
        const bool branch_taken_0x177a98 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x177a98) {
            ctx->pc = 0x177A9Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x177ABCu;
            goto label_177abc;
        }
    }
    ctx->pc = 0x177AA0u;
    // 0x177aa0: 0x3c05002c
    ctx->pc = 0x177aa0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177aa4: 0x220202d
    ctx->pc = 0x177aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177aa8: 0x24a5b438
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947896));
label_177aac:
    // 0x177aac: 0xc05dd3c
    ctx->pc = 0x177AACu;
    SET_GPR_U32(ctx, 31, 0x177AB4u);
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AB4u; }
        else if (ctx->pc != 0x177AB4u) { ctx->pc = 0x177AB4u; }
    }
    if (ctx->pc != 0x177AB4u) { return; }
    ctx->pc = 0x177AB4u;
label_177ab4:
    // 0x177ab4: 0x10000035
    ctx->pc = 0x177AB4u;
    {
        const bool branch_taken_0x177ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177AB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177ab4) {
            ctx->pc = 0x177B8Cu;
            goto label_177b8c;
        }
    }
    ctx->pc = 0x177ABCu;
label_177abc:
    // 0x177abc: 0x24140002
    ctx->pc = 0x177abcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x177ac0: 0x10540032
    ctx->pc = 0x177AC0u;
    {
        const bool branch_taken_0x177ac0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x177AC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177ac0) {
            ctx->pc = 0x177B8Cu;
            goto label_177b8c;
        }
    }
    ctx->pc = 0x177AC8u;
    // 0x177ac8: 0x16000004
    ctx->pc = 0x177AC8u;
    {
        const bool branch_taken_0x177ac8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x177ACCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x177ac8) {
            ctx->pc = 0x177ADCu;
            goto label_177adc;
        }
    }
    ctx->pc = 0x177AD0u;
    // 0x177ad0: 0x102d
    ctx->pc = 0x177ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ad4: 0x1000002d
    ctx->pc = 0x177AD4u;
    {
        const bool branch_taken_0x177ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177AD8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x177ad4) {
            ctx->pc = 0x177B8Cu;
            goto label_177b8c;
        }
    }
    ctx->pc = 0x177ADCu;
label_177adc:
    // 0x177adc: 0xc05dd48
    ctx->pc = 0x177ADCu;
    SET_GPR_U32(ctx, 31, 0x177AE4u);
    ctx->pc = 0x177AE0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177520u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_is_exec_hn_0x177520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE4u; }
        else if (ctx->pc != 0x177AE4u) { ctx->pc = 0x177AE4u; }
    }
    if (ctx->pc != 0x177AE4u) { return; }
    ctx->pc = 0x177AE4u;
    // 0x177ae4: 0x1053fff3
    ctx->pc = 0x177AE4u;
    {
        const bool branch_taken_0x177ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x177AE8u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x177ae4) {
            ctx->pc = 0x177AB4u;
            goto label_177ab4;
        }
    }
    ctx->pc = 0x177AECu;
    // 0x177aec: 0x8e230008
    ctx->pc = 0x177aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x177af0: 0x8e25000c
    ctx->pc = 0x177af0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x177af4: 0x24c79f18
    ctx->pc = 0x177af4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 4294942488));
    // 0x177af8: 0xae320014
    ctx->pc = 0x177af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
    // 0x177afc: 0x24040001
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b00: 0x651823
    ctx->pc = 0x177b00u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x177b04: 0x203102a
    ctx->pc = 0x177b04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x177b08: 0x62800a
    ctx->pc = 0x177b08u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x177b0c: 0xae300010
    ctx->pc = 0x177b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x177b10: 0x90c29f18
    ctx->pc = 0x177b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294942488)));
    // 0x177b14: 0xa222003c
    ctx->pc = 0x177b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x177b18: 0x90e30001
    ctx->pc = 0x177b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x177b1c: 0xa223003d
    ctx->pc = 0x177b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x177b20: 0x90e20002
    ctx->pc = 0x177b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x177b24: 0xc054502
    ctx->pc = 0x177B24u;
    SET_GPR_U32(ctx, 31, 0x177B2Cu);
    ctx->pc = 0x177B28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x151408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x151408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B2Cu; }
        else if (ctx->pc != 0x177B2Cu) { ctx->pc = 0x177B2Cu; }
    }
    if (ctx->pc != 0x177B2Cu) { return; }
    ctx->pc = 0x177B2Cu;
    // 0x177b2c: 0x10530017
    ctx->pc = 0x177B2Cu;
    {
        const bool branch_taken_0x177b2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x177B30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177b2c) {
            ctx->pc = 0x177B8Cu;
            goto label_177b8c;
        }
    }
    ctx->pc = 0x177B34u;
    // 0x177b34: 0xc05dd80
    ctx->pc = 0x177B34u;
    SET_GPR_U32(ctx, 31, 0x177B3Cu);
    ctx->pc = 0x177600u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiExecServer_0x177600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B3Cu; }
        else if (ctx->pc != 0x177B3Cu) { ctx->pc = 0x177B3Cu; }
    }
    if (ctx->pc != 0x177B3Cu) { return; }
    ctx->pc = 0x177B3Cu;
    // 0x177b3c: 0x8e250010
    ctx->pc = 0x177b3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x177b40: 0x8e240014
    ctx->pc = 0x177b40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x177b44: 0x52ac0
    ctx->pc = 0x177b44u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x177b48: 0x8e300018
    ctx->pc = 0x177b48u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x177b4c: 0x8e22000c
    ctx->pc = 0x177b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x177b50: 0x852821
    ctx->pc = 0x177b50u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x177b54: 0x24a5ffff
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x177b58: 0xc05549c
    ctx->pc = 0x177B58u;
    SET_GPR_U32(ctx, 31, 0x177B60u);
    ctx->pc = 0x177B5Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B60u; }
        else if (ctx->pc != 0x177B60u) { ctx->pc = 0x177B60u; }
    }
    if (ctx->pc != 0x177B60u) { return; }
    ctx->pc = 0x177B60u;
    // 0x177b60: 0x8e250010
    ctx->pc = 0x177b60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x177b64: 0x200202d
    ctx->pc = 0x177b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b68: 0x8e260014
    ctx->pc = 0x177b68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x177b6c: 0xc05d79e
    ctx->pc = 0x177B6Cu;
    SET_GPR_U32(ctx, 31, 0x177B74u);
    ctx->pc = 0x177B70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 60));
    ctx->pc = 0x175E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_ReqRdDvd_0x175e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B74u; }
        else if (ctx->pc != 0x177B74u) { ctx->pc = 0x177B74u; }
    }
    if (ctx->pc != 0x177B74u) { return; }
    ctx->pc = 0x177B74u;
    // 0x177b74: 0x10400005
    ctx->pc = 0x177B74u;
    {
        const bool branch_taken_0x177b74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177B78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177b74) {
            ctx->pc = 0x177B8Cu;
            goto label_177b8c;
        }
    }
    ctx->pc = 0x177B7Cu;
    // 0x177b7c: 0xc05dd3a
    ctx->pc = 0x177B7Cu;
    SET_GPR_U32(ctx, 31, 0x177B84u);
    ctx->pc = 0x1774E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        rdmode_wait_0x1774e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B84u; }
        else if (ctx->pc != 0x177B84u) { ctx->pc = 0x177B84u; }
    }
    if (ctx->pc != 0x177B84u) { return; }
    ctx->pc = 0x177B84u;
    // 0x177b84: 0xa2340002
    ctx->pc = 0x177b84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x177b88: 0x8e220010
    ctx->pc = 0x177b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_177b8c:
    // 0x177b8c: 0xdfbf0050
    ctx->pc = 0x177b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177b90: 0xdfb40040
    ctx->pc = 0x177b90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177b94: 0xdfb30030
    ctx->pc = 0x177b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177b98: 0xdfb20020
    ctx->pc = 0x177b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b9c: 0xdfb10010
    ctx->pc = 0x177b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ba0: 0xdfb00000
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ba4: 0x3e00008
    ctx->pc = 0x177BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177BA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177A84u: goto label_177a84;
            case 0x177A98u: goto label_177a98;
            case 0x177AACu: goto label_177aac;
            case 0x177AB4u: goto label_177ab4;
            case 0x177ABCu: goto label_177abc;
            case 0x177ADCu: goto label_177adc;
            case 0x177B8Cu: goto label_177b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177BACu;
}
