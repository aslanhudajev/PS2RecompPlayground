#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioUnloadPart
// Address: 0x220ae8 - 0x220c28
void AudioUnloadPart_0x220ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220ae8u;

    // 0x220ae8: 0x27bdffb0
    ctx->pc = 0x220ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220aec: 0xffbf0040
    ctx->pc = 0x220aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220af0: 0xffb30030
    ctx->pc = 0x220af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220af4: 0xffb20020
    ctx->pc = 0x220af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220af8: 0xffb10010
    ctx->pc = 0x220af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220afc: 0xffb00000
    ctx->pc = 0x220afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220b00: 0x3c020032
    ctx->pc = 0x220b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220b04: 0x8c42fd58
    ctx->pc = 0x220b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220b08: 0x14400041
    ctx->pc = 0x220B08u;
    {
        const bool branch_taken_0x220b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220B0Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x220b08) {
            ctx->pc = 0x220C10u;
            goto label_220c10;
        }
    }
    ctx->pc = 0x220B10u;
    // 0x220b10: 0xc0880b4
    ctx->pc = 0x220B10u;
    SET_GPR_U32(ctx, 31, 0x220B18u);
    ctx->pc = 0x2202D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindPart_0x2202d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B18u; }
    }
    if (ctx->pc != 0x220B18u) { return; }
    ctx->pc = 0x220B18u;
    // 0x220b18: 0x40982d
    ctx->pc = 0x220b18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b1c: 0x3c030032
    ctx->pc = 0x220b1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220b20: 0x24020124
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
    // 0x220b24: 0x2621018
    ctx->pc = 0x220b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220b28: 0x24420014
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x220b2c: 0x8c64fe28
    ctx->pc = 0x220b2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x220b30: 0x441821
    ctx->pc = 0x220b30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x220b34: 0x8c62011c
    ctx->pc = 0x220b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x220b38: 0x4400034
    ctx->pc = 0x220B38u;
    {
        const bool branch_taken_0x220b38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x220B3Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x220b38) {
            ctx->pc = 0x220C0Cu;
            goto label_220c0c;
        }
    }
    ctx->pc = 0x220B40u;
    // 0x220b40: 0x621021
    ctx->pc = 0x220b40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220b44: 0x8c51001c
    ctx->pc = 0x220b44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x220b48: 0x3c020032
    ctx->pc = 0x220b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220b4c: 0x8c43fd6c
    ctx->pc = 0x220b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x220b50: 0x2402002c
    ctx->pc = 0x220b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x220b54: 0x2221018
    ctx->pc = 0x220b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220b58: 0x8c630010
    ctx->pc = 0x220b58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220b5c: 0x439021
    ctx->pc = 0x220b5cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220b60: 0x9643002a
    ctx->pc = 0x220b60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x220b64: 0x10600020
    ctx->pc = 0x220B64u;
    {
        const bool branch_taken_0x220b64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x220B68u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x220b64) {
            ctx->pc = 0x220BE8u;
            goto label_220be8;
        }
    }
    ctx->pc = 0x220B6Cu;
    // 0x220b6c: 0x1062001e
    ctx->pc = 0x220B6Cu;
    {
        const bool branch_taken_0x220b6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x220B70u;
        SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
        if (branch_taken_0x220b6c) {
            ctx->pc = 0x220BE8u;
            goto label_220be8;
        }
    }
    ctx->pc = 0x220B74u;
    // 0x220b74: 0x8c820010
    ctx->pc = 0x220b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x220b78: 0x2450ffff
    ctx->pc = 0x220b78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220b7c: 0x24050124
    ctx->pc = 0x220b7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 292));
    // 0x220b80: 0x10000002
    ctx->pc = 0x220B80u;
    {
        const bool branch_taken_0x220b80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220B84u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x220b80) {
            ctx->pc = 0x220B8Cu;
            goto label_220b8c;
        }
    }
    ctx->pc = 0x220B88u;
label_220b88:
    // 0x220b88: 0x2610ffff
    ctx->pc = 0x220b88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_220b8c:
    // 0x220b8c: 0x6000010
    ctx->pc = 0x220B8Cu;
    {
        const bool branch_taken_0x220b8c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x220b8c) {
            ctx->pc = 0x220BD0u;
            goto label_220bd0;
        }
    }
    ctx->pc = 0x220B94u;
    // 0x220b94: 0x1213fffc
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 19));
        ctx->pc = 0x220B98u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220B88u;
            goto label_220b88;
        }
    }
    ctx->pc = 0x220B9Cu;
    // 0x220b9c: 0x24420014
    ctx->pc = 0x220b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x220ba0: 0x8cc3fe28
    ctx->pc = 0x220ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294966824)));
    // 0x220ba4: 0x431821
    ctx->pc = 0x220ba4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220ba8: 0x8c62011c
    ctx->pc = 0x220ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x220bac: 0x21080
    ctx->pc = 0x220bacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x220bb0: 0x621021
    ctx->pc = 0x220bb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220bb4: 0x8c42001c
    ctx->pc = 0x220bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x220bb8: 0x5622fff4
    ctx->pc = 0x220BB8u;
    {
        const bool branch_taken_0x220bb8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x220bb8) {
            ctx->pc = 0x220BBCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x220B8Cu;
            goto label_220b8c;
        }
    }
    ctx->pc = 0x220BC0u;
    // 0x220bc0: 0xc0b4a34
    ctx->pc = 0x220BC0u;
    SET_GPR_U32(ctx, 31, 0x220BC8u);
    ctx->pc = 0x220BC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26312));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BC8u; }
    }
    if (ctx->pc != 0x220BC8u) { return; }
    ctx->pc = 0x220BC8u;
    // 0x220bc8: 0x6010008
    ctx->pc = 0x220BC8u;
    {
        const bool branch_taken_0x220bc8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x220BCCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x220bc8) {
            ctx->pc = 0x220BECu;
            goto label_220bec;
        }
    }
    ctx->pc = 0x220BD0u;
label_220bd0:
    // 0x220bd0: 0xc0886e2
    ctx->pc = 0x220BD0u;
    SET_GPR_U32(ctx, 31, 0x220BD8u);
    ctx->pc = 0x220BD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioClearTracks_0x221b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BD8u; }
    }
    if (ctx->pc != 0x220BD8u) { return; }
    ctx->pc = 0x220BD8u;
    // 0x220bd8: 0xc088eae
    ctx->pc = 0x220BD8u;
    SET_GPR_U32(ctx, 31, 0x220BE0u);
    ctx->pc = 0x220BDCu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x223AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_remove_bank_0x223ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BE0u; }
    }
    if (ctx->pc != 0x220BE0u) { return; }
    ctx->pc = 0x220BE0u;
    // 0x220be0: 0xa6400028
    ctx->pc = 0x220be0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x220be4: 0xa640002a
    ctx->pc = 0x220be4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 0));
label_220be8:
    // 0x220be8: 0x3c030032
    ctx->pc = 0x220be8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_220bec:
    // 0x220bec: 0x24020124
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
    // 0x220bf0: 0x2621018
    ctx->pc = 0x220bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220bf4: 0x24420014
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x220bf8: 0x8c63fe28
    ctx->pc = 0x220bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x220bfc: 0x431821
    ctx->pc = 0x220bfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220c00: 0x2402ffff
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220c04: 0xac62011c
    ctx->pc = 0x220c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 2));
    // 0x220c08: 0xac620120
    ctx->pc = 0x220c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 2));
label_220c0c:
    // 0x220c0c: 0xdfbf0040
    ctx->pc = 0x220c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_220c10:
    // 0x220c10: 0xdfb30030
    ctx->pc = 0x220c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220c14: 0xdfb20020
    ctx->pc = 0x220c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220c18: 0xdfb10010
    ctx->pc = 0x220c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220c1c: 0xdfb00000
    ctx->pc = 0x220c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c20: 0x3e00008
    ctx->pc = 0x220C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220B88u: goto label_220b88;
            case 0x220B8Cu: goto label_220b8c;
            case 0x220BD0u: goto label_220bd0;
            case 0x220BE8u: goto label_220be8;
            case 0x220BECu: goto label_220bec;
            case 0x220C0Cu: goto label_220c0c;
            case 0x220C10u: goto label_220c10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220C28u;
}
