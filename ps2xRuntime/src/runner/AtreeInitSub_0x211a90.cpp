#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeInitSub
// Address: 0x211a90 - 0x211da4
void AtreeInitSub_0x211a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211a90u;

    // 0x211a90: 0x27bdff30
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x211a94: 0xffbf00c0
    ctx->pc = 0x211a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x211a98: 0xffbe00b0
    ctx->pc = 0x211a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x211a9c: 0xffb700a0
    ctx->pc = 0x211a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x211aa0: 0xffb60090
    ctx->pc = 0x211aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x211aa4: 0xffb50080
    ctx->pc = 0x211aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x211aa8: 0xffb40070
    ctx->pc = 0x211aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x211aac: 0xffb30060
    ctx->pc = 0x211aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x211ab0: 0xffb20050
    ctx->pc = 0x211ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x211ab4: 0xffb10040
    ctx->pc = 0x211ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x211ab8: 0xffb00030
    ctx->pc = 0x211ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x211abc: 0x80902d
    ctx->pc = 0x211abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ac0: 0xafa50010
    ctx->pc = 0x211ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x211ac4: 0xafa60014
    ctx->pc = 0x211ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x211ac8: 0xafa70018
    ctx->pc = 0x211ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x211acc: 0x100802d
    ctx->pc = 0x211accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ad0: 0x2402ffff
    ctx->pc = 0x211ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211ad4: 0xafa2001c
    ctx->pc = 0x211ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x211ad8: 0xb82d
    ctx->pc = 0x211ad8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211adc: 0x8e420010
    ctx->pc = 0x211adcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x211ae0: 0x28420201
    ctx->pc = 0x211ae0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 513));
    // 0x211ae4: 0x1440000a
    ctx->pc = 0x211AE4u;
    {
        const bool branch_taken_0x211ae4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211AE8u;
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
        if (branch_taken_0x211ae4) {
            ctx->pc = 0x211B10u;
            goto label_211b10;
        }
    }
    ctx->pc = 0x211AECu;
    // 0x211aec: 0x3c020037
    ctx->pc = 0x211aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x211af0: 0x3c0300ff
    ctx->pc = 0x211af0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x211af4: 0x3463ff00
    ctx->pc = 0x211af4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x211af8: 0xac438008
    ctx->pc = 0x211af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x211afc: 0x3c04003a
    ctx->pc = 0x211afcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211b00: 0x24845940
    ctx->pc = 0x211b00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22848));
    // 0x211b04: 0x3c050080
    ctx->pc = 0x211b04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211b08: 0xc0b49a6
    ctx->pc = 0x211B08u;
    SET_GPR_U32(ctx, 31, 0x211B10u);
    ctx->pc = 0x211B0Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B10u; }
    }
    if (ctx->pc != 0x211B10u) { return; }
    ctx->pc = 0x211B10u;
label_211b10:
    // 0x211b10: 0x8fa30010
    ctx->pc = 0x211b10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211b14: 0x24760004
    ctx->pc = 0x211b14u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 3), 4));
    // 0x211b18: 0x8e420004
    ctx->pc = 0x211b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x211b1c: 0xaec20004
    ctx->pc = 0x211b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x211b20: 0x8e420008
    ctx->pc = 0x211b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x211b24: 0xaec20008
    ctx->pc = 0x211b24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x211b28: 0x8e420000
    ctx->pc = 0x211b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x211b2c: 0xac620004
    ctx->pc = 0x211b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x211b30: 0x96420014
    ctx->pc = 0x211b30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x211b34: 0xa6c2000c
    ctx->pc = 0x211b34u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x211b38: 0x2c0202d
    ctx->pc = 0x211b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b3c: 0xc0841e2
    ctx->pc = 0x211B3Cu;
    SET_GPR_U32(ctx, 31, 0x211B44u);
    ctx->pc = 0x211B40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210788u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAnimInfo_0x210788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B44u; }
    }
    if (ctx->pc != 0x211B44u) { return; }
    ctx->pc = 0x211B44u;
    // 0x211b44: 0xc0845fc
    ctx->pc = 0x211B44u;
    SET_GPR_U32(ctx, 31, 0x211B4Cu);
    ctx->pc = 0x211B48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x2117F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeCreateNodes_0x2117f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B4Cu; }
    }
    if (ctx->pc != 0x211B4Cu) { return; }
    ctx->pc = 0x211B4Cu;
    // 0x211b4c: 0x40a82d
    ctx->pc = 0x211b4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b50: 0x56a0000d
    ctx->pc = 0x211B50u;
    {
        const bool branch_taken_0x211b50 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x211b50) {
            ctx->pc = 0x211B54u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->pc = 0x211B88u;
            goto label_211b88;
        }
    }
    ctx->pc = 0x211B58u;
    // 0x211b58: 0x12000086
    ctx->pc = 0x211B58u;
    {
        const bool branch_taken_0x211b58 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x211B5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211b58) {
            ctx->pc = 0x211D74u;
            goto label_211d74;
        }
    }
    ctx->pc = 0x211B60u;
    // 0x211b60: 0x3c020037
    ctx->pc = 0x211b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x211b64: 0x3c0300ff
    ctx->pc = 0x211b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x211b68: 0x3463ff00
    ctx->pc = 0x211b68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x211b6c: 0xac438008
    ctx->pc = 0x211b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x211b70: 0x3c04003a
    ctx->pc = 0x211b70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211b74: 0x24845958
    ctx->pc = 0x211b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22872));
    // 0x211b78: 0x3c050080
    ctx->pc = 0x211b78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211b7c: 0xc0b49a6
    ctx->pc = 0x211B7Cu;
    SET_GPR_U32(ctx, 31, 0x211B84u);
    ctx->pc = 0x211B80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B84u; }
    }
    if (ctx->pc != 0x211B84u) { return; }
    ctx->pc = 0x211B84u;
    // 0x211b84: 0x8e420010
    ctx->pc = 0x211b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_211b88:
    // 0x211b88: 0x1840006d
    ctx->pc = 0x211B88u;
    {
        const bool branch_taken_0x211b88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x211B8Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211b88) {
            ctx->pc = 0x211D40u;
            goto label_211d40;
        }
    }
    ctx->pc = 0x211B90u;
    // 0x211b90: 0x26420018
    ctx->pc = 0x211b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 24));
    // 0x211b94: 0xafa20020
    ctx->pc = 0x211b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x211b98: 0x24020028
    ctx->pc = 0x211b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211b9c: 0x0
    ctx->pc = 0x211b9cu;
    // NOP
label_211ba0:
    // 0x211ba0: 0x2221018
    ctx->pc = 0x211ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211ba4: 0x55a021
    ctx->pc = 0x211ba4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x211ba8: 0x2402003c
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x211bac: 0x2221018
    ctx->pc = 0x211bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211bb0: 0x8e43000c
    ctx->pc = 0x211bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x211bb4: 0x438021
    ctx->pc = 0x211bb4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211bb8: 0x8e020038
    ctx->pc = 0x211bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x211bbc: 0x51102a
    ctx->pc = 0x211bbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x211bc0: 0x54400007
    ctx->pc = 0x211BC0u;
    {
        const bool branch_taken_0x211bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211bc0) {
            ctx->pc = 0x211BC4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x211BC8u;
    // 0x211bc8: 0x3c04003a
    ctx->pc = 0x211bc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211bcc: 0x24845970
    ctx->pc = 0x211bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22896));
    // 0x211bd0: 0x3c050080
    ctx->pc = 0x211bd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211bd4: 0xc0b49a6
    ctx->pc = 0x211BD4u;
    SET_GPR_U32(ctx, 31, 0x211BDCu);
    ctx->pc = 0x211BD8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BDCu; }
    }
    if (ctx->pc != 0x211BDCu) { return; }
    ctx->pc = 0x211BDCu;
    // 0x211bdc: 0x8e020038
    ctx->pc = 0x211bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_211be0:
    // 0x211be0: 0x440000c
    ctx->pc = 0x211BE0u;
    {
        const bool branch_taken_0x211be0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x211BE4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211be0) {
            ctx->pc = 0x211C14u;
            goto label_211c14;
        }
    }
    ctx->pc = 0x211BE8u;
    // 0x211be8: 0x56e00007
    ctx->pc = 0x211BE8u;
    {
        const bool branch_taken_0x211be8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x211be8) {
            ctx->pc = 0x211BECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x211C08u;
            goto label_211c08;
        }
    }
    ctx->pc = 0x211BF0u;
    // 0x211bf0: 0x3c04003a
    ctx->pc = 0x211bf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211bf4: 0x24845988
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22920));
    // 0x211bf8: 0x3c050080
    ctx->pc = 0x211bf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211bfc: 0xc0b49a6
    ctx->pc = 0x211BFCu;
    SET_GPR_U32(ctx, 31, 0x211C04u);
    ctx->pc = 0x211C00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C04u; }
    }
    if (ctx->pc != 0x211C04u) { return; }
    ctx->pc = 0x211C04u;
    // 0x211c04: 0x8e020038
    ctx->pc = 0x211c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_211c08:
    // 0x211c08: 0x24030028
    ctx->pc = 0x211c08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211c0c: 0x431818
    ctx->pc = 0x211c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211c10: 0x759821
    ctx->pc = 0x211c10u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_211c14:
    // 0x211c14: 0x82020000
    ctx->pc = 0x211c14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211c18: 0x10400022
    ctx->pc = 0x211C18u;
    {
        const bool branch_taken_0x211c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x211C1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x211c18) {
            ctx->pc = 0x211CA4u;
            goto label_211ca4;
        }
    }
    ctx->pc = 0x211C20u;
    // 0x211c20: 0x10600011
    ctx->pc = 0x211C20u;
    {
        const bool branch_taken_0x211c20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x211C24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x211c20) {
            ctx->pc = 0x211C68u;
            goto label_211c68;
        }
    }
    ctx->pc = 0x211C28u;
    // 0x211c28: 0x3a0202d
    ctx->pc = 0x211c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c2c: 0x60282d
    ctx->pc = 0x211c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c30: 0xc0bf42e
    ctx->pc = 0x211C30u;
    SET_GPR_U32(ctx, 31, 0x211C38u);
    ctx->pc = 0x211C34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C38u; }
    }
    if (ctx->pc != 0x211C38u) { return; }
    ctx->pc = 0x211C38u;
    // 0x211c38: 0xc0bf306
    ctx->pc = 0x211C38u;
    SET_GPR_U32(ctx, 31, 0x211C40u);
    ctx->pc = 0x211C3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C40u; }
    }
    if (ctx->pc != 0x211C40u) { return; }
    ctx->pc = 0x211C40u;
    // 0x211c40: 0x3a0202d
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c44: 0x200282d
    ctx->pc = 0x211c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c48: 0x2403000f
    ctx->pc = 0x211c48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x211c4c: 0xc0bf354
    ctx->pc = 0x211C4Cu;
    SET_GPR_U32(ctx, 31, 0x211C54u);
    ctx->pc = 0x211C50u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x2FCD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x2fcd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C54u; }
    }
    if (ctx->pc != 0x211C54u) { return; }
    ctx->pc = 0x211C54u;
    // 0x211c54: 0x3a0202d
    ctx->pc = 0x211c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c58: 0x3c0282d
    ctx->pc = 0x211c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c5c: 0x3c0302d
    ctx->pc = 0x211c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c60: 0xc0b19fe
    ctx->pc = 0x211C60u;
    SET_GPR_U32(ctx, 31, 0x211C68u);
    ctx->pc = 0x211C64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C68u; }
    }
    if (ctx->pc != 0x211C68u) { return; }
    ctx->pc = 0x211C68u;
label_211c68:
    // 0x211c68: 0x443000f
    ctx->pc = 0x211C68u;
    {
        const bool branch_taken_0x211c68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x211c68) {
            ctx->pc = 0x211C6Cu;
            WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x211CA8u;
            goto label_211ca8;
        }
    }
    ctx->pc = 0x211C70u;
    // 0x211c70: 0x3a0202d
    ctx->pc = 0x211c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c74: 0x8fa50020
    ctx->pc = 0x211c74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211c78: 0xc0bf42e
    ctx->pc = 0x211C78u;
    SET_GPR_U32(ctx, 31, 0x211C80u);
    ctx->pc = 0x211C7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C80u; }
    }
    if (ctx->pc != 0x211C80u) { return; }
    ctx->pc = 0x211C80u;
    // 0x211c80: 0xc0bf306
    ctx->pc = 0x211C80u;
    SET_GPR_U32(ctx, 31, 0x211C88u);
    ctx->pc = 0x211C84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C88u; }
    }
    if (ctx->pc != 0x211C88u) { return; }
    ctx->pc = 0x211C88u;
    // 0x211c88: 0x3a0202d
    ctx->pc = 0x211c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c8c: 0x200282d
    ctx->pc = 0x211c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c90: 0x2403000f
    ctx->pc = 0x211c90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x211c94: 0xc0bf354
    ctx->pc = 0x211C94u;
    SET_GPR_U32(ctx, 31, 0x211C9Cu);
    ctx->pc = 0x211C98u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x2FCD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x2fcd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C9Cu; }
    }
    if (ctx->pc != 0x211C9Cu) { return; }
    ctx->pc = 0x211C9Cu;
    // 0x211c9c: 0x10000002
    ctx->pc = 0x211C9Cu;
    {
        const bool branch_taken_0x211c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211CA0u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x211c9c) {
            ctx->pc = 0x211CA8u;
            goto label_211ca8;
        }
    }
    ctx->pc = 0x211CA4u;
label_211ca4:
    // 0x211ca4: 0xa3a00000
    ctx->pc = 0x211ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_211ca8:
    // 0x211ca8: 0x280202d
    ctx->pc = 0x211ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cac: 0x260282d
    ctx->pc = 0x211cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb0: 0x2e0302d
    ctx->pc = 0x211cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb4: 0x3a0382d
    ctx->pc = 0x211cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb8: 0x2c0402d
    ctx->pc = 0x211cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cbc: 0x200482d
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cc0: 0xc084686
    ctx->pc = 0x211CC0u;
    SET_GPR_U32(ctx, 31, 0x211CC8u);
    ctx->pc = 0x211CC4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNewNode_0x211a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CC8u; }
    }
    if (ctx->pc != 0x211CC8u) { return; }
    ctx->pc = 0x211CC8u;
    // 0x211cc8: 0x200202d
    ctx->pc = 0x211cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ccc: 0x3c05003a
    ctx->pc = 0x211cccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x211cd0: 0xc0bf270
    ctx->pc = 0x211CD0u;
    SET_GPR_U32(ctx, 31, 0x211CD8u);
    ctx->pc = 0x211CD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22952));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CD8u; }
    }
    if (ctx->pc != 0x211CD8u) { return; }
    ctx->pc = 0x211CD8u;
    // 0x211cd8: 0x14400005
    ctx->pc = 0x211CD8u;
    {
        const bool branch_taken_0x211cd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211CDCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x211cd8) {
            ctx->pc = 0x211CF0u;
            goto label_211cf0;
        }
    }
    ctx->pc = 0x211CE0u;
    // 0x211ce0: 0x24050001
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ce4: 0xc0b41b8
    ctx->pc = 0x211CE4u;
    SET_GPR_U32(ctx, 31, 0x211CECu);
    ctx->pc = 0x211CE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CECu; }
    }
    if (ctx->pc != 0x211CECu) { return; }
    ctx->pc = 0x211CECu;
    // 0x211cec: 0x8e840000
    ctx->pc = 0x211cecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_211cf0:
    // 0x211cf0: 0x8fa50018
    ctx->pc = 0x211cf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211cf4: 0xc0b41b8
    ctx->pc = 0x211CF4u;
    SET_GPR_U32(ctx, 31, 0x211CFCu);
    ctx->pc = 0x211CF8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CFCu; }
    }
    if (ctx->pc != 0x211CFCu) { return; }
    ctx->pc = 0x211CFCu;
    // 0x211cfc: 0x5660000c
    ctx->pc = 0x211CFCu;
    {
        const bool branch_taken_0x211cfc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x211cfc) {
            ctx->pc = 0x211D00u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x211D30u;
            goto label_211d30;
        }
    }
    ctx->pc = 0x211D04u;
    // 0x211d04: 0x16e00004
    ctx->pc = 0x211D04u;
    {
        const bool branch_taken_0x211d04 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x211D08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x211d04) {
            ctx->pc = 0x211D18u;
            goto label_211d18;
        }
    }
    ctx->pc = 0x211D0Cu;
    // 0x211d0c: 0xafb1001c
    ctx->pc = 0x211d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
    // 0x211d10: 0x10000006
    ctx->pc = 0x211D10u;
    {
        const bool branch_taken_0x211d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211D14u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211d10) {
            ctx->pc = 0x211D2Cu;
            goto label_211d2c;
        }
    }
    ctx->pc = 0x211D18u;
label_211d18:
    // 0x211d18: 0x248459b0
    ctx->pc = 0x211d18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22960));
    // 0x211d1c: 0x3a0282d
    ctx->pc = 0x211d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d20: 0x220302d
    ctx->pc = 0x211d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d24: 0xc0b492e
    ctx->pc = 0x211D24u;
    SET_GPR_U32(ctx, 31, 0x211D2Cu);
    ctx->pc = 0x211D28u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D2Cu; }
    }
    if (ctx->pc != 0x211D2Cu) { return; }
    ctx->pc = 0x211D2Cu;
label_211d2c:
    // 0x211d2c: 0x26310001
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_211d30:
    // 0x211d30: 0x8e420010
    ctx->pc = 0x211d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x211d34: 0x222102a
    ctx->pc = 0x211d34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x211d38: 0x1440ff99
    ctx->pc = 0x211D38u;
    {
        const bool branch_taken_0x211d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211D3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x211d38) {
            ctx->pc = 0x211BA0u;
            goto label_211ba0;
        }
    }
    ctx->pc = 0x211D40u;
label_211d40:
    // 0x211d40: 0x8e420010
    ctx->pc = 0x211d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x211d44: 0x8fa30010
    ctx->pc = 0x211d44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d48: 0xac62003c
    ctx->pc = 0x211d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x211d4c: 0x8e42000c
    ctx->pc = 0x211d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x211d50: 0xac620044
    ctx->pc = 0x211d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x211d54: 0x16e00006
    ctx->pc = 0x211D54u;
    {
        const bool branch_taken_0x211d54 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x211D58u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 21));
        if (branch_taken_0x211d54) {
            ctx->pc = 0x211D70u;
            goto label_211d70;
        }
    }
    ctx->pc = 0x211D5Cu;
    // 0x211d5c: 0x3c04003a
    ctx->pc = 0x211d5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211d60: 0x248459d8
    ctx->pc = 0x211d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23000));
    // 0x211d64: 0x3c050080
    ctx->pc = 0x211d64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211d68: 0xc0b49a6
    ctx->pc = 0x211D68u;
    SET_GPR_U32(ctx, 31, 0x211D70u);
    ctx->pc = 0x211D6Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D70u; }
    }
    if (ctx->pc != 0x211D70u) { return; }
    ctx->pc = 0x211D70u;
label_211d70:
    // 0x211d70: 0x2e0102d
    ctx->pc = 0x211d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_211d74:
    // 0x211d74: 0xdfbf00c0
    ctx->pc = 0x211d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211d78: 0xdfbe00b0
    ctx->pc = 0x211d78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x211d7c: 0xdfb700a0
    ctx->pc = 0x211d7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x211d80: 0xdfb60090
    ctx->pc = 0x211d80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211d84: 0xdfb50080
    ctx->pc = 0x211d84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211d88: 0xdfb40070
    ctx->pc = 0x211d88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211d8c: 0xdfb30060
    ctx->pc = 0x211d8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211d90: 0xdfb20050
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211d94: 0xdfb10040
    ctx->pc = 0x211d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211d98: 0xdfb00030
    ctx->pc = 0x211d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211d9c: 0x3e00008
    ctx->pc = 0x211D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211B10u: goto label_211b10;
            case 0x211B88u: goto label_211b88;
            case 0x211BA0u: goto label_211ba0;
            case 0x211BE0u: goto label_211be0;
            case 0x211C08u: goto label_211c08;
            case 0x211C14u: goto label_211c14;
            case 0x211C68u: goto label_211c68;
            case 0x211CA4u: goto label_211ca4;
            case 0x211CA8u: goto label_211ca8;
            case 0x211CF0u: goto label_211cf0;
            case 0x211D18u: goto label_211d18;
            case 0x211D2Cu: goto label_211d2c;
            case 0x211D30u: goto label_211d30;
            case 0x211D40u: goto label_211d40;
            case 0x211D70u: goto label_211d70;
            case 0x211D74u: goto label_211d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211DA4u;
}
