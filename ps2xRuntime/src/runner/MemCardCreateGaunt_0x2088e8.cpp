#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MemCardCreateGaunt
// Address: 0x2088e8 - 0x208b9c
void MemCardCreateGaunt_0x2088e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2088e8u;

label_2088e8:
    // 0x2088e8: 0x27bdff30
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_2088ec:
    // 0x2088ec: 0xffbf00c0
    ctx->pc = 0x2088ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2088f0:
    // 0x2088f0: 0xffbe00b0
    ctx->pc = 0x2088f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2088f4:
    // 0x2088f4: 0xffb000a0
    ctx->pc = 0x2088f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_2088f8:
    // 0x2088f8: 0x3a0f02d
    ctx->pc = 0x2088f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2088fc:
    // 0x2088fc: 0xafc40000
    ctx->pc = 0x2088fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_208900:
    // 0x208900: 0xafc50004
    ctx->pc = 0x208900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_208904:
    // 0x208904: 0x8fc20000
    ctx->pc = 0x208904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208908:
    // 0x208908: 0x24030210
    ctx->pc = 0x208908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
label_20890c:
    // 0x20890c: 0x431018
    ctx->pc = 0x20890cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_208910:
    // 0x208910: 0x8fc30004
    ctx->pc = 0x208910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208914:
    // 0x208914: 0x24040084
    ctx->pc = 0x208914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
label_208918:
    // 0x208918: 0x641818
    ctx->pc = 0x208918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20891c:
    // 0x20891c: 0x3c040031
    ctx->pc = 0x20891cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_208920:
    // 0x208920: 0x24841e60
    ctx->pc = 0x208920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
label_208924:
    // 0x208924: 0x641821
    ctx->pc = 0x208924u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208928:
    // 0x208928: 0x431021
    ctx->pc = 0x208928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20892c:
    // 0x20892c: 0x40202d
    ctx->pc = 0x20892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208930:
    // 0x208930: 0xc082076
label_208934:
    if (ctx->pc == 0x208934u) {
        ctx->pc = 0x208938u;
        goto label_208938;
    }
    ctx->pc = 0x208930u;
    SET_GPR_U32(ctx, 31, 0x208938u);
    ctx->pc = 0x2081D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_files_0x2081d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208938u; }
    }
    if (ctx->pc != 0x208938u) { return; }
    ctx->pc = 0x208938u;
label_208938:
    // 0x208938: 0x8fc40000
    ctx->pc = 0x208938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20893c:
    // 0x20893c: 0x8fc50004
    ctx->pc = 0x20893cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208940:
    // 0x208940: 0x24060001
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_208944:
    // 0x208944: 0xc0820e2
label_208948:
    if (ctx->pc == 0x208948u) {
        ctx->pc = 0x20894Cu;
        goto label_20894c;
    }
    ctx->pc = 0x208944u;
    SET_GPR_U32(ctx, 31, 0x20894Cu);
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20894Cu; }
    }
    if (ctx->pc != 0x20894Cu) { return; }
    ctx->pc = 0x20894Cu;
label_20894c:
    // 0x20894c: 0xafc2000c
    ctx->pc = 0x20894cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_208950:
    // 0x208950: 0x8fc2000c
    ctx->pc = 0x208950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208954:
    // 0x208954: 0x1c400004
label_208958:
    if (ctx->pc == 0x208958u) {
        ctx->pc = 0x20895Cu;
        goto label_20895c;
    }
    ctx->pc = 0x208954u;
    {
        const bool branch_taken_0x208954 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x208954) {
            ctx->pc = 0x208968u;
            goto label_208968;
        }
    }
    ctx->pc = 0x20895Cu;
label_20895c:
    // 0x20895c: 0x102d
    ctx->pc = 0x20895cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208960:
    // 0x208960: 0x10000087
label_208964:
    if (ctx->pc == 0x208964u) {
        ctx->pc = 0x208968u;
        goto label_208968;
    }
    ctx->pc = 0x208960u;
    {
        const bool branch_taken_0x208960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208960) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208968u;
label_208968:
    // 0x208968: 0x8fc40000
    ctx->pc = 0x208968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20896c:
    // 0x20896c: 0x8fc50004
    ctx->pc = 0x20896cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208970:
    // 0x208970: 0x3c06003a
    ctx->pc = 0x208970u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_208974:
    // 0x208974: 0x24c64cb0
    ctx->pc = 0x208974u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19632));
label_208978:
    // 0x208978: 0xc0b9914
label_20897c:
    if (ctx->pc == 0x20897Cu) {
        ctx->pc = 0x208980u;
        goto label_208980;
    }
    ctx->pc = 0x208978u;
    SET_GPR_U32(ctx, 31, 0x208980u);
    ctx->pc = 0x2E6450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcMkdir_0x2e6450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208980u; }
    }
    if (ctx->pc != 0x208980u) { return; }
    ctx->pc = 0x208980u;
label_208980:
    // 0x208980: 0x10400005
label_208984:
    if (ctx->pc == 0x208984u) {
        ctx->pc = 0x208988u;
        goto label_208988;
    }
    ctx->pc = 0x208980u;
    {
        const bool branch_taken_0x208980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208980) {
            ctx->pc = 0x208998u;
            goto label_208998;
        }
    }
    ctx->pc = 0x208988u;
label_208988:
    // 0x208988: 0x3c04003a
    ctx->pc = 0x208988u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_20898c:
    // 0x20898c: 0x24844e20
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20000));
label_208990:
    // 0x208990: 0xc0b4a34
label_208994:
    if (ctx->pc == 0x208994u) {
        ctx->pc = 0x208998u;
        goto label_208998;
    }
    ctx->pc = 0x208990u;
    SET_GPR_U32(ctx, 31, 0x208998u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208998u; }
    }
    if (ctx->pc != 0x208998u) { return; }
    ctx->pc = 0x208998u;
label_208998:
    // 0x208998: 0x0
    ctx->pc = 0x208998u;
    // NOP
label_20899c:
    // 0x20899c: 0x0
    ctx->pc = 0x20899cu;
    // NOP
label_2089a0:
    // 0x2089a0: 0x27c20008
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
label_2089a4:
    // 0x2089a4: 0x27c3000c
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 12));
label_2089a8:
    // 0x2089a8: 0x24040001
    ctx->pc = 0x2089a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2089ac:
    // 0x2089ac: 0x40282d
    ctx->pc = 0x2089acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2089b0:
    // 0x2089b0: 0x60302d
    ctx->pc = 0x2089b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2089b4:
    // 0x2089b4: 0xc0b9a14
label_2089b8:
    if (ctx->pc == 0x2089B8u) {
        ctx->pc = 0x2089BCu;
        goto label_2089bc;
    }
    ctx->pc = 0x2089B4u;
    SET_GPR_U32(ctx, 31, 0x2089BCu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2089BCu; }
    }
    if (ctx->pc != 0x2089BCu) { return; }
    ctx->pc = 0x2089BCu;
label_2089bc:
    // 0x2089bc: 0x10400003
label_2089c0:
    if (ctx->pc == 0x2089C0u) {
        ctx->pc = 0x2089C4u;
        goto label_2089c4;
    }
    ctx->pc = 0x2089BCu;
    {
        const bool branch_taken_0x2089bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2089bc) {
            ctx->pc = 0x2089CCu;
            goto label_2089cc;
        }
    }
    ctx->pc = 0x2089C4u;
label_2089c4:
    // 0x2089c4: 0x1000000b
label_2089c8:
    if (ctx->pc == 0x2089C8u) {
        ctx->pc = 0x2089CCu;
        goto label_2089cc;
    }
    ctx->pc = 0x2089C4u;
    {
        const bool branch_taken_0x2089c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2089c4) {
            ctx->pc = 0x2089F4u;
            goto label_2089f4;
        }
    }
    ctx->pc = 0x2089CCu;
label_2089cc:
    // 0x2089cc: 0x3c02003c
    ctx->pc = 0x2089ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2089d0:
    // 0x2089d0: 0x8c42c4e4
    ctx->pc = 0x2089d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_2089d4:
    // 0x2089d4: 0x10400005
label_2089d8:
    if (ctx->pc == 0x2089D8u) {
        ctx->pc = 0x2089DCu;
        goto label_2089dc;
    }
    ctx->pc = 0x2089D4u;
    {
        const bool branch_taken_0x2089d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2089d4) {
            ctx->pc = 0x2089ECu;
            goto label_2089ec;
        }
    }
    ctx->pc = 0x2089DCu;
label_2089dc:
    // 0x2089dc: 0x3c10003c
    ctx->pc = 0x2089dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2089e0:
    // 0x2089e0: 0x8e10c4e4
    ctx->pc = 0x2089e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_2089e4:
    // 0x2089e4: 0x200f809
label_2089e8:
    if (ctx->pc == 0x2089E8u) {
        ctx->pc = 0x2089ECu;
        goto label_2089ec;
    }
    ctx->pc = 0x2089E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2089ECu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2088E8u: goto label_2088e8;
            case 0x2088ECu: goto label_2088ec;
            case 0x2088F0u: goto label_2088f0;
            case 0x2088F4u: goto label_2088f4;
            case 0x2088F8u: goto label_2088f8;
            case 0x2088FCu: goto label_2088fc;
            case 0x208900u: goto label_208900;
            case 0x208904u: goto label_208904;
            case 0x208908u: goto label_208908;
            case 0x20890Cu: goto label_20890c;
            case 0x208910u: goto label_208910;
            case 0x208914u: goto label_208914;
            case 0x208918u: goto label_208918;
            case 0x20891Cu: goto label_20891c;
            case 0x208920u: goto label_208920;
            case 0x208924u: goto label_208924;
            case 0x208928u: goto label_208928;
            case 0x20892Cu: goto label_20892c;
            case 0x208930u: goto label_208930;
            case 0x208934u: goto label_208934;
            case 0x208938u: goto label_208938;
            case 0x20893Cu: goto label_20893c;
            case 0x208940u: goto label_208940;
            case 0x208944u: goto label_208944;
            case 0x208948u: goto label_208948;
            case 0x20894Cu: goto label_20894c;
            case 0x208950u: goto label_208950;
            case 0x208954u: goto label_208954;
            case 0x208958u: goto label_208958;
            case 0x20895Cu: goto label_20895c;
            case 0x208960u: goto label_208960;
            case 0x208964u: goto label_208964;
            case 0x208968u: goto label_208968;
            case 0x20896Cu: goto label_20896c;
            case 0x208970u: goto label_208970;
            case 0x208974u: goto label_208974;
            case 0x208978u: goto label_208978;
            case 0x20897Cu: goto label_20897c;
            case 0x208980u: goto label_208980;
            case 0x208984u: goto label_208984;
            case 0x208988u: goto label_208988;
            case 0x20898Cu: goto label_20898c;
            case 0x208990u: goto label_208990;
            case 0x208994u: goto label_208994;
            case 0x208998u: goto label_208998;
            case 0x20899Cu: goto label_20899c;
            case 0x2089A0u: goto label_2089a0;
            case 0x2089A4u: goto label_2089a4;
            case 0x2089A8u: goto label_2089a8;
            case 0x2089ACu: goto label_2089ac;
            case 0x2089B0u: goto label_2089b0;
            case 0x2089B4u: goto label_2089b4;
            case 0x2089B8u: goto label_2089b8;
            case 0x2089BCu: goto label_2089bc;
            case 0x2089C0u: goto label_2089c0;
            case 0x2089C4u: goto label_2089c4;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089D0u: goto label_2089d0;
            case 0x2089D4u: goto label_2089d4;
            case 0x2089D8u: goto label_2089d8;
            case 0x2089DCu: goto label_2089dc;
            case 0x2089E0u: goto label_2089e0;
            case 0x2089E4u: goto label_2089e4;
            case 0x2089E8u: goto label_2089e8;
            case 0x2089ECu: goto label_2089ec;
            case 0x2089F0u: goto label_2089f0;
            case 0x2089F4u: goto label_2089f4;
            case 0x2089F8u: goto label_2089f8;
            case 0x2089FCu: goto label_2089fc;
            case 0x208A00u: goto label_208a00;
            case 0x208A04u: goto label_208a04;
            case 0x208A08u: goto label_208a08;
            case 0x208A0Cu: goto label_208a0c;
            case 0x208A10u: goto label_208a10;
            case 0x208A14u: goto label_208a14;
            case 0x208A18u: goto label_208a18;
            case 0x208A1Cu: goto label_208a1c;
            case 0x208A20u: goto label_208a20;
            case 0x208A24u: goto label_208a24;
            case 0x208A28u: goto label_208a28;
            case 0x208A2Cu: goto label_208a2c;
            case 0x208A30u: goto label_208a30;
            case 0x208A34u: goto label_208a34;
            case 0x208A38u: goto label_208a38;
            case 0x208A3Cu: goto label_208a3c;
            case 0x208A40u: goto label_208a40;
            case 0x208A44u: goto label_208a44;
            case 0x208A48u: goto label_208a48;
            case 0x208A4Cu: goto label_208a4c;
            case 0x208A50u: goto label_208a50;
            case 0x208A54u: goto label_208a54;
            case 0x208A58u: goto label_208a58;
            case 0x208A5Cu: goto label_208a5c;
            case 0x208A60u: goto label_208a60;
            case 0x208A64u: goto label_208a64;
            case 0x208A68u: goto label_208a68;
            case 0x208A6Cu: goto label_208a6c;
            case 0x208A70u: goto label_208a70;
            case 0x208A74u: goto label_208a74;
            case 0x208A78u: goto label_208a78;
            case 0x208A7Cu: goto label_208a7c;
            case 0x208A80u: goto label_208a80;
            case 0x208A84u: goto label_208a84;
            case 0x208A88u: goto label_208a88;
            case 0x208A8Cu: goto label_208a8c;
            case 0x208A90u: goto label_208a90;
            case 0x208A94u: goto label_208a94;
            case 0x208A98u: goto label_208a98;
            case 0x208A9Cu: goto label_208a9c;
            case 0x208AA0u: goto label_208aa0;
            case 0x208AA4u: goto label_208aa4;
            case 0x208AA8u: goto label_208aa8;
            case 0x208AACu: goto label_208aac;
            case 0x208AB0u: goto label_208ab0;
            case 0x208AB4u: goto label_208ab4;
            case 0x208AB8u: goto label_208ab8;
            case 0x208ABCu: goto label_208abc;
            case 0x208AC0u: goto label_208ac0;
            case 0x208AC4u: goto label_208ac4;
            case 0x208AC8u: goto label_208ac8;
            case 0x208ACCu: goto label_208acc;
            case 0x208AD0u: goto label_208ad0;
            case 0x208AD4u: goto label_208ad4;
            case 0x208AD8u: goto label_208ad8;
            case 0x208ADCu: goto label_208adc;
            case 0x208AE0u: goto label_208ae0;
            case 0x208AE4u: goto label_208ae4;
            case 0x208AE8u: goto label_208ae8;
            case 0x208AECu: goto label_208aec;
            case 0x208AF0u: goto label_208af0;
            case 0x208AF4u: goto label_208af4;
            case 0x208AF8u: goto label_208af8;
            case 0x208AFCu: goto label_208afc;
            case 0x208B00u: goto label_208b00;
            case 0x208B04u: goto label_208b04;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B10u: goto label_208b10;
            case 0x208B14u: goto label_208b14;
            case 0x208B18u: goto label_208b18;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B20u: goto label_208b20;
            case 0x208B24u: goto label_208b24;
            case 0x208B28u: goto label_208b28;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B34u: goto label_208b34;
            case 0x208B38u: goto label_208b38;
            case 0x208B3Cu: goto label_208b3c;
            case 0x208B40u: goto label_208b40;
            case 0x208B44u: goto label_208b44;
            case 0x208B48u: goto label_208b48;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208B50u: goto label_208b50;
            case 0x208B54u: goto label_208b54;
            case 0x208B58u: goto label_208b58;
            case 0x208B5Cu: goto label_208b5c;
            case 0x208B60u: goto label_208b60;
            case 0x208B64u: goto label_208b64;
            case 0x208B68u: goto label_208b68;
            case 0x208B6Cu: goto label_208b6c;
            case 0x208B70u: goto label_208b70;
            case 0x208B74u: goto label_208b74;
            case 0x208B78u: goto label_208b78;
            case 0x208B7Cu: goto label_208b7c;
            case 0x208B80u: goto label_208b80;
            case 0x208B84u: goto label_208b84;
            case 0x208B88u: goto label_208b88;
            case 0x208B8Cu: goto label_208b8c;
            case 0x208B90u: goto label_208b90;
            case 0x208B94u: goto label_208b94;
            case 0x208B98u: goto label_208b98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2089ECu; }
            if (ctx->pc != 0x2089ECu) { return; }
        }
    }
    ctx->pc = 0x2089ECu;
label_2089ec:
    // 0x2089ec: 0x1000ffec
label_2089f0:
    if (ctx->pc == 0x2089F0u) {
        ctx->pc = 0x2089F4u;
        goto label_2089f4;
    }
    ctx->pc = 0x2089ECu;
    {
        const bool branch_taken_0x2089ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2089ec) {
            ctx->pc = 0x2089A0u;
            goto label_2089a0;
        }
    }
    ctx->pc = 0x2089F4u;
label_2089f4:
    // 0x2089f4: 0x8fc40000
    ctx->pc = 0x2089f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2089f8:
    // 0x2089f8: 0x8fc50004
    ctx->pc = 0x2089f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2089fc:
    // 0x2089fc: 0x3c06003a
    ctx->pc = 0x2089fcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_208a00:
    // 0x208a00: 0x24c64cb0
    ctx->pc = 0x208a00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19632));
label_208a04:
    // 0x208a04: 0x382d
    ctx->pc = 0x208a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a08:
    // 0x208a08: 0xc0b9b0e
label_208a0c:
    if (ctx->pc == 0x208A0Cu) {
        ctx->pc = 0x208A10u;
        goto label_208a10;
    }
    ctx->pc = 0x208A08u;
    SET_GPR_U32(ctx, 31, 0x208A10u);
    ctx->pc = 0x2E6C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x2e6c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A10u; }
    }
    if (ctx->pc != 0x208A10u) { return; }
    ctx->pc = 0x208A10u;
label_208a10:
    // 0x208a10: 0x10400005
label_208a14:
    if (ctx->pc == 0x208A14u) {
        ctx->pc = 0x208A18u;
        goto label_208a18;
    }
    ctx->pc = 0x208A10u;
    {
        const bool branch_taken_0x208a10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a10) {
            ctx->pc = 0x208A28u;
            goto label_208a28;
        }
    }
    ctx->pc = 0x208A18u;
label_208a18:
    // 0x208a18: 0x3c04003a
    ctx->pc = 0x208a18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_208a1c:
    // 0x208a1c: 0x24844e48
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20040));
label_208a20:
    // 0x208a20: 0xc0b4a34
label_208a24:
    if (ctx->pc == 0x208A24u) {
        ctx->pc = 0x208A28u;
        goto label_208a28;
    }
    ctx->pc = 0x208A20u;
    SET_GPR_U32(ctx, 31, 0x208A28u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A28u; }
    }
    if (ctx->pc != 0x208A28u) { return; }
    ctx->pc = 0x208A28u;
label_208a28:
    // 0x208a28: 0x0
    ctx->pc = 0x208a28u;
    // NOP
label_208a2c:
    // 0x208a2c: 0x0
    ctx->pc = 0x208a2cu;
    // NOP
label_208a30:
    // 0x208a30: 0x27c20008
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
label_208a34:
    // 0x208a34: 0x27c3000c
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 12));
label_208a38:
    // 0x208a38: 0x24040001
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_208a3c:
    // 0x208a3c: 0x40282d
    ctx->pc = 0x208a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208a40:
    // 0x208a40: 0x60302d
    ctx->pc = 0x208a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208a44:
    // 0x208a44: 0xc0b9a14
label_208a48:
    if (ctx->pc == 0x208A48u) {
        ctx->pc = 0x208A4Cu;
        goto label_208a4c;
    }
    ctx->pc = 0x208A44u;
    SET_GPR_U32(ctx, 31, 0x208A4Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A4Cu; }
    }
    if (ctx->pc != 0x208A4Cu) { return; }
    ctx->pc = 0x208A4Cu;
label_208a4c:
    // 0x208a4c: 0x10400003
label_208a50:
    if (ctx->pc == 0x208A50u) {
        ctx->pc = 0x208A54u;
        goto label_208a54;
    }
    ctx->pc = 0x208A4Cu;
    {
        const bool branch_taken_0x208a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a4c) {
            ctx->pc = 0x208A5Cu;
            goto label_208a5c;
        }
    }
    ctx->pc = 0x208A54u;
label_208a54:
    // 0x208a54: 0x1000000b
label_208a58:
    if (ctx->pc == 0x208A58u) {
        ctx->pc = 0x208A5Cu;
        goto label_208a5c;
    }
    ctx->pc = 0x208A54u;
    {
        const bool branch_taken_0x208a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a54) {
            ctx->pc = 0x208A84u;
            goto label_208a84;
        }
    }
    ctx->pc = 0x208A5Cu;
label_208a5c:
    // 0x208a5c: 0x3c02003c
    ctx->pc = 0x208a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_208a60:
    // 0x208a60: 0x8c42c4e4
    ctx->pc = 0x208a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_208a64:
    // 0x208a64: 0x10400005
label_208a68:
    if (ctx->pc == 0x208A68u) {
        ctx->pc = 0x208A6Cu;
        goto label_208a6c;
    }
    ctx->pc = 0x208A64u;
    {
        const bool branch_taken_0x208a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a64) {
            ctx->pc = 0x208A7Cu;
            goto label_208a7c;
        }
    }
    ctx->pc = 0x208A6Cu;
label_208a6c:
    // 0x208a6c: 0x3c10003c
    ctx->pc = 0x208a6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_208a70:
    // 0x208a70: 0x8e10c4e4
    ctx->pc = 0x208a70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_208a74:
    // 0x208a74: 0x200f809
label_208a78:
    if (ctx->pc == 0x208A78u) {
        ctx->pc = 0x208A7Cu;
        goto label_208a7c;
    }
    ctx->pc = 0x208A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x208A7Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2088E8u: goto label_2088e8;
            case 0x2088ECu: goto label_2088ec;
            case 0x2088F0u: goto label_2088f0;
            case 0x2088F4u: goto label_2088f4;
            case 0x2088F8u: goto label_2088f8;
            case 0x2088FCu: goto label_2088fc;
            case 0x208900u: goto label_208900;
            case 0x208904u: goto label_208904;
            case 0x208908u: goto label_208908;
            case 0x20890Cu: goto label_20890c;
            case 0x208910u: goto label_208910;
            case 0x208914u: goto label_208914;
            case 0x208918u: goto label_208918;
            case 0x20891Cu: goto label_20891c;
            case 0x208920u: goto label_208920;
            case 0x208924u: goto label_208924;
            case 0x208928u: goto label_208928;
            case 0x20892Cu: goto label_20892c;
            case 0x208930u: goto label_208930;
            case 0x208934u: goto label_208934;
            case 0x208938u: goto label_208938;
            case 0x20893Cu: goto label_20893c;
            case 0x208940u: goto label_208940;
            case 0x208944u: goto label_208944;
            case 0x208948u: goto label_208948;
            case 0x20894Cu: goto label_20894c;
            case 0x208950u: goto label_208950;
            case 0x208954u: goto label_208954;
            case 0x208958u: goto label_208958;
            case 0x20895Cu: goto label_20895c;
            case 0x208960u: goto label_208960;
            case 0x208964u: goto label_208964;
            case 0x208968u: goto label_208968;
            case 0x20896Cu: goto label_20896c;
            case 0x208970u: goto label_208970;
            case 0x208974u: goto label_208974;
            case 0x208978u: goto label_208978;
            case 0x20897Cu: goto label_20897c;
            case 0x208980u: goto label_208980;
            case 0x208984u: goto label_208984;
            case 0x208988u: goto label_208988;
            case 0x20898Cu: goto label_20898c;
            case 0x208990u: goto label_208990;
            case 0x208994u: goto label_208994;
            case 0x208998u: goto label_208998;
            case 0x20899Cu: goto label_20899c;
            case 0x2089A0u: goto label_2089a0;
            case 0x2089A4u: goto label_2089a4;
            case 0x2089A8u: goto label_2089a8;
            case 0x2089ACu: goto label_2089ac;
            case 0x2089B0u: goto label_2089b0;
            case 0x2089B4u: goto label_2089b4;
            case 0x2089B8u: goto label_2089b8;
            case 0x2089BCu: goto label_2089bc;
            case 0x2089C0u: goto label_2089c0;
            case 0x2089C4u: goto label_2089c4;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089D0u: goto label_2089d0;
            case 0x2089D4u: goto label_2089d4;
            case 0x2089D8u: goto label_2089d8;
            case 0x2089DCu: goto label_2089dc;
            case 0x2089E0u: goto label_2089e0;
            case 0x2089E4u: goto label_2089e4;
            case 0x2089E8u: goto label_2089e8;
            case 0x2089ECu: goto label_2089ec;
            case 0x2089F0u: goto label_2089f0;
            case 0x2089F4u: goto label_2089f4;
            case 0x2089F8u: goto label_2089f8;
            case 0x2089FCu: goto label_2089fc;
            case 0x208A00u: goto label_208a00;
            case 0x208A04u: goto label_208a04;
            case 0x208A08u: goto label_208a08;
            case 0x208A0Cu: goto label_208a0c;
            case 0x208A10u: goto label_208a10;
            case 0x208A14u: goto label_208a14;
            case 0x208A18u: goto label_208a18;
            case 0x208A1Cu: goto label_208a1c;
            case 0x208A20u: goto label_208a20;
            case 0x208A24u: goto label_208a24;
            case 0x208A28u: goto label_208a28;
            case 0x208A2Cu: goto label_208a2c;
            case 0x208A30u: goto label_208a30;
            case 0x208A34u: goto label_208a34;
            case 0x208A38u: goto label_208a38;
            case 0x208A3Cu: goto label_208a3c;
            case 0x208A40u: goto label_208a40;
            case 0x208A44u: goto label_208a44;
            case 0x208A48u: goto label_208a48;
            case 0x208A4Cu: goto label_208a4c;
            case 0x208A50u: goto label_208a50;
            case 0x208A54u: goto label_208a54;
            case 0x208A58u: goto label_208a58;
            case 0x208A5Cu: goto label_208a5c;
            case 0x208A60u: goto label_208a60;
            case 0x208A64u: goto label_208a64;
            case 0x208A68u: goto label_208a68;
            case 0x208A6Cu: goto label_208a6c;
            case 0x208A70u: goto label_208a70;
            case 0x208A74u: goto label_208a74;
            case 0x208A78u: goto label_208a78;
            case 0x208A7Cu: goto label_208a7c;
            case 0x208A80u: goto label_208a80;
            case 0x208A84u: goto label_208a84;
            case 0x208A88u: goto label_208a88;
            case 0x208A8Cu: goto label_208a8c;
            case 0x208A90u: goto label_208a90;
            case 0x208A94u: goto label_208a94;
            case 0x208A98u: goto label_208a98;
            case 0x208A9Cu: goto label_208a9c;
            case 0x208AA0u: goto label_208aa0;
            case 0x208AA4u: goto label_208aa4;
            case 0x208AA8u: goto label_208aa8;
            case 0x208AACu: goto label_208aac;
            case 0x208AB0u: goto label_208ab0;
            case 0x208AB4u: goto label_208ab4;
            case 0x208AB8u: goto label_208ab8;
            case 0x208ABCu: goto label_208abc;
            case 0x208AC0u: goto label_208ac0;
            case 0x208AC4u: goto label_208ac4;
            case 0x208AC8u: goto label_208ac8;
            case 0x208ACCu: goto label_208acc;
            case 0x208AD0u: goto label_208ad0;
            case 0x208AD4u: goto label_208ad4;
            case 0x208AD8u: goto label_208ad8;
            case 0x208ADCu: goto label_208adc;
            case 0x208AE0u: goto label_208ae0;
            case 0x208AE4u: goto label_208ae4;
            case 0x208AE8u: goto label_208ae8;
            case 0x208AECu: goto label_208aec;
            case 0x208AF0u: goto label_208af0;
            case 0x208AF4u: goto label_208af4;
            case 0x208AF8u: goto label_208af8;
            case 0x208AFCu: goto label_208afc;
            case 0x208B00u: goto label_208b00;
            case 0x208B04u: goto label_208b04;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B10u: goto label_208b10;
            case 0x208B14u: goto label_208b14;
            case 0x208B18u: goto label_208b18;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B20u: goto label_208b20;
            case 0x208B24u: goto label_208b24;
            case 0x208B28u: goto label_208b28;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B34u: goto label_208b34;
            case 0x208B38u: goto label_208b38;
            case 0x208B3Cu: goto label_208b3c;
            case 0x208B40u: goto label_208b40;
            case 0x208B44u: goto label_208b44;
            case 0x208B48u: goto label_208b48;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208B50u: goto label_208b50;
            case 0x208B54u: goto label_208b54;
            case 0x208B58u: goto label_208b58;
            case 0x208B5Cu: goto label_208b5c;
            case 0x208B60u: goto label_208b60;
            case 0x208B64u: goto label_208b64;
            case 0x208B68u: goto label_208b68;
            case 0x208B6Cu: goto label_208b6c;
            case 0x208B70u: goto label_208b70;
            case 0x208B74u: goto label_208b74;
            case 0x208B78u: goto label_208b78;
            case 0x208B7Cu: goto label_208b7c;
            case 0x208B80u: goto label_208b80;
            case 0x208B84u: goto label_208b84;
            case 0x208B88u: goto label_208b88;
            case 0x208B8Cu: goto label_208b8c;
            case 0x208B90u: goto label_208b90;
            case 0x208B94u: goto label_208b94;
            case 0x208B98u: goto label_208b98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208A7Cu; }
            if (ctx->pc != 0x208A7Cu) { return; }
        }
    }
    ctx->pc = 0x208A7Cu;
label_208a7c:
    // 0x208a7c: 0x1000ffec
label_208a80:
    if (ctx->pc == 0x208A80u) {
        ctx->pc = 0x208A84u;
        goto label_208a84;
    }
    ctx->pc = 0x208A7Cu;
    {
        const bool branch_taken_0x208a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a7c) {
            ctx->pc = 0x208A30u;
            goto label_208a30;
        }
    }
    ctx->pc = 0x208A84u;
label_208a84:
    // 0x208a84: 0x8fc2000c
    ctx->pc = 0x208a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208a88:
    // 0x208a88: 0x10400004
label_208a8c:
    if (ctx->pc == 0x208A8Cu) {
        ctx->pc = 0x208A90u;
        goto label_208a90;
    }
    ctx->pc = 0x208A88u;
    {
        const bool branch_taken_0x208a88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a88) {
            ctx->pc = 0x208A9Cu;
            goto label_208a9c;
        }
    }
    ctx->pc = 0x208A90u;
label_208a90:
    // 0x208a90: 0x102d
    ctx->pc = 0x208a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a94:
    // 0x208a94: 0x1000003a
label_208a98:
    if (ctx->pc == 0x208A98u) {
        ctx->pc = 0x208A9Cu;
        goto label_208a9c;
    }
    ctx->pc = 0x208A94u;
    {
        const bool branch_taken_0x208a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208a94) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0x8fc40000
    ctx->pc = 0x208a9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208aa0:
    // 0x208aa0: 0x8fc50004
    ctx->pc = 0x208aa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208aa4:
    // 0x208aa4: 0xc081f20
label_208aa8:
    if (ctx->pc == 0x208AA8u) {
        ctx->pc = 0x208AACu;
        goto label_208aac;
    }
    ctx->pc = 0x208AA4u;
    SET_GPR_U32(ctx, 31, 0x208AACu);
    ctx->pc = 0x207C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        make_icon_0x207c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AACu; }
    }
    if (ctx->pc != 0x208AACu) { return; }
    ctx->pc = 0x208AACu;
label_208aac:
    // 0x208aac: 0xafc2000c
    ctx->pc = 0x208aacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_208ab0:
    // 0x208ab0: 0x8fc2000c
    ctx->pc = 0x208ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208ab4:
    // 0x208ab4: 0x4410004
label_208ab8:
    if (ctx->pc == 0x208AB8u) {
        ctx->pc = 0x208ABCu;
        goto label_208abc;
    }
    ctx->pc = 0x208AB4u;
    {
        const bool branch_taken_0x208ab4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x208ab4) {
            ctx->pc = 0x208AC8u;
            goto label_208ac8;
        }
    }
    ctx->pc = 0x208ABCu;
label_208abc:
    // 0x208abc: 0x102d
    ctx->pc = 0x208abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208ac0:
    // 0x208ac0: 0x1000002f
label_208ac4:
    if (ctx->pc == 0x208AC4u) {
        ctx->pc = 0x208AC8u;
        goto label_208ac8;
    }
    ctx->pc = 0x208AC0u;
    {
        const bool branch_taken_0x208ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208ac0) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208AC8u;
label_208ac8:
    // 0x208ac8: 0x27c20020
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
label_208acc:
    // 0x208acc: 0x40202d
    ctx->pc = 0x208accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208ad0:
    // 0x208ad0: 0x2405ffff
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208ad4:
    // 0x208ad4: 0xc081e8e
label_208ad8:
    if (ctx->pc == 0x208AD8u) {
        ctx->pc = 0x208ADCu;
        goto label_208adc;
    }
    ctx->pc = 0x208AD4u;
    SET_GPR_U32(ctx, 31, 0x208ADCu);
    ctx->pc = 0x207A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSaveFileName_0x207a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208ADCu; }
    }
    if (ctx->pc != 0x208ADCu) { return; }
    ctx->pc = 0x208ADCu;
label_208adc:
    // 0x208adc: 0x27c20020
    ctx->pc = 0x208adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
label_208ae0:
    // 0x208ae0: 0x8fc30000
    ctx->pc = 0x208ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208ae4:
    // 0x208ae4: 0x24040210
    ctx->pc = 0x208ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
label_208ae8:
    // 0x208ae8: 0x641818
    ctx->pc = 0x208ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_208aec:
    // 0x208aec: 0x8fc40004
    ctx->pc = 0x208aecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208af0:
    // 0x208af0: 0x24050084
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 132));
label_208af4:
    // 0x208af4: 0x852018
    ctx->pc = 0x208af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_208af8:
    // 0x208af8: 0x3c050031
    ctx->pc = 0x208af8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
label_208afc:
    // 0x208afc: 0x24a51e60
    ctx->pc = 0x208afcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7776));
label_208b00:
    // 0x208b00: 0x852021
    ctx->pc = 0x208b00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_208b04:
    // 0x208b04: 0x641821
    ctx->pc = 0x208b04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208b08:
    // 0x208b08: 0x8fc40000
    ctx->pc = 0x208b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208b0c:
    // 0x208b0c: 0x8fc50004
    ctx->pc = 0x208b0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208b10:
    // 0x208b10: 0x40302d
    ctx->pc = 0x208b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208b14:
    // 0x208b14: 0x60382d
    ctx->pc = 0x208b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208b18:
    // 0x208b18: 0x24080080
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
label_208b1c:
    // 0x208b1c: 0xc082476
label_208b20:
    if (ctx->pc == 0x208B20u) {
        ctx->pc = 0x208B24u;
        goto label_208b24;
    }
    ctx->pc = 0x208B1Cu;
    SET_GPR_U32(ctx, 31, 0x208B24u);
    ctx->pc = 0x2091D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        my_write_0x2091d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B24u; }
    }
    if (ctx->pc != 0x208B24u) { return; }
    ctx->pc = 0x208B24u;
label_208b24:
    // 0x208b24: 0xafc00010
    ctx->pc = 0x208b24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_208b28:
    // 0x208b28: 0x8fc20010
    ctx->pc = 0x208b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_208b2c:
    // 0x208b2c: 0x28430008
    ctx->pc = 0x208b2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_208b30:
    // 0x208b30: 0x14600003
label_208b34:
    if (ctx->pc == 0x208B34u) {
        ctx->pc = 0x208B38u;
        goto label_208b38;
    }
    ctx->pc = 0x208B30u;
    {
        const bool branch_taken_0x208b30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x208b30) {
            ctx->pc = 0x208B40u;
            goto label_208b40;
        }
    }
    ctx->pc = 0x208B38u;
label_208b38:
    // 0x208b38: 0x1000000e
label_208b3c:
    if (ctx->pc == 0x208B3Cu) {
        ctx->pc = 0x208B40u;
        goto label_208b40;
    }
    ctx->pc = 0x208B38u;
    {
        const bool branch_taken_0x208b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208b38) {
            ctx->pc = 0x208B74u;
            goto label_208b74;
        }
    }
    ctx->pc = 0x208B40u;
label_208b40:
    // 0x208b40: 0x8fc40000
    ctx->pc = 0x208b40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208b44:
    // 0x208b44: 0x8fc50004
    ctx->pc = 0x208b44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208b48:
    // 0x208b48: 0x8fc60010
    ctx->pc = 0x208b48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_208b4c:
    // 0x208b4c: 0x3c070032
    ctx->pc = 0x208b4cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
label_208b50:
    // 0x208b50: 0x24e7c2e0
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294951648));
label_208b54:
    // 0x208b54: 0x24081074
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4212));
label_208b58:
    // 0x208b58: 0xc082504
label_208b5c:
    if (ctx->pc == 0x208B5Cu) {
        ctx->pc = 0x208B60u;
        goto label_208b60;
    }
    ctx->pc = 0x208B58u;
    SET_GPR_U32(ctx, 31, 0x208B60u);
    ctx->pc = 0x209410u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveSave_0x209410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B60u; }
    }
    if (ctx->pc != 0x208B60u) { return; }
    ctx->pc = 0x208B60u;
label_208b60:
    // 0x208b60: 0x8fc20010
    ctx->pc = 0x208b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_208b64:
    // 0x208b64: 0x24430001
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_208b68:
    // 0x208b68: 0xafc30010
    ctx->pc = 0x208b68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
label_208b6c:
    // 0x208b6c: 0x1000ffee
label_208b70:
    if (ctx->pc == 0x208B70u) {
        ctx->pc = 0x208B74u;
        goto label_208b74;
    }
    ctx->pc = 0x208B6Cu;
    {
        const bool branch_taken_0x208b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208b6c) {
            ctx->pc = 0x208B28u;
            goto label_208b28;
        }
    }
    ctx->pc = 0x208B74u;
label_208b74:
    // 0x208b74: 0x24020001
    ctx->pc = 0x208b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_208b78:
    // 0x208b78: 0x10000001
label_208b7c:
    if (ctx->pc == 0x208B7Cu) {
        ctx->pc = 0x208B80u;
        goto label_208b80;
    }
    ctx->pc = 0x208B78u;
    {
        const bool branch_taken_0x208b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208b78) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208B80u;
label_208b80:
    // 0x208b80: 0x3c0e82d
    ctx->pc = 0x208b80u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_208b84:
    // 0x208b84: 0xdfbf00c0
    ctx->pc = 0x208b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_208b88:
    // 0x208b88: 0xdfbe00b0
    ctx->pc = 0x208b88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_208b8c:
    // 0x208b8c: 0xdfb000a0
    ctx->pc = 0x208b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_208b90:
    // 0x208b90: 0x27bd00d0
    ctx->pc = 0x208b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
label_208b94:
    // 0x208b94: 0x3e00008
label_208b98:
    if (ctx->pc == 0x208B98u) {
        ctx->pc = 0x208B9Cu;
        goto label_fallthrough_0x208b94;
    }
    ctx->pc = 0x208B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2088E8u: goto label_2088e8;
            case 0x2088ECu: goto label_2088ec;
            case 0x2088F0u: goto label_2088f0;
            case 0x2088F4u: goto label_2088f4;
            case 0x2088F8u: goto label_2088f8;
            case 0x2088FCu: goto label_2088fc;
            case 0x208900u: goto label_208900;
            case 0x208904u: goto label_208904;
            case 0x208908u: goto label_208908;
            case 0x20890Cu: goto label_20890c;
            case 0x208910u: goto label_208910;
            case 0x208914u: goto label_208914;
            case 0x208918u: goto label_208918;
            case 0x20891Cu: goto label_20891c;
            case 0x208920u: goto label_208920;
            case 0x208924u: goto label_208924;
            case 0x208928u: goto label_208928;
            case 0x20892Cu: goto label_20892c;
            case 0x208930u: goto label_208930;
            case 0x208934u: goto label_208934;
            case 0x208938u: goto label_208938;
            case 0x20893Cu: goto label_20893c;
            case 0x208940u: goto label_208940;
            case 0x208944u: goto label_208944;
            case 0x208948u: goto label_208948;
            case 0x20894Cu: goto label_20894c;
            case 0x208950u: goto label_208950;
            case 0x208954u: goto label_208954;
            case 0x208958u: goto label_208958;
            case 0x20895Cu: goto label_20895c;
            case 0x208960u: goto label_208960;
            case 0x208964u: goto label_208964;
            case 0x208968u: goto label_208968;
            case 0x20896Cu: goto label_20896c;
            case 0x208970u: goto label_208970;
            case 0x208974u: goto label_208974;
            case 0x208978u: goto label_208978;
            case 0x20897Cu: goto label_20897c;
            case 0x208980u: goto label_208980;
            case 0x208984u: goto label_208984;
            case 0x208988u: goto label_208988;
            case 0x20898Cu: goto label_20898c;
            case 0x208990u: goto label_208990;
            case 0x208994u: goto label_208994;
            case 0x208998u: goto label_208998;
            case 0x20899Cu: goto label_20899c;
            case 0x2089A0u: goto label_2089a0;
            case 0x2089A4u: goto label_2089a4;
            case 0x2089A8u: goto label_2089a8;
            case 0x2089ACu: goto label_2089ac;
            case 0x2089B0u: goto label_2089b0;
            case 0x2089B4u: goto label_2089b4;
            case 0x2089B8u: goto label_2089b8;
            case 0x2089BCu: goto label_2089bc;
            case 0x2089C0u: goto label_2089c0;
            case 0x2089C4u: goto label_2089c4;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089D0u: goto label_2089d0;
            case 0x2089D4u: goto label_2089d4;
            case 0x2089D8u: goto label_2089d8;
            case 0x2089DCu: goto label_2089dc;
            case 0x2089E0u: goto label_2089e0;
            case 0x2089E4u: goto label_2089e4;
            case 0x2089E8u: goto label_2089e8;
            case 0x2089ECu: goto label_2089ec;
            case 0x2089F0u: goto label_2089f0;
            case 0x2089F4u: goto label_2089f4;
            case 0x2089F8u: goto label_2089f8;
            case 0x2089FCu: goto label_2089fc;
            case 0x208A00u: goto label_208a00;
            case 0x208A04u: goto label_208a04;
            case 0x208A08u: goto label_208a08;
            case 0x208A0Cu: goto label_208a0c;
            case 0x208A10u: goto label_208a10;
            case 0x208A14u: goto label_208a14;
            case 0x208A18u: goto label_208a18;
            case 0x208A1Cu: goto label_208a1c;
            case 0x208A20u: goto label_208a20;
            case 0x208A24u: goto label_208a24;
            case 0x208A28u: goto label_208a28;
            case 0x208A2Cu: goto label_208a2c;
            case 0x208A30u: goto label_208a30;
            case 0x208A34u: goto label_208a34;
            case 0x208A38u: goto label_208a38;
            case 0x208A3Cu: goto label_208a3c;
            case 0x208A40u: goto label_208a40;
            case 0x208A44u: goto label_208a44;
            case 0x208A48u: goto label_208a48;
            case 0x208A4Cu: goto label_208a4c;
            case 0x208A50u: goto label_208a50;
            case 0x208A54u: goto label_208a54;
            case 0x208A58u: goto label_208a58;
            case 0x208A5Cu: goto label_208a5c;
            case 0x208A60u: goto label_208a60;
            case 0x208A64u: goto label_208a64;
            case 0x208A68u: goto label_208a68;
            case 0x208A6Cu: goto label_208a6c;
            case 0x208A70u: goto label_208a70;
            case 0x208A74u: goto label_208a74;
            case 0x208A78u: goto label_208a78;
            case 0x208A7Cu: goto label_208a7c;
            case 0x208A80u: goto label_208a80;
            case 0x208A84u: goto label_208a84;
            case 0x208A88u: goto label_208a88;
            case 0x208A8Cu: goto label_208a8c;
            case 0x208A90u: goto label_208a90;
            case 0x208A94u: goto label_208a94;
            case 0x208A98u: goto label_208a98;
            case 0x208A9Cu: goto label_208a9c;
            case 0x208AA0u: goto label_208aa0;
            case 0x208AA4u: goto label_208aa4;
            case 0x208AA8u: goto label_208aa8;
            case 0x208AACu: goto label_208aac;
            case 0x208AB0u: goto label_208ab0;
            case 0x208AB4u: goto label_208ab4;
            case 0x208AB8u: goto label_208ab8;
            case 0x208ABCu: goto label_208abc;
            case 0x208AC0u: goto label_208ac0;
            case 0x208AC4u: goto label_208ac4;
            case 0x208AC8u: goto label_208ac8;
            case 0x208ACCu: goto label_208acc;
            case 0x208AD0u: goto label_208ad0;
            case 0x208AD4u: goto label_208ad4;
            case 0x208AD8u: goto label_208ad8;
            case 0x208ADCu: goto label_208adc;
            case 0x208AE0u: goto label_208ae0;
            case 0x208AE4u: goto label_208ae4;
            case 0x208AE8u: goto label_208ae8;
            case 0x208AECu: goto label_208aec;
            case 0x208AF0u: goto label_208af0;
            case 0x208AF4u: goto label_208af4;
            case 0x208AF8u: goto label_208af8;
            case 0x208AFCu: goto label_208afc;
            case 0x208B00u: goto label_208b00;
            case 0x208B04u: goto label_208b04;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B10u: goto label_208b10;
            case 0x208B14u: goto label_208b14;
            case 0x208B18u: goto label_208b18;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B20u: goto label_208b20;
            case 0x208B24u: goto label_208b24;
            case 0x208B28u: goto label_208b28;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B34u: goto label_208b34;
            case 0x208B38u: goto label_208b38;
            case 0x208B3Cu: goto label_208b3c;
            case 0x208B40u: goto label_208b40;
            case 0x208B44u: goto label_208b44;
            case 0x208B48u: goto label_208b48;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208B50u: goto label_208b50;
            case 0x208B54u: goto label_208b54;
            case 0x208B58u: goto label_208b58;
            case 0x208B5Cu: goto label_208b5c;
            case 0x208B60u: goto label_208b60;
            case 0x208B64u: goto label_208b64;
            case 0x208B68u: goto label_208b68;
            case 0x208B6Cu: goto label_208b6c;
            case 0x208B70u: goto label_208b70;
            case 0x208B74u: goto label_208b74;
            case 0x208B78u: goto label_208b78;
            case 0x208B7Cu: goto label_208b7c;
            case 0x208B80u: goto label_208b80;
            case 0x208B84u: goto label_208b84;
            case 0x208B88u: goto label_208b88;
            case 0x208B8Cu: goto label_208b8c;
            case 0x208B90u: goto label_208b90;
            case 0x208B94u: goto label_208b94;
            case 0x208B98u: goto label_208b98;
            default: break;
        }
        return;
    }
label_fallthrough_0x208b94:
    ctx->pc = 0x208B9Cu;
}
