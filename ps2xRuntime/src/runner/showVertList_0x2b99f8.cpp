#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showVertList
// Address: 0x2b99f8 - 0x2bafb4
void showVertList_0x2b99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b99f8u;

label_2b99f8:
    // 0x2b99f8: 0x27bdff50
    ctx->pc = 0x2b99f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b99fc:
    // 0x2b99fc: 0xffbf0090
    ctx->pc = 0x2b99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b9a00:
    // 0x2b9a00: 0xffbe0080
    ctx->pc = 0x2b9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b9a04:
    // 0x2b9a04: 0xffb70070
    ctx->pc = 0x2b9a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b9a08:
    // 0x2b9a08: 0xffb60060
    ctx->pc = 0x2b9a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b9a0c:
    // 0x2b9a0c: 0xffb50050
    ctx->pc = 0x2b9a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b9a10:
    // 0x2b9a10: 0xffb40040
    ctx->pc = 0x2b9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b9a14:
    // 0x2b9a14: 0xffb30030
    ctx->pc = 0x2b9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b9a18:
    // 0x2b9a18: 0xffb20020
    ctx->pc = 0x2b9a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b9a1c:
    // 0x2b9a1c: 0xffb10010
    ctx->pc = 0x2b9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b9a20:
    // 0x2b9a20: 0xffb00000
    ctx->pc = 0x2b9a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b9a24:
    // 0x2b9a24: 0xe7b500a8
    ctx->pc = 0x2b9a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2b9a28:
    // 0x2b9a28: 0xe7b400a0
    ctx->pc = 0x2b9a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2b9a2c:
    // 0x2b9a2c: 0xa0b02d
    ctx->pc = 0x2b9a2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a30:
    // 0x2b9a30: 0xe0802d
    ctx->pc = 0x2b9a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a34:
    // 0x2b9a34: 0x3c020036
    ctx->pc = 0x2b9a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2b9a38:
    // 0x2b9a38: 0x8c57dee0
    ctx->pc = 0x2b9a38u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2b9a3c:
    // 0x2b9a3c: 0x3202000f
    ctx->pc = 0x2b9a3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 15));
label_2b9a40:
    // 0x2b9a40: 0x10400012
label_2b9a44:
    if (ctx->pc == 0x2B9A44u) {
        ctx->pc = 0x2B9A44u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A48u;
        goto label_2b9a48;
    }
    ctx->pc = 0x2B9A40u;
    {
        const bool branch_taken_0x2b9a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9A44u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a40) {
            ctx->pc = 0x2B9A8Cu;
            goto label_2b9a8c;
        }
    }
    ctx->pc = 0x2B9A48u;
label_2b9a48:
    // 0x2b9a48: 0x3c04003b
    ctx->pc = 0x2b9a48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9a4c:
    // 0x2b9a4c: 0x24845ba0
    ctx->pc = 0x2b9a4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23456));
label_2b9a50:
    // 0x2b9a50: 0x200282d
    ctx->pc = 0x2b9a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a54:
    // 0x2b9a54: 0xdfbf0090
    ctx->pc = 0x2b9a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b9a58:
    // 0x2b9a58: 0xdfbe0080
    ctx->pc = 0x2b9a58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9a5c:
    // 0x2b9a5c: 0xdfb70070
    ctx->pc = 0x2b9a5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9a60:
    // 0x2b9a60: 0xdfb60060
    ctx->pc = 0x2b9a60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9a64:
    // 0x2b9a64: 0xdfb50050
    ctx->pc = 0x2b9a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9a68:
    // 0x2b9a68: 0xdfb40040
    ctx->pc = 0x2b9a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9a6c:
    // 0x2b9a6c: 0xdfb30030
    ctx->pc = 0x2b9a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9a70:
    // 0x2b9a70: 0xdfb20020
    ctx->pc = 0x2b9a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9a74:
    // 0x2b9a74: 0xdfb10010
    ctx->pc = 0x2b9a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9a78:
    // 0x2b9a78: 0xdfb00000
    ctx->pc = 0x2b9a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9a7c:
    // 0x2b9a7c: 0xc7b500a8
    ctx->pc = 0x2b9a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b9a80:
    // 0x2b9a80: 0xc7b400a0
    ctx->pc = 0x2b9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b9a84:
    // 0x2b9a84: 0x80b4a34
label_2b9a88:
    if (ctx->pc == 0x2B9A88u) {
        ctx->pc = 0x2B9A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2B9A8Cu;
        goto label_2b9a8c;
    }
    ctx->pc = 0x2B9A84u;
    ctx->pc = 0x2B9A88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9A8Cu;
label_2b9a8c:
    // 0x2b9a8c: 0x3c021100
    ctx->pc = 0x2b9a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
label_2b9a90:
    // 0x2b9a90: 0x3442bfff
    ctx->pc = 0x2b9a90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49151));
label_2b9a94:
    // 0x2b9a94: 0x50102a
    ctx->pc = 0x2b9a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_2b9a98:
    // 0x2b9a98: 0x14400003
label_2b9a9c:
    if (ctx->pc == 0x2B9A9Cu) {
        ctx->pc = 0x2B9A9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
        ctx->pc = 0x2B9AA0u;
        goto label_2b9aa0;
    }
    ctx->pc = 0x2B9A98u;
    {
        const bool branch_taken_0x2b9a98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9A9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
        if (branch_taken_0x2b9a98) {
            ctx->pc = 0x2B9AA8u;
            goto label_2b9aa8;
        }
    }
    ctx->pc = 0x2B9AA0u;
label_2b9aa0:
    // 0x2b9aa0: 0x3442c000
    ctx->pc = 0x2b9aa0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
label_2b9aa4:
    // 0x2b9aa4: 0x2028021
    ctx->pc = 0x2b9aa4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b9aa8:
    // 0x2b9aa8: 0x3c02eeff
    ctx->pc = 0x2b9aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61183 << 16));
label_2b9aac:
    // 0x2b9aac: 0x34424000
    ctx->pc = 0x2b9aacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
label_2b9ab0:
    // 0x2b9ab0: 0x2021021
    ctx->pc = 0x2b9ab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b9ab4:
    // 0x2b9ab4: 0x2c424000
    ctx->pc = 0x2b9ab4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16384));
label_2b9ab8:
    // 0x2b9ab8: 0x14400009
label_2b9abc:
    if (ctx->pc == 0x2B9ABCu) {
        ctx->pc = 0x2B9ABCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AC0u;
        goto label_2b9ac0;
    }
    ctx->pc = 0x2B9AB8u;
    {
        const bool branch_taken_0x2b9ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9ABCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ab8) {
            ctx->pc = 0x2B9AE0u;
            goto label_2b9ae0;
        }
    }
    ctx->pc = 0x2B9AC0u;
label_2b9ac0:
    // 0x2b9ac0: 0x3c04003b
    ctx->pc = 0x2b9ac0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9ac4:
    // 0x2b9ac4: 0x24845bc8
    ctx->pc = 0x2b9ac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23496));
label_2b9ac8:
    // 0x2b9ac8: 0xc0b4a34
label_2b9acc:
    if (ctx->pc == 0x2B9ACCu) {
        ctx->pc = 0x2B9ACCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AD0u;
        goto label_2b9ad0;
    }
    ctx->pc = 0x2B9AC8u;
    SET_GPR_U32(ctx, 31, 0x2B9AD0u);
    ctx->pc = 0x2B9ACCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AD0u; }
    }
    if (ctx->pc != 0x2B9AD0u) { return; }
    ctx->pc = 0x2B9AD0u;
label_2b9ad0:
    // 0x2b9ad0: 0x3c020037
    ctx->pc = 0x2b9ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b9ad4:
    // 0x2b9ad4: 0x8c4225d0
    ctx->pc = 0x2b9ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9680)));
label_2b9ad8:
    // 0x2b9ad8: 0x10400528
label_2b9adc:
    if (ctx->pc == 0x2B9ADCu) {
        ctx->pc = 0x2B9ADCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AE0u;
        goto label_2b9ae0;
    }
    ctx->pc = 0x2B9AD8u;
    {
        const bool branch_taken_0x2b9ad8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9ADCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ad8) {
            ctx->pc = 0x2BAF7Cu;
            goto label_2baf7c;
        }
    }
    ctx->pc = 0x2B9AE0u;
label_2b9ae0:
    // 0x2b9ae0: 0x241e0001
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_2b9ae4:
    // 0x2b9ae4: 0x24020005
    ctx->pc = 0x2b9ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2b9ae8:
    // 0x2b9ae8: 0x12c20003
label_2b9aec:
    if (ctx->pc == 0x2B9AECu) {
        ctx->pc = 0x2B9AECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2B9AF0u;
        goto label_2b9af0;
    }
    ctx->pc = 0x2B9AE8u;
    {
        const bool branch_taken_0x2b9ae8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B9AECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2b9ae8) {
            ctx->pc = 0x2B9AF8u;
            goto label_2b9af8;
        }
    }
    ctx->pc = 0x2B9AF0u;
label_2b9af0:
    // 0x2b9af0: 0x16c20050
label_2b9af4:
    if (ctx->pc == 0x2B9AF4u) {
        ctx->pc = 0x2B9AF8u;
        goto label_2b9af8;
    }
    ctx->pc = 0x2B9AF0u;
    {
        const bool branch_taken_0x2b9af0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b9af0) {
            ctx->pc = 0x2B9C34u;
            goto label_2b9c34;
        }
    }
    ctx->pc = 0x2B9AF8u;
label_2b9af8:
    // 0x2b9af8: 0x8e430008
    ctx->pc = 0x2b9af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b9afc:
    // 0x2b9afc: 0x2402000e
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_2b9b00:
    // 0x2b9b00: 0x1462002d
label_2b9b04:
    if (ctx->pc == 0x2B9B04u) {
        ctx->pc = 0x2B9B04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1042));
        ctx->pc = 0x2B9B08u;
        goto label_2b9b08;
    }
    ctx->pc = 0x2B9B00u;
    {
        const bool branch_taken_0x2b9b00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B9B04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1042));
        if (branch_taken_0x2b9b00) {
            ctx->pc = 0x2B9BB8u;
            goto label_2b9bb8;
        }
    }
    ctx->pc = 0x2B9B08u;
label_2b9b08:
    // 0x2b9b08: 0x8e450000
    ctx->pc = 0x2b9b08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9b0c:
    // 0x2b9b0c: 0x3c02ffff
    ctx->pc = 0x2b9b0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b9b10:
    // 0x2b9b10: 0xa21024
    ctx->pc = 0x2b9b10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b9b14:
    // 0x2b9b14: 0x14400028
label_2b9b18:
    if (ctx->pc == 0x2B9B18u) {
        ctx->pc = 0x2B9B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1042));
        ctx->pc = 0x2B9B1Cu;
        goto label_2b9b1c;
    }
    ctx->pc = 0x2B9B14u;
    {
        const bool branch_taken_0x2b9b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1042));
        if (branch_taken_0x2b9b14) {
            ctx->pc = 0x2B9BB8u;
            goto label_2b9bb8;
        }
    }
    ctx->pc = 0x2B9B1Cu;
label_2b9b1c:
    // 0x2b9b1c: 0x8e430004
    ctx->pc = 0x2b9b1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b9b20:
    // 0x2b9b20: 0x3c021000
    ctx->pc = 0x2b9b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2b9b24:
    // 0x2b9b24: 0x54620023
label_2b9b28:
    if (ctx->pc == 0x2B9B28u) {
        ctx->pc = 0x2B9B28u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2B9B2Cu;
        goto label_2b9b2c;
    }
    ctx->pc = 0x2B9B24u;
    {
        const bool branch_taken_0x2b9b24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b9b24) {
            ctx->pc = 0x2B9B28u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x2B9BB4u;
            goto label_2b9bb4;
        }
    }
    ctx->pc = 0x2B9B2Cu;
label_2b9b2c:
    // 0x2b9b2c: 0x30be8000
    ctx->pc = 0x2b9b2cu;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 5), 32768));
label_2b9b30:
    // 0x2b9b30: 0x30b53fff
    ctx->pc = 0x2b9b30u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 5), 16383));
label_2b9b34:
    // 0x2b9b34: 0x3c04003b
    ctx->pc = 0x2b9b34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9b38:
    // 0x2b9b38: 0x24845bf0
    ctx->pc = 0x2b9b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23536));
label_2b9b3c:
    // 0x2b9b3c: 0x3c061000
    ctx->pc = 0x2b9b3cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
label_2b9b40:
    // 0x2b9b40: 0x2407000e
    ctx->pc = 0x2b9b40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
label_2b9b44:
    // 0x2b9b44: 0xc0b4a34
label_2b9b48:
    if (ctx->pc == 0x2B9B48u) {
        ctx->pc = 0x2B9B48u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x2B9B4Cu;
        goto label_2b9b4c;
    }
    ctx->pc = 0x2B9B44u;
    SET_GPR_U32(ctx, 31, 0x2B9B4Cu);
    ctx->pc = 0x2B9B48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B4Cu; }
    }
    if (ctx->pc != 0x2B9B4Cu) { return; }
    ctx->pc = 0x2B9B4Cu;
label_2b9b4c:
    // 0x2b9b4c: 0x26b5ffff
    ctx->pc = 0x2b9b4cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2b9b50:
    // 0x2b9b50: 0x2402ffff
    ctx->pc = 0x2b9b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b9b54:
    // 0x2b9b54: 0x12a20015
label_2b9b58:
    if (ctx->pc == 0x2B9B58u) {
        ctx->pc = 0x2B9B58u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2B9B5Cu;
        goto label_2b9b5c;
    }
    ctx->pc = 0x2B9B54u;
    {
        const bool branch_taken_0x2b9b54 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B9B58u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x2b9b54) {
            ctx->pc = 0x2B9BACu;
            goto label_2b9bac;
        }
    }
    ctx->pc = 0x2B9B5Cu;
label_2b9b5c:
    // 0x2b9b5c: 0x3c14003b
    ctx->pc = 0x2b9b5cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
label_2b9b60:
    // 0x2b9b60: 0x3c13003b
    ctx->pc = 0x2b9b60u;
    SET_GPR_U32(ctx, 19, ((uint32_t)59 << 16));
label_2b9b64:
    // 0x2b9b64: 0x3c11003b
    ctx->pc = 0x2b9b64u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_2b9b68:
    // 0x2b9b68: 0x2410ffff
    ctx->pc = 0x2b9b68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b9b6c:
    // 0x2b9b6c: 0x0
    ctx->pc = 0x2b9b6cu;
    // NOP
label_2b9b70:
    // 0x2b9b70: 0x26845c18
    ctx->pc = 0x2b9b70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 23576));
label_2b9b74:
    // 0x2b9b74: 0x8e450008
    ctx->pc = 0x2b9b74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b9b78:
    // 0x2b9b78: 0x8e460000
    ctx->pc = 0x2b9b78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9b7c:
    // 0x2b9b7c: 0xc0b4a34
label_2b9b80:
    if (ctx->pc == 0x2B9B80u) {
        ctx->pc = 0x2B9B80u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2B9B84u;
        goto label_2b9b84;
    }
    ctx->pc = 0x2B9B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B9B84u);
    ctx->pc = 0x2B9B80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B84u; }
    }
    if (ctx->pc != 0x2B9B84u) { return; }
    ctx->pc = 0x2B9B84u;
label_2b9b84:
    // 0x2b9b84: 0xc0ae5d0
label_2b9b88:
    if (ctx->pc == 0x2B9B88u) {
        ctx->pc = 0x2B9B88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2B9B8Cu;
        goto label_2b9b8c;
    }
    ctx->pc = 0x2B9B84u;
    SET_GPR_U32(ctx, 31, 0x2B9B8Cu);
    ctx->pc = 0x2B9B88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x2B9740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getGSRegName_0x2b9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B8Cu; }
    }
    if (ctx->pc != 0x2B9B8Cu) { return; }
    ctx->pc = 0x2B9B8Cu;
label_2b9b8c:
    // 0x2b9b8c: 0x26645c50
    ctx->pc = 0x2b9b8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 23632));
label_2b9b90:
    // 0x2b9b90: 0xc0b4a34
label_2b9b94:
    if (ctx->pc == 0x2B9B94u) {
        ctx->pc = 0x2B9B94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B98u;
        goto label_2b9b98;
    }
    ctx->pc = 0x2B9B90u;
    SET_GPR_U32(ctx, 31, 0x2B9B98u);
    ctx->pc = 0x2B9B94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9B98u; }
    }
    if (ctx->pc != 0x2B9B98u) { return; }
    ctx->pc = 0x2B9B98u;
label_2b9b98:
    // 0x2b9b98: 0xc0b4a34
label_2b9b9c:
    if (ctx->pc == 0x2B9B9Cu) {
        ctx->pc = 0x2B9B9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2B9BA0u;
        goto label_2b9ba0;
    }
    ctx->pc = 0x2B9B98u;
    SET_GPR_U32(ctx, 31, 0x2B9BA0u);
    ctx->pc = 0x2B9B9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9BA0u; }
    }
    if (ctx->pc != 0x2B9BA0u) { return; }
    ctx->pc = 0x2B9BA0u;
label_2b9ba0:
    // 0x2b9ba0: 0x26b5ffff
    ctx->pc = 0x2b9ba0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2b9ba4:
    // 0x2b9ba4: 0x16b0fff2
label_2b9ba8:
    if (ctx->pc == 0x2B9BA8u) {
        ctx->pc = 0x2B9BA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2B9BACu;
        goto label_2b9bac;
    }
    ctx->pc = 0x2B9BA4u;
    {
        const bool branch_taken_0x2b9ba4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 16));
        ctx->pc = 0x2B9BA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x2b9ba4) {
            ctx->pc = 0x2B9B70u;
            goto label_2b9b70;
        }
    }
    ctx->pc = 0x2B9BACu;
label_2b9bac:
    // 0x2b9bac: 0x10000021
label_2b9bb0:
    if (ctx->pc == 0x2B9BB0u) {
        ctx->pc = 0x2B9BB0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BB4u;
        goto label_2b9bb4;
    }
    ctx->pc = 0x2B9BACu;
    {
        const bool branch_taken_0x2b9bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9BB0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9bac) {
            ctx->pc = 0x2B9C34u;
            goto label_2b9c34;
        }
    }
    ctx->pc = 0x2B9BB4u;
label_2b9bb4:
    // 0x2b9bb4: 0x24020412
    ctx->pc = 0x2b9bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1042));
label_2b9bb8:
    // 0x2b9bb8: 0x14620014
label_2b9bbc:
    if (ctx->pc == 0x2B9BBCu) {
        ctx->pc = 0x2B9BC0u;
        goto label_2b9bc0;
    }
    ctx->pc = 0x2B9BB8u;
    {
        const bool branch_taken_0x2b9bb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b9bb8) {
            ctx->pc = 0x2B9C0Cu;
            goto label_2b9c0c;
        }
    }
    ctx->pc = 0x2B9BC0u;
label_2b9bc0:
    // 0x2b9bc0: 0x8e450000
    ctx->pc = 0x2b9bc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9bc4:
    // 0x2b9bc4: 0x3c02ffff
    ctx->pc = 0x2b9bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2b9bc8:
    // 0x2b9bc8: 0xa21024
    ctx->pc = 0x2b9bc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b9bcc:
    // 0x2b9bcc: 0x1440000f
label_2b9bd0:
    if (ctx->pc == 0x2B9BD0u) {
        ctx->pc = 0x2B9BD0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
        ctx->pc = 0x2B9BD4u;
        goto label_2b9bd4;
    }
    ctx->pc = 0x2B9BCCu;
    {
        const bool branch_taken_0x2b9bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9BD0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
        if (branch_taken_0x2b9bcc) {
            ctx->pc = 0x2B9C0Cu;
            goto label_2b9c0c;
        }
    }
    ctx->pc = 0x2B9BD4u;
label_2b9bd4:
    // 0x2b9bd4: 0x8e460004
    ctx->pc = 0x2b9bd4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b9bd8:
    // 0x2b9bd8: 0x3c02f000
    ctx->pc = 0x2b9bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
label_2b9bdc:
    // 0x2b9bdc: 0x34420fff
    ctx->pc = 0x2b9bdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4095));
label_2b9be0:
    // 0x2b9be0: 0xc21024
    ctx->pc = 0x2b9be0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b9be4:
    // 0x2b9be4: 0x14430009
label_2b9be8:
    if (ctx->pc == 0x2B9BE8u) {
        ctx->pc = 0x2B9BE8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9BECu;
        goto label_2b9bec;
    }
    ctx->pc = 0x2B9BE4u;
    {
        const bool branch_taken_0x2b9be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2B9BE8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9be4) {
            ctx->pc = 0x2B9C0Cu;
            goto label_2b9c0c;
        }
    }
    ctx->pc = 0x2B9BECu;
label_2b9bec:
    // 0x2b9bec: 0x30be8000
    ctx->pc = 0x2b9becu;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 5), 32768));
label_2b9bf0:
    // 0x2b9bf0: 0x30b53fff
    ctx->pc = 0x2b9bf0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 5), 16383));
label_2b9bf4:
    // 0x2b9bf4: 0x24845bf0
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23536));
label_2b9bf8:
    // 0x2b9bf8: 0x24070412
    ctx->pc = 0x2b9bf8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1042));
label_2b9bfc:
    // 0x2b9bfc: 0xc0b4a34
label_2b9c00:
    if (ctx->pc == 0x2B9C00u) {
        ctx->pc = 0x2B9C00u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x2B9C04u;
        goto label_2b9c04;
    }
    ctx->pc = 0x2B9BFCu;
    SET_GPR_U32(ctx, 31, 0x2B9C04u);
    ctx->pc = 0x2B9C00u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C04u; }
    }
    if (ctx->pc != 0x2B9C04u) { return; }
    ctx->pc = 0x2B9C04u;
label_2b9c04:
    // 0x2b9c04: 0x1000000b
label_2b9c08:
    if (ctx->pc == 0x2B9C08u) {
        ctx->pc = 0x2B9C08u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2B9C0Cu;
        goto label_2b9c0c;
    }
    ctx->pc = 0x2B9C04u;
    {
        const bool branch_taken_0x2b9c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C08u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x2b9c04) {
            ctx->pc = 0x2B9C34u;
            goto label_2b9c34;
        }
    }
    ctx->pc = 0x2B9C0Cu;
label_2b9c0c:
    // 0x2b9c0c: 0x16a0000c
label_2b9c10:
    if (ctx->pc == 0x2B9C10u) {
        ctx->pc = 0x2B9C10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->pc = 0x2B9C14u;
        goto label_2b9c14;
    }
    ctx->pc = 0x2B9C0Cu;
    {
        const bool branch_taken_0x2b9c0c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        if (branch_taken_0x2b9c0c) {
            ctx->pc = 0x2B9C40u;
            goto label_2b9c40;
        }
    }
    ctx->pc = 0x2B9C14u;
label_2b9c14:
    // 0x2b9c14: 0x3c04003b
    ctx->pc = 0x2b9c14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9c18:
    // 0x2b9c18: 0x24845c58
    ctx->pc = 0x2b9c18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23640));
label_2b9c1c:
    // 0x2b9c1c: 0x8e450000
    ctx->pc = 0x2b9c1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9c20:
    // 0x2b9c20: 0x8e460004
    ctx->pc = 0x2b9c20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b9c24:
    // 0x2b9c24: 0x8e470008
    ctx->pc = 0x2b9c24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b9c28:
    // 0x2b9c28: 0xc0b4a34
label_2b9c2c:
    if (ctx->pc == 0x2B9C2Cu) {
        ctx->pc = 0x2B9C2Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x2B9C30u;
        goto label_2b9c30;
    }
    ctx->pc = 0x2B9C28u;
    SET_GPR_U32(ctx, 31, 0x2B9C30u);
    ctx->pc = 0x2B9C2Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C30u; }
    }
    if (ctx->pc != 0x2B9C30u) { return; }
    ctx->pc = 0x2B9C30u;
label_2b9c30:
    // 0x2b9c30: 0x241e0001
    ctx->pc = 0x2b9c30u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_2b9c34:
    // 0x2b9c34: 0x12a004c9
label_2b9c38:
    if (ctx->pc == 0x2B9C38u) {
        ctx->pc = 0x2B9C38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->pc = 0x2B9C3Cu;
        goto label_2b9c3c;
    }
    ctx->pc = 0x2B9C34u;
    {
        const bool branch_taken_0x2b9c34 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        if (branch_taken_0x2b9c34) {
            ctx->pc = 0x2BAF5Cu;
            goto label_2baf5c;
        }
    }
    ctx->pc = 0x2B9C3Cu;
label_2b9c3c:
    // 0x2b9c3c: 0x0
    ctx->pc = 0x2b9c3cu;
    // NOP
label_2b9c40:
    // 0x2b9c40: 0x2c620008
    ctx->pc = 0x2b9c40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_2b9c44:
    // 0x2b9c44: 0x104004bc
label_2b9c48:
    if (ctx->pc == 0x2B9C48u) {
        ctx->pc = 0x2B9C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9C4Cu;
        goto label_2b9c4c;
    }
    ctx->pc = 0x2B9C44u;
    {
        const bool branch_taken_0x2b9c44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9c44) {
            ctx->pc = 0x2BAF38u;
            goto label_2baf38;
        }
    }
    ctx->pc = 0x2B9C4Cu;
label_2b9c4c:
    // 0x2b9c4c: 0x24426020
    ctx->pc = 0x2b9c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24608));
label_2b9c50:
    // 0x2b9c50: 0x31880
    ctx->pc = 0x2b9c50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b9c54:
    // 0x2b9c54: 0x621821
    ctx->pc = 0x2b9c54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9c58:
    // 0x2b9c58: 0x8c620000
    ctx->pc = 0x2b9c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9c5c:
    // 0x2b9c5c: 0x400008
label_2b9c60:
    if (ctx->pc == 0x2B9C60u) {
        ctx->pc = 0x2B9C64u;
        goto label_2b9c64;
    }
    ctx->pc = 0x2B9C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B99F8u: goto label_2b99f8;
            case 0x2B99FCu: goto label_2b99fc;
            case 0x2B9A00u: goto label_2b9a00;
            case 0x2B9A04u: goto label_2b9a04;
            case 0x2B9A08u: goto label_2b9a08;
            case 0x2B9A0Cu: goto label_2b9a0c;
            case 0x2B9A10u: goto label_2b9a10;
            case 0x2B9A14u: goto label_2b9a14;
            case 0x2B9A18u: goto label_2b9a18;
            case 0x2B9A1Cu: goto label_2b9a1c;
            case 0x2B9A20u: goto label_2b9a20;
            case 0x2B9A24u: goto label_2b9a24;
            case 0x2B9A28u: goto label_2b9a28;
            case 0x2B9A2Cu: goto label_2b9a2c;
            case 0x2B9A30u: goto label_2b9a30;
            case 0x2B9A34u: goto label_2b9a34;
            case 0x2B9A38u: goto label_2b9a38;
            case 0x2B9A3Cu: goto label_2b9a3c;
            case 0x2B9A40u: goto label_2b9a40;
            case 0x2B9A44u: goto label_2b9a44;
            case 0x2B9A48u: goto label_2b9a48;
            case 0x2B9A4Cu: goto label_2b9a4c;
            case 0x2B9A50u: goto label_2b9a50;
            case 0x2B9A54u: goto label_2b9a54;
            case 0x2B9A58u: goto label_2b9a58;
            case 0x2B9A5Cu: goto label_2b9a5c;
            case 0x2B9A60u: goto label_2b9a60;
            case 0x2B9A64u: goto label_2b9a64;
            case 0x2B9A68u: goto label_2b9a68;
            case 0x2B9A6Cu: goto label_2b9a6c;
            case 0x2B9A70u: goto label_2b9a70;
            case 0x2B9A74u: goto label_2b9a74;
            case 0x2B9A78u: goto label_2b9a78;
            case 0x2B9A7Cu: goto label_2b9a7c;
            case 0x2B9A80u: goto label_2b9a80;
            case 0x2B9A84u: goto label_2b9a84;
            case 0x2B9A88u: goto label_2b9a88;
            case 0x2B9A8Cu: goto label_2b9a8c;
            case 0x2B9A90u: goto label_2b9a90;
            case 0x2B9A94u: goto label_2b9a94;
            case 0x2B9A98u: goto label_2b9a98;
            case 0x2B9A9Cu: goto label_2b9a9c;
            case 0x2B9AA0u: goto label_2b9aa0;
            case 0x2B9AA4u: goto label_2b9aa4;
            case 0x2B9AA8u: goto label_2b9aa8;
            case 0x2B9AACu: goto label_2b9aac;
            case 0x2B9AB0u: goto label_2b9ab0;
            case 0x2B9AB4u: goto label_2b9ab4;
            case 0x2B9AB8u: goto label_2b9ab8;
            case 0x2B9ABCu: goto label_2b9abc;
            case 0x2B9AC0u: goto label_2b9ac0;
            case 0x2B9AC4u: goto label_2b9ac4;
            case 0x2B9AC8u: goto label_2b9ac8;
            case 0x2B9ACCu: goto label_2b9acc;
            case 0x2B9AD0u: goto label_2b9ad0;
            case 0x2B9AD4u: goto label_2b9ad4;
            case 0x2B9AD8u: goto label_2b9ad8;
            case 0x2B9ADCu: goto label_2b9adc;
            case 0x2B9AE0u: goto label_2b9ae0;
            case 0x2B9AE4u: goto label_2b9ae4;
            case 0x2B9AE8u: goto label_2b9ae8;
            case 0x2B9AECu: goto label_2b9aec;
            case 0x2B9AF0u: goto label_2b9af0;
            case 0x2B9AF4u: goto label_2b9af4;
            case 0x2B9AF8u: goto label_2b9af8;
            case 0x2B9AFCu: goto label_2b9afc;
            case 0x2B9B00u: goto label_2b9b00;
            case 0x2B9B04u: goto label_2b9b04;
            case 0x2B9B08u: goto label_2b9b08;
            case 0x2B9B0Cu: goto label_2b9b0c;
            case 0x2B9B10u: goto label_2b9b10;
            case 0x2B9B14u: goto label_2b9b14;
            case 0x2B9B18u: goto label_2b9b18;
            case 0x2B9B1Cu: goto label_2b9b1c;
            case 0x2B9B20u: goto label_2b9b20;
            case 0x2B9B24u: goto label_2b9b24;
            case 0x2B9B28u: goto label_2b9b28;
            case 0x2B9B2Cu: goto label_2b9b2c;
            case 0x2B9B30u: goto label_2b9b30;
            case 0x2B9B34u: goto label_2b9b34;
            case 0x2B9B38u: goto label_2b9b38;
            case 0x2B9B3Cu: goto label_2b9b3c;
            case 0x2B9B40u: goto label_2b9b40;
            case 0x2B9B44u: goto label_2b9b44;
            case 0x2B9B48u: goto label_2b9b48;
            case 0x2B9B4Cu: goto label_2b9b4c;
            case 0x2B9B50u: goto label_2b9b50;
            case 0x2B9B54u: goto label_2b9b54;
            case 0x2B9B58u: goto label_2b9b58;
            case 0x2B9B5Cu: goto label_2b9b5c;
            case 0x2B9B60u: goto label_2b9b60;
            case 0x2B9B64u: goto label_2b9b64;
            case 0x2B9B68u: goto label_2b9b68;
            case 0x2B9B6Cu: goto label_2b9b6c;
            case 0x2B9B70u: goto label_2b9b70;
            case 0x2B9B74u: goto label_2b9b74;
            case 0x2B9B78u: goto label_2b9b78;
            case 0x2B9B7Cu: goto label_2b9b7c;
            case 0x2B9B80u: goto label_2b9b80;
            case 0x2B9B84u: goto label_2b9b84;
            case 0x2B9B88u: goto label_2b9b88;
            case 0x2B9B8Cu: goto label_2b9b8c;
            case 0x2B9B90u: goto label_2b9b90;
            case 0x2B9B94u: goto label_2b9b94;
            case 0x2B9B98u: goto label_2b9b98;
            case 0x2B9B9Cu: goto label_2b9b9c;
            case 0x2B9BA0u: goto label_2b9ba0;
            case 0x2B9BA4u: goto label_2b9ba4;
            case 0x2B9BA8u: goto label_2b9ba8;
            case 0x2B9BACu: goto label_2b9bac;
            case 0x2B9BB0u: goto label_2b9bb0;
            case 0x2B9BB4u: goto label_2b9bb4;
            case 0x2B9BB8u: goto label_2b9bb8;
            case 0x2B9BBCu: goto label_2b9bbc;
            case 0x2B9BC0u: goto label_2b9bc0;
            case 0x2B9BC4u: goto label_2b9bc4;
            case 0x2B9BC8u: goto label_2b9bc8;
            case 0x2B9BCCu: goto label_2b9bcc;
            case 0x2B9BD0u: goto label_2b9bd0;
            case 0x2B9BD4u: goto label_2b9bd4;
            case 0x2B9BD8u: goto label_2b9bd8;
            case 0x2B9BDCu: goto label_2b9bdc;
            case 0x2B9BE0u: goto label_2b9be0;
            case 0x2B9BE4u: goto label_2b9be4;
            case 0x2B9BE8u: goto label_2b9be8;
            case 0x2B9BECu: goto label_2b9bec;
            case 0x2B9BF0u: goto label_2b9bf0;
            case 0x2B9BF4u: goto label_2b9bf4;
            case 0x2B9BF8u: goto label_2b9bf8;
            case 0x2B9BFCu: goto label_2b9bfc;
            case 0x2B9C00u: goto label_2b9c00;
            case 0x2B9C04u: goto label_2b9c04;
            case 0x2B9C08u: goto label_2b9c08;
            case 0x2B9C0Cu: goto label_2b9c0c;
            case 0x2B9C10u: goto label_2b9c10;
            case 0x2B9C14u: goto label_2b9c14;
            case 0x2B9C18u: goto label_2b9c18;
            case 0x2B9C1Cu: goto label_2b9c1c;
            case 0x2B9C20u: goto label_2b9c20;
            case 0x2B9C24u: goto label_2b9c24;
            case 0x2B9C28u: goto label_2b9c28;
            case 0x2B9C2Cu: goto label_2b9c2c;
            case 0x2B9C30u: goto label_2b9c30;
            case 0x2B9C34u: goto label_2b9c34;
            case 0x2B9C38u: goto label_2b9c38;
            case 0x2B9C3Cu: goto label_2b9c3c;
            case 0x2B9C40u: goto label_2b9c40;
            case 0x2B9C44u: goto label_2b9c44;
            case 0x2B9C48u: goto label_2b9c48;
            case 0x2B9C4Cu: goto label_2b9c4c;
            case 0x2B9C50u: goto label_2b9c50;
            case 0x2B9C54u: goto label_2b9c54;
            case 0x2B9C58u: goto label_2b9c58;
            case 0x2B9C5Cu: goto label_2b9c5c;
            case 0x2B9C60u: goto label_2b9c60;
            case 0x2B9C64u: goto label_2b9c64;
            case 0x2B9C68u: goto label_2b9c68;
            case 0x2B9C6Cu: goto label_2b9c6c;
            case 0x2B9C70u: goto label_2b9c70;
            case 0x2B9C74u: goto label_2b9c74;
            case 0x2B9C78u: goto label_2b9c78;
            case 0x2B9C7Cu: goto label_2b9c7c;
            case 0x2B9C80u: goto label_2b9c80;
            case 0x2B9C84u: goto label_2b9c84;
            case 0x2B9C88u: goto label_2b9c88;
            case 0x2B9C8Cu: goto label_2b9c8c;
            case 0x2B9C90u: goto label_2b9c90;
            case 0x2B9C94u: goto label_2b9c94;
            case 0x2B9C98u: goto label_2b9c98;
            case 0x2B9C9Cu: goto label_2b9c9c;
            case 0x2B9CA0u: goto label_2b9ca0;
            case 0x2B9CA4u: goto label_2b9ca4;
            case 0x2B9CA8u: goto label_2b9ca8;
            case 0x2B9CACu: goto label_2b9cac;
            case 0x2B9CB0u: goto label_2b9cb0;
            case 0x2B9CB4u: goto label_2b9cb4;
            case 0x2B9CB8u: goto label_2b9cb8;
            case 0x2B9CBCu: goto label_2b9cbc;
            case 0x2B9CC0u: goto label_2b9cc0;
            case 0x2B9CC4u: goto label_2b9cc4;
            case 0x2B9CC8u: goto label_2b9cc8;
            case 0x2B9CCCu: goto label_2b9ccc;
            case 0x2B9CD0u: goto label_2b9cd0;
            case 0x2B9CD4u: goto label_2b9cd4;
            case 0x2B9CD8u: goto label_2b9cd8;
            case 0x2B9CDCu: goto label_2b9cdc;
            case 0x2B9CE0u: goto label_2b9ce0;
            case 0x2B9CE4u: goto label_2b9ce4;
            case 0x2B9CE8u: goto label_2b9ce8;
            case 0x2B9CECu: goto label_2b9cec;
            case 0x2B9CF0u: goto label_2b9cf0;
            case 0x2B9CF4u: goto label_2b9cf4;
            case 0x2B9CF8u: goto label_2b9cf8;
            case 0x2B9CFCu: goto label_2b9cfc;
            case 0x2B9D00u: goto label_2b9d00;
            case 0x2B9D04u: goto label_2b9d04;
            case 0x2B9D08u: goto label_2b9d08;
            case 0x2B9D0Cu: goto label_2b9d0c;
            case 0x2B9D10u: goto label_2b9d10;
            case 0x2B9D14u: goto label_2b9d14;
            case 0x2B9D18u: goto label_2b9d18;
            case 0x2B9D1Cu: goto label_2b9d1c;
            case 0x2B9D20u: goto label_2b9d20;
            case 0x2B9D24u: goto label_2b9d24;
            case 0x2B9D28u: goto label_2b9d28;
            case 0x2B9D2Cu: goto label_2b9d2c;
            case 0x2B9D30u: goto label_2b9d30;
            case 0x2B9D34u: goto label_2b9d34;
            case 0x2B9D38u: goto label_2b9d38;
            case 0x2B9D3Cu: goto label_2b9d3c;
            case 0x2B9D40u: goto label_2b9d40;
            case 0x2B9D44u: goto label_2b9d44;
            case 0x2B9D48u: goto label_2b9d48;
            case 0x2B9D4Cu: goto label_2b9d4c;
            case 0x2B9D50u: goto label_2b9d50;
            case 0x2B9D54u: goto label_2b9d54;
            case 0x2B9D58u: goto label_2b9d58;
            case 0x2B9D5Cu: goto label_2b9d5c;
            case 0x2B9D60u: goto label_2b9d60;
            case 0x2B9D64u: goto label_2b9d64;
            case 0x2B9D68u: goto label_2b9d68;
            case 0x2B9D6Cu: goto label_2b9d6c;
            case 0x2B9D70u: goto label_2b9d70;
            case 0x2B9D74u: goto label_2b9d74;
            case 0x2B9D78u: goto label_2b9d78;
            case 0x2B9D7Cu: goto label_2b9d7c;
            case 0x2B9D80u: goto label_2b9d80;
            case 0x2B9D84u: goto label_2b9d84;
            case 0x2B9D88u: goto label_2b9d88;
            case 0x2B9D8Cu: goto label_2b9d8c;
            case 0x2B9D90u: goto label_2b9d90;
            case 0x2B9D94u: goto label_2b9d94;
            case 0x2B9D98u: goto label_2b9d98;
            case 0x2B9D9Cu: goto label_2b9d9c;
            case 0x2B9DA0u: goto label_2b9da0;
            case 0x2B9DA4u: goto label_2b9da4;
            case 0x2B9DA8u: goto label_2b9da8;
            case 0x2B9DACu: goto label_2b9dac;
            case 0x2B9DB0u: goto label_2b9db0;
            case 0x2B9DB4u: goto label_2b9db4;
            case 0x2B9DB8u: goto label_2b9db8;
            case 0x2B9DBCu: goto label_2b9dbc;
            case 0x2B9DC0u: goto label_2b9dc0;
            case 0x2B9DC4u: goto label_2b9dc4;
            case 0x2B9DC8u: goto label_2b9dc8;
            case 0x2B9DCCu: goto label_2b9dcc;
            case 0x2B9DD0u: goto label_2b9dd0;
            case 0x2B9DD4u: goto label_2b9dd4;
            case 0x2B9DD8u: goto label_2b9dd8;
            case 0x2B9DDCu: goto label_2b9ddc;
            case 0x2B9DE0u: goto label_2b9de0;
            case 0x2B9DE4u: goto label_2b9de4;
            case 0x2B9DE8u: goto label_2b9de8;
            case 0x2B9DECu: goto label_2b9dec;
            case 0x2B9DF0u: goto label_2b9df0;
            case 0x2B9DF4u: goto label_2b9df4;
            case 0x2B9DF8u: goto label_2b9df8;
            case 0x2B9DFCu: goto label_2b9dfc;
            case 0x2B9E00u: goto label_2b9e00;
            case 0x2B9E04u: goto label_2b9e04;
            case 0x2B9E08u: goto label_2b9e08;
            case 0x2B9E0Cu: goto label_2b9e0c;
            case 0x2B9E10u: goto label_2b9e10;
            case 0x2B9E14u: goto label_2b9e14;
            case 0x2B9E18u: goto label_2b9e18;
            case 0x2B9E1Cu: goto label_2b9e1c;
            case 0x2B9E20u: goto label_2b9e20;
            case 0x2B9E24u: goto label_2b9e24;
            case 0x2B9E28u: goto label_2b9e28;
            case 0x2B9E2Cu: goto label_2b9e2c;
            case 0x2B9E30u: goto label_2b9e30;
            case 0x2B9E34u: goto label_2b9e34;
            case 0x2B9E38u: goto label_2b9e38;
            case 0x2B9E3Cu: goto label_2b9e3c;
            case 0x2B9E40u: goto label_2b9e40;
            case 0x2B9E44u: goto label_2b9e44;
            case 0x2B9E48u: goto label_2b9e48;
            case 0x2B9E4Cu: goto label_2b9e4c;
            case 0x2B9E50u: goto label_2b9e50;
            case 0x2B9E54u: goto label_2b9e54;
            case 0x2B9E58u: goto label_2b9e58;
            case 0x2B9E5Cu: goto label_2b9e5c;
            case 0x2B9E60u: goto label_2b9e60;
            case 0x2B9E64u: goto label_2b9e64;
            case 0x2B9E68u: goto label_2b9e68;
            case 0x2B9E6Cu: goto label_2b9e6c;
            case 0x2B9E70u: goto label_2b9e70;
            case 0x2B9E74u: goto label_2b9e74;
            case 0x2B9E78u: goto label_2b9e78;
            case 0x2B9E7Cu: goto label_2b9e7c;
            case 0x2B9E80u: goto label_2b9e80;
            case 0x2B9E84u: goto label_2b9e84;
            case 0x2B9E88u: goto label_2b9e88;
            case 0x2B9E8Cu: goto label_2b9e8c;
            case 0x2B9E90u: goto label_2b9e90;
            case 0x2B9E94u: goto label_2b9e94;
            case 0x2B9E98u: goto label_2b9e98;
            case 0x2B9E9Cu: goto label_2b9e9c;
            case 0x2B9EA0u: goto label_2b9ea0;
            case 0x2B9EA4u: goto label_2b9ea4;
            case 0x2B9EA8u: goto label_2b9ea8;
            case 0x2B9EACu: goto label_2b9eac;
            case 0x2B9EB0u: goto label_2b9eb0;
            case 0x2B9EB4u: goto label_2b9eb4;
            case 0x2B9EB8u: goto label_2b9eb8;
            case 0x2B9EBCu: goto label_2b9ebc;
            case 0x2B9EC0u: goto label_2b9ec0;
            case 0x2B9EC4u: goto label_2b9ec4;
            case 0x2B9EC8u: goto label_2b9ec8;
            case 0x2B9ECCu: goto label_2b9ecc;
            case 0x2B9ED0u: goto label_2b9ed0;
            case 0x2B9ED4u: goto label_2b9ed4;
            case 0x2B9ED8u: goto label_2b9ed8;
            case 0x2B9EDCu: goto label_2b9edc;
            case 0x2B9EE0u: goto label_2b9ee0;
            case 0x2B9EE4u: goto label_2b9ee4;
            case 0x2B9EE8u: goto label_2b9ee8;
            case 0x2B9EECu: goto label_2b9eec;
            case 0x2B9EF0u: goto label_2b9ef0;
            case 0x2B9EF4u: goto label_2b9ef4;
            case 0x2B9EF8u: goto label_2b9ef8;
            case 0x2B9EFCu: goto label_2b9efc;
            case 0x2B9F00u: goto label_2b9f00;
            case 0x2B9F04u: goto label_2b9f04;
            case 0x2B9F08u: goto label_2b9f08;
            case 0x2B9F0Cu: goto label_2b9f0c;
            case 0x2B9F10u: goto label_2b9f10;
            case 0x2B9F14u: goto label_2b9f14;
            case 0x2B9F18u: goto label_2b9f18;
            case 0x2B9F1Cu: goto label_2b9f1c;
            case 0x2B9F20u: goto label_2b9f20;
            case 0x2B9F24u: goto label_2b9f24;
            case 0x2B9F28u: goto label_2b9f28;
            case 0x2B9F2Cu: goto label_2b9f2c;
            case 0x2B9F30u: goto label_2b9f30;
            case 0x2B9F34u: goto label_2b9f34;
            case 0x2B9F38u: goto label_2b9f38;
            case 0x2B9F3Cu: goto label_2b9f3c;
            case 0x2B9F40u: goto label_2b9f40;
            case 0x2B9F44u: goto label_2b9f44;
            case 0x2B9F48u: goto label_2b9f48;
            case 0x2B9F4Cu: goto label_2b9f4c;
            case 0x2B9F50u: goto label_2b9f50;
            case 0x2B9F54u: goto label_2b9f54;
            case 0x2B9F58u: goto label_2b9f58;
            case 0x2B9F5Cu: goto label_2b9f5c;
            case 0x2B9F60u: goto label_2b9f60;
            case 0x2B9F64u: goto label_2b9f64;
            case 0x2B9F68u: goto label_2b9f68;
            case 0x2B9F6Cu: goto label_2b9f6c;
            case 0x2B9F70u: goto label_2b9f70;
            case 0x2B9F74u: goto label_2b9f74;
            case 0x2B9F78u: goto label_2b9f78;
            case 0x2B9F7Cu: goto label_2b9f7c;
            case 0x2B9F80u: goto label_2b9f80;
            case 0x2B9F84u: goto label_2b9f84;
            case 0x2B9F88u: goto label_2b9f88;
            case 0x2B9F8Cu: goto label_2b9f8c;
            case 0x2B9F90u: goto label_2b9f90;
            case 0x2B9F94u: goto label_2b9f94;
            case 0x2B9F98u: goto label_2b9f98;
            case 0x2B9F9Cu: goto label_2b9f9c;
            case 0x2B9FA0u: goto label_2b9fa0;
            case 0x2B9FA4u: goto label_2b9fa4;
            case 0x2B9FA8u: goto label_2b9fa8;
            case 0x2B9FACu: goto label_2b9fac;
            case 0x2B9FB0u: goto label_2b9fb0;
            case 0x2B9FB4u: goto label_2b9fb4;
            case 0x2B9FB8u: goto label_2b9fb8;
            case 0x2B9FBCu: goto label_2b9fbc;
            case 0x2B9FC0u: goto label_2b9fc0;
            case 0x2B9FC4u: goto label_2b9fc4;
            case 0x2B9FC8u: goto label_2b9fc8;
            case 0x2B9FCCu: goto label_2b9fcc;
            case 0x2B9FD0u: goto label_2b9fd0;
            case 0x2B9FD4u: goto label_2b9fd4;
            case 0x2B9FD8u: goto label_2b9fd8;
            case 0x2B9FDCu: goto label_2b9fdc;
            case 0x2B9FE0u: goto label_2b9fe0;
            case 0x2B9FE4u: goto label_2b9fe4;
            case 0x2B9FE8u: goto label_2b9fe8;
            case 0x2B9FECu: goto label_2b9fec;
            case 0x2B9FF0u: goto label_2b9ff0;
            case 0x2B9FF4u: goto label_2b9ff4;
            case 0x2B9FF8u: goto label_2b9ff8;
            case 0x2B9FFCu: goto label_2b9ffc;
            case 0x2BA000u: goto label_2ba000;
            case 0x2BA004u: goto label_2ba004;
            case 0x2BA008u: goto label_2ba008;
            case 0x2BA00Cu: goto label_2ba00c;
            case 0x2BA010u: goto label_2ba010;
            case 0x2BA014u: goto label_2ba014;
            case 0x2BA018u: goto label_2ba018;
            case 0x2BA01Cu: goto label_2ba01c;
            case 0x2BA020u: goto label_2ba020;
            case 0x2BA024u: goto label_2ba024;
            case 0x2BA028u: goto label_2ba028;
            case 0x2BA02Cu: goto label_2ba02c;
            case 0x2BA030u: goto label_2ba030;
            case 0x2BA034u: goto label_2ba034;
            case 0x2BA038u: goto label_2ba038;
            case 0x2BA03Cu: goto label_2ba03c;
            case 0x2BA040u: goto label_2ba040;
            case 0x2BA044u: goto label_2ba044;
            case 0x2BA048u: goto label_2ba048;
            case 0x2BA04Cu: goto label_2ba04c;
            case 0x2BA050u: goto label_2ba050;
            case 0x2BA054u: goto label_2ba054;
            case 0x2BA058u: goto label_2ba058;
            case 0x2BA05Cu: goto label_2ba05c;
            case 0x2BA060u: goto label_2ba060;
            case 0x2BA064u: goto label_2ba064;
            case 0x2BA068u: goto label_2ba068;
            case 0x2BA06Cu: goto label_2ba06c;
            case 0x2BA070u: goto label_2ba070;
            case 0x2BA074u: goto label_2ba074;
            case 0x2BA078u: goto label_2ba078;
            case 0x2BA07Cu: goto label_2ba07c;
            case 0x2BA080u: goto label_2ba080;
            case 0x2BA084u: goto label_2ba084;
            case 0x2BA088u: goto label_2ba088;
            case 0x2BA08Cu: goto label_2ba08c;
            case 0x2BA090u: goto label_2ba090;
            case 0x2BA094u: goto label_2ba094;
            case 0x2BA098u: goto label_2ba098;
            case 0x2BA09Cu: goto label_2ba09c;
            case 0x2BA0A0u: goto label_2ba0a0;
            case 0x2BA0A4u: goto label_2ba0a4;
            case 0x2BA0A8u: goto label_2ba0a8;
            case 0x2BA0ACu: goto label_2ba0ac;
            case 0x2BA0B0u: goto label_2ba0b0;
            case 0x2BA0B4u: goto label_2ba0b4;
            case 0x2BA0B8u: goto label_2ba0b8;
            case 0x2BA0BCu: goto label_2ba0bc;
            case 0x2BA0C0u: goto label_2ba0c0;
            case 0x2BA0C4u: goto label_2ba0c4;
            case 0x2BA0C8u: goto label_2ba0c8;
            case 0x2BA0CCu: goto label_2ba0cc;
            case 0x2BA0D0u: goto label_2ba0d0;
            case 0x2BA0D4u: goto label_2ba0d4;
            case 0x2BA0D8u: goto label_2ba0d8;
            case 0x2BA0DCu: goto label_2ba0dc;
            case 0x2BA0E0u: goto label_2ba0e0;
            case 0x2BA0E4u: goto label_2ba0e4;
            case 0x2BA0E8u: goto label_2ba0e8;
            case 0x2BA0ECu: goto label_2ba0ec;
            case 0x2BA0F0u: goto label_2ba0f0;
            case 0x2BA0F4u: goto label_2ba0f4;
            case 0x2BA0F8u: goto label_2ba0f8;
            case 0x2BA0FCu: goto label_2ba0fc;
            case 0x2BA100u: goto label_2ba100;
            case 0x2BA104u: goto label_2ba104;
            case 0x2BA108u: goto label_2ba108;
            case 0x2BA10Cu: goto label_2ba10c;
            case 0x2BA110u: goto label_2ba110;
            case 0x2BA114u: goto label_2ba114;
            case 0x2BA118u: goto label_2ba118;
            case 0x2BA11Cu: goto label_2ba11c;
            case 0x2BA120u: goto label_2ba120;
            case 0x2BA124u: goto label_2ba124;
            case 0x2BA128u: goto label_2ba128;
            case 0x2BA12Cu: goto label_2ba12c;
            case 0x2BA130u: goto label_2ba130;
            case 0x2BA134u: goto label_2ba134;
            case 0x2BA138u: goto label_2ba138;
            case 0x2BA13Cu: goto label_2ba13c;
            case 0x2BA140u: goto label_2ba140;
            case 0x2BA144u: goto label_2ba144;
            case 0x2BA148u: goto label_2ba148;
            case 0x2BA14Cu: goto label_2ba14c;
            case 0x2BA150u: goto label_2ba150;
            case 0x2BA154u: goto label_2ba154;
            case 0x2BA158u: goto label_2ba158;
            case 0x2BA15Cu: goto label_2ba15c;
            case 0x2BA160u: goto label_2ba160;
            case 0x2BA164u: goto label_2ba164;
            case 0x2BA168u: goto label_2ba168;
            case 0x2BA16Cu: goto label_2ba16c;
            case 0x2BA170u: goto label_2ba170;
            case 0x2BA174u: goto label_2ba174;
            case 0x2BA178u: goto label_2ba178;
            case 0x2BA17Cu: goto label_2ba17c;
            case 0x2BA180u: goto label_2ba180;
            case 0x2BA184u: goto label_2ba184;
            case 0x2BA188u: goto label_2ba188;
            case 0x2BA18Cu: goto label_2ba18c;
            case 0x2BA190u: goto label_2ba190;
            case 0x2BA194u: goto label_2ba194;
            case 0x2BA198u: goto label_2ba198;
            case 0x2BA19Cu: goto label_2ba19c;
            case 0x2BA1A0u: goto label_2ba1a0;
            case 0x2BA1A4u: goto label_2ba1a4;
            case 0x2BA1A8u: goto label_2ba1a8;
            case 0x2BA1ACu: goto label_2ba1ac;
            case 0x2BA1B0u: goto label_2ba1b0;
            case 0x2BA1B4u: goto label_2ba1b4;
            case 0x2BA1B8u: goto label_2ba1b8;
            case 0x2BA1BCu: goto label_2ba1bc;
            case 0x2BA1C0u: goto label_2ba1c0;
            case 0x2BA1C4u: goto label_2ba1c4;
            case 0x2BA1C8u: goto label_2ba1c8;
            case 0x2BA1CCu: goto label_2ba1cc;
            case 0x2BA1D0u: goto label_2ba1d0;
            case 0x2BA1D4u: goto label_2ba1d4;
            case 0x2BA1D8u: goto label_2ba1d8;
            case 0x2BA1DCu: goto label_2ba1dc;
            case 0x2BA1E0u: goto label_2ba1e0;
            case 0x2BA1E4u: goto label_2ba1e4;
            case 0x2BA1E8u: goto label_2ba1e8;
            case 0x2BA1ECu: goto label_2ba1ec;
            case 0x2BA1F0u: goto label_2ba1f0;
            case 0x2BA1F4u: goto label_2ba1f4;
            case 0x2BA1F8u: goto label_2ba1f8;
            case 0x2BA1FCu: goto label_2ba1fc;
            case 0x2BA200u: goto label_2ba200;
            case 0x2BA204u: goto label_2ba204;
            case 0x2BA208u: goto label_2ba208;
            case 0x2BA20Cu: goto label_2ba20c;
            case 0x2BA210u: goto label_2ba210;
            case 0x2BA214u: goto label_2ba214;
            case 0x2BA218u: goto label_2ba218;
            case 0x2BA21Cu: goto label_2ba21c;
            case 0x2BA220u: goto label_2ba220;
            case 0x2BA224u: goto label_2ba224;
            case 0x2BA228u: goto label_2ba228;
            case 0x2BA22Cu: goto label_2ba22c;
            case 0x2BA230u: goto label_2ba230;
            case 0x2BA234u: goto label_2ba234;
            case 0x2BA238u: goto label_2ba238;
            case 0x2BA23Cu: goto label_2ba23c;
            case 0x2BA240u: goto label_2ba240;
            case 0x2BA244u: goto label_2ba244;
            case 0x2BA248u: goto label_2ba248;
            case 0x2BA24Cu: goto label_2ba24c;
            case 0x2BA250u: goto label_2ba250;
            case 0x2BA254u: goto label_2ba254;
            case 0x2BA258u: goto label_2ba258;
            case 0x2BA25Cu: goto label_2ba25c;
            case 0x2BA260u: goto label_2ba260;
            case 0x2BA264u: goto label_2ba264;
            case 0x2BA268u: goto label_2ba268;
            case 0x2BA26Cu: goto label_2ba26c;
            case 0x2BA270u: goto label_2ba270;
            case 0x2BA274u: goto label_2ba274;
            case 0x2BA278u: goto label_2ba278;
            case 0x2BA27Cu: goto label_2ba27c;
            case 0x2BA280u: goto label_2ba280;
            case 0x2BA284u: goto label_2ba284;
            case 0x2BA288u: goto label_2ba288;
            case 0x2BA28Cu: goto label_2ba28c;
            case 0x2BA290u: goto label_2ba290;
            case 0x2BA294u: goto label_2ba294;
            case 0x2BA298u: goto label_2ba298;
            case 0x2BA29Cu: goto label_2ba29c;
            case 0x2BA2A0u: goto label_2ba2a0;
            case 0x2BA2A4u: goto label_2ba2a4;
            case 0x2BA2A8u: goto label_2ba2a8;
            case 0x2BA2ACu: goto label_2ba2ac;
            case 0x2BA2B0u: goto label_2ba2b0;
            case 0x2BA2B4u: goto label_2ba2b4;
            case 0x2BA2B8u: goto label_2ba2b8;
            case 0x2BA2BCu: goto label_2ba2bc;
            case 0x2BA2C0u: goto label_2ba2c0;
            case 0x2BA2C4u: goto label_2ba2c4;
            case 0x2BA2C8u: goto label_2ba2c8;
            case 0x2BA2CCu: goto label_2ba2cc;
            case 0x2BA2D0u: goto label_2ba2d0;
            case 0x2BA2D4u: goto label_2ba2d4;
            case 0x2BA2D8u: goto label_2ba2d8;
            case 0x2BA2DCu: goto label_2ba2dc;
            case 0x2BA2E0u: goto label_2ba2e0;
            case 0x2BA2E4u: goto label_2ba2e4;
            case 0x2BA2E8u: goto label_2ba2e8;
            case 0x2BA2ECu: goto label_2ba2ec;
            case 0x2BA2F0u: goto label_2ba2f0;
            case 0x2BA2F4u: goto label_2ba2f4;
            case 0x2BA2F8u: goto label_2ba2f8;
            case 0x2BA2FCu: goto label_2ba2fc;
            case 0x2BA300u: goto label_2ba300;
            case 0x2BA304u: goto label_2ba304;
            case 0x2BA308u: goto label_2ba308;
            case 0x2BA30Cu: goto label_2ba30c;
            case 0x2BA310u: goto label_2ba310;
            case 0x2BA314u: goto label_2ba314;
            case 0x2BA318u: goto label_2ba318;
            case 0x2BA31Cu: goto label_2ba31c;
            case 0x2BA320u: goto label_2ba320;
            case 0x2BA324u: goto label_2ba324;
            case 0x2BA328u: goto label_2ba328;
            case 0x2BA32Cu: goto label_2ba32c;
            case 0x2BA330u: goto label_2ba330;
            case 0x2BA334u: goto label_2ba334;
            case 0x2BA338u: goto label_2ba338;
            case 0x2BA33Cu: goto label_2ba33c;
            case 0x2BA340u: goto label_2ba340;
            case 0x2BA344u: goto label_2ba344;
            case 0x2BA348u: goto label_2ba348;
            case 0x2BA34Cu: goto label_2ba34c;
            case 0x2BA350u: goto label_2ba350;
            case 0x2BA354u: goto label_2ba354;
            case 0x2BA358u: goto label_2ba358;
            case 0x2BA35Cu: goto label_2ba35c;
            case 0x2BA360u: goto label_2ba360;
            case 0x2BA364u: goto label_2ba364;
            case 0x2BA368u: goto label_2ba368;
            case 0x2BA36Cu: goto label_2ba36c;
            case 0x2BA370u: goto label_2ba370;
            case 0x2BA374u: goto label_2ba374;
            case 0x2BA378u: goto label_2ba378;
            case 0x2BA37Cu: goto label_2ba37c;
            case 0x2BA380u: goto label_2ba380;
            case 0x2BA384u: goto label_2ba384;
            case 0x2BA388u: goto label_2ba388;
            case 0x2BA38Cu: goto label_2ba38c;
            case 0x2BA390u: goto label_2ba390;
            case 0x2BA394u: goto label_2ba394;
            case 0x2BA398u: goto label_2ba398;
            case 0x2BA39Cu: goto label_2ba39c;
            case 0x2BA3A0u: goto label_2ba3a0;
            case 0x2BA3A4u: goto label_2ba3a4;
            case 0x2BA3A8u: goto label_2ba3a8;
            case 0x2BA3ACu: goto label_2ba3ac;
            case 0x2BA3B0u: goto label_2ba3b0;
            case 0x2BA3B4u: goto label_2ba3b4;
            case 0x2BA3B8u: goto label_2ba3b8;
            case 0x2BA3BCu: goto label_2ba3bc;
            case 0x2BA3C0u: goto label_2ba3c0;
            case 0x2BA3C4u: goto label_2ba3c4;
            case 0x2BA3C8u: goto label_2ba3c8;
            case 0x2BA3CCu: goto label_2ba3cc;
            case 0x2BA3D0u: goto label_2ba3d0;
            case 0x2BA3D4u: goto label_2ba3d4;
            case 0x2BA3D8u: goto label_2ba3d8;
            case 0x2BA3DCu: goto label_2ba3dc;
            case 0x2BA3E0u: goto label_2ba3e0;
            case 0x2BA3E4u: goto label_2ba3e4;
            case 0x2BA3E8u: goto label_2ba3e8;
            case 0x2BA3ECu: goto label_2ba3ec;
            case 0x2BA3F0u: goto label_2ba3f0;
            case 0x2BA3F4u: goto label_2ba3f4;
            case 0x2BA3F8u: goto label_2ba3f8;
            case 0x2BA3FCu: goto label_2ba3fc;
            case 0x2BA400u: goto label_2ba400;
            case 0x2BA404u: goto label_2ba404;
            case 0x2BA408u: goto label_2ba408;
            case 0x2BA40Cu: goto label_2ba40c;
            case 0x2BA410u: goto label_2ba410;
            case 0x2BA414u: goto label_2ba414;
            case 0x2BA418u: goto label_2ba418;
            case 0x2BA41Cu: goto label_2ba41c;
            case 0x2BA420u: goto label_2ba420;
            case 0x2BA424u: goto label_2ba424;
            case 0x2BA428u: goto label_2ba428;
            case 0x2BA42Cu: goto label_2ba42c;
            case 0x2BA430u: goto label_2ba430;
            case 0x2BA434u: goto label_2ba434;
            case 0x2BA438u: goto label_2ba438;
            case 0x2BA43Cu: goto label_2ba43c;
            case 0x2BA440u: goto label_2ba440;
            case 0x2BA444u: goto label_2ba444;
            case 0x2BA448u: goto label_2ba448;
            case 0x2BA44Cu: goto label_2ba44c;
            case 0x2BA450u: goto label_2ba450;
            case 0x2BA454u: goto label_2ba454;
            case 0x2BA458u: goto label_2ba458;
            case 0x2BA45Cu: goto label_2ba45c;
            case 0x2BA460u: goto label_2ba460;
            case 0x2BA464u: goto label_2ba464;
            case 0x2BA468u: goto label_2ba468;
            case 0x2BA46Cu: goto label_2ba46c;
            case 0x2BA470u: goto label_2ba470;
            case 0x2BA474u: goto label_2ba474;
            case 0x2BA478u: goto label_2ba478;
            case 0x2BA47Cu: goto label_2ba47c;
            case 0x2BA480u: goto label_2ba480;
            case 0x2BA484u: goto label_2ba484;
            case 0x2BA488u: goto label_2ba488;
            case 0x2BA48Cu: goto label_2ba48c;
            case 0x2BA490u: goto label_2ba490;
            case 0x2BA494u: goto label_2ba494;
            case 0x2BA498u: goto label_2ba498;
            case 0x2BA49Cu: goto label_2ba49c;
            case 0x2BA4A0u: goto label_2ba4a0;
            case 0x2BA4A4u: goto label_2ba4a4;
            case 0x2BA4A8u: goto label_2ba4a8;
            case 0x2BA4ACu: goto label_2ba4ac;
            case 0x2BA4B0u: goto label_2ba4b0;
            case 0x2BA4B4u: goto label_2ba4b4;
            case 0x2BA4B8u: goto label_2ba4b8;
            case 0x2BA4BCu: goto label_2ba4bc;
            case 0x2BA4C0u: goto label_2ba4c0;
            case 0x2BA4C4u: goto label_2ba4c4;
            case 0x2BA4C8u: goto label_2ba4c8;
            case 0x2BA4CCu: goto label_2ba4cc;
            case 0x2BA4D0u: goto label_2ba4d0;
            case 0x2BA4D4u: goto label_2ba4d4;
            case 0x2BA4D8u: goto label_2ba4d8;
            case 0x2BA4DCu: goto label_2ba4dc;
            case 0x2BA4E0u: goto label_2ba4e0;
            case 0x2BA4E4u: goto label_2ba4e4;
            case 0x2BA4E8u: goto label_2ba4e8;
            case 0x2BA4ECu: goto label_2ba4ec;
            case 0x2BA4F0u: goto label_2ba4f0;
            case 0x2BA4F4u: goto label_2ba4f4;
            case 0x2BA4F8u: goto label_2ba4f8;
            case 0x2BA4FCu: goto label_2ba4fc;
            case 0x2BA500u: goto label_2ba500;
            case 0x2BA504u: goto label_2ba504;
            case 0x2BA508u: goto label_2ba508;
            case 0x2BA50Cu: goto label_2ba50c;
            case 0x2BA510u: goto label_2ba510;
            case 0x2BA514u: goto label_2ba514;
            case 0x2BA518u: goto label_2ba518;
            case 0x2BA51Cu: goto label_2ba51c;
            case 0x2BA520u: goto label_2ba520;
            case 0x2BA524u: goto label_2ba524;
            case 0x2BA528u: goto label_2ba528;
            case 0x2BA52Cu: goto label_2ba52c;
            case 0x2BA530u: goto label_2ba530;
            case 0x2BA534u: goto label_2ba534;
            case 0x2BA538u: goto label_2ba538;
            case 0x2BA53Cu: goto label_2ba53c;
            case 0x2BA540u: goto label_2ba540;
            case 0x2BA544u: goto label_2ba544;
            case 0x2BA548u: goto label_2ba548;
            case 0x2BA54Cu: goto label_2ba54c;
            case 0x2BA550u: goto label_2ba550;
            case 0x2BA554u: goto label_2ba554;
            case 0x2BA558u: goto label_2ba558;
            case 0x2BA55Cu: goto label_2ba55c;
            case 0x2BA560u: goto label_2ba560;
            case 0x2BA564u: goto label_2ba564;
            case 0x2BA568u: goto label_2ba568;
            case 0x2BA56Cu: goto label_2ba56c;
            case 0x2BA570u: goto label_2ba570;
            case 0x2BA574u: goto label_2ba574;
            case 0x2BA578u: goto label_2ba578;
            case 0x2BA57Cu: goto label_2ba57c;
            case 0x2BA580u: goto label_2ba580;
            case 0x2BA584u: goto label_2ba584;
            case 0x2BA588u: goto label_2ba588;
            case 0x2BA58Cu: goto label_2ba58c;
            case 0x2BA590u: goto label_2ba590;
            case 0x2BA594u: goto label_2ba594;
            case 0x2BA598u: goto label_2ba598;
            case 0x2BA59Cu: goto label_2ba59c;
            case 0x2BA5A0u: goto label_2ba5a0;
            case 0x2BA5A4u: goto label_2ba5a4;
            case 0x2BA5A8u: goto label_2ba5a8;
            case 0x2BA5ACu: goto label_2ba5ac;
            case 0x2BA5B0u: goto label_2ba5b0;
            case 0x2BA5B4u: goto label_2ba5b4;
            case 0x2BA5B8u: goto label_2ba5b8;
            case 0x2BA5BCu: goto label_2ba5bc;
            case 0x2BA5C0u: goto label_2ba5c0;
            case 0x2BA5C4u: goto label_2ba5c4;
            case 0x2BA5C8u: goto label_2ba5c8;
            case 0x2BA5CCu: goto label_2ba5cc;
            case 0x2BA5D0u: goto label_2ba5d0;
            case 0x2BA5D4u: goto label_2ba5d4;
            case 0x2BA5D8u: goto label_2ba5d8;
            case 0x2BA5DCu: goto label_2ba5dc;
            case 0x2BA5E0u: goto label_2ba5e0;
            case 0x2BA5E4u: goto label_2ba5e4;
            case 0x2BA5E8u: goto label_2ba5e8;
            case 0x2BA5ECu: goto label_2ba5ec;
            case 0x2BA5F0u: goto label_2ba5f0;
            case 0x2BA5F4u: goto label_2ba5f4;
            case 0x2BA5F8u: goto label_2ba5f8;
            case 0x2BA5FCu: goto label_2ba5fc;
            case 0x2BA600u: goto label_2ba600;
            case 0x2BA604u: goto label_2ba604;
            case 0x2BA608u: goto label_2ba608;
            case 0x2BA60Cu: goto label_2ba60c;
            case 0x2BA610u: goto label_2ba610;
            case 0x2BA614u: goto label_2ba614;
            case 0x2BA618u: goto label_2ba618;
            case 0x2BA61Cu: goto label_2ba61c;
            case 0x2BA620u: goto label_2ba620;
            case 0x2BA624u: goto label_2ba624;
            case 0x2BA628u: goto label_2ba628;
            case 0x2BA62Cu: goto label_2ba62c;
            case 0x2BA630u: goto label_2ba630;
            case 0x2BA634u: goto label_2ba634;
            case 0x2BA638u: goto label_2ba638;
            case 0x2BA63Cu: goto label_2ba63c;
            case 0x2BA640u: goto label_2ba640;
            case 0x2BA644u: goto label_2ba644;
            case 0x2BA648u: goto label_2ba648;
            case 0x2BA64Cu: goto label_2ba64c;
            case 0x2BA650u: goto label_2ba650;
            case 0x2BA654u: goto label_2ba654;
            case 0x2BA658u: goto label_2ba658;
            case 0x2BA65Cu: goto label_2ba65c;
            case 0x2BA660u: goto label_2ba660;
            case 0x2BA664u: goto label_2ba664;
            case 0x2BA668u: goto label_2ba668;
            case 0x2BA66Cu: goto label_2ba66c;
            case 0x2BA670u: goto label_2ba670;
            case 0x2BA674u: goto label_2ba674;
            case 0x2BA678u: goto label_2ba678;
            case 0x2BA67Cu: goto label_2ba67c;
            case 0x2BA680u: goto label_2ba680;
            case 0x2BA684u: goto label_2ba684;
            case 0x2BA688u: goto label_2ba688;
            case 0x2BA68Cu: goto label_2ba68c;
            case 0x2BA690u: goto label_2ba690;
            case 0x2BA694u: goto label_2ba694;
            case 0x2BA698u: goto label_2ba698;
            case 0x2BA69Cu: goto label_2ba69c;
            case 0x2BA6A0u: goto label_2ba6a0;
            case 0x2BA6A4u: goto label_2ba6a4;
            case 0x2BA6A8u: goto label_2ba6a8;
            case 0x2BA6ACu: goto label_2ba6ac;
            case 0x2BA6B0u: goto label_2ba6b0;
            case 0x2BA6B4u: goto label_2ba6b4;
            case 0x2BA6B8u: goto label_2ba6b8;
            case 0x2BA6BCu: goto label_2ba6bc;
            case 0x2BA6C0u: goto label_2ba6c0;
            case 0x2BA6C4u: goto label_2ba6c4;
            case 0x2BA6C8u: goto label_2ba6c8;
            case 0x2BA6CCu: goto label_2ba6cc;
            case 0x2BA6D0u: goto label_2ba6d0;
            case 0x2BA6D4u: goto label_2ba6d4;
            case 0x2BA6D8u: goto label_2ba6d8;
            case 0x2BA6DCu: goto label_2ba6dc;
            case 0x2BA6E0u: goto label_2ba6e0;
            case 0x2BA6E4u: goto label_2ba6e4;
            case 0x2BA6E8u: goto label_2ba6e8;
            case 0x2BA6ECu: goto label_2ba6ec;
            case 0x2BA6F0u: goto label_2ba6f0;
            case 0x2BA6F4u: goto label_2ba6f4;
            case 0x2BA6F8u: goto label_2ba6f8;
            case 0x2BA6FCu: goto label_2ba6fc;
            case 0x2BA700u: goto label_2ba700;
            case 0x2BA704u: goto label_2ba704;
            case 0x2BA708u: goto label_2ba708;
            case 0x2BA70Cu: goto label_2ba70c;
            case 0x2BA710u: goto label_2ba710;
            case 0x2BA714u: goto label_2ba714;
            case 0x2BA718u: goto label_2ba718;
            case 0x2BA71Cu: goto label_2ba71c;
            case 0x2BA720u: goto label_2ba720;
            case 0x2BA724u: goto label_2ba724;
            case 0x2BA728u: goto label_2ba728;
            case 0x2BA72Cu: goto label_2ba72c;
            case 0x2BA730u: goto label_2ba730;
            case 0x2BA734u: goto label_2ba734;
            case 0x2BA738u: goto label_2ba738;
            case 0x2BA73Cu: goto label_2ba73c;
            case 0x2BA740u: goto label_2ba740;
            case 0x2BA744u: goto label_2ba744;
            case 0x2BA748u: goto label_2ba748;
            case 0x2BA74Cu: goto label_2ba74c;
            case 0x2BA750u: goto label_2ba750;
            case 0x2BA754u: goto label_2ba754;
            case 0x2BA758u: goto label_2ba758;
            case 0x2BA75Cu: goto label_2ba75c;
            case 0x2BA760u: goto label_2ba760;
            case 0x2BA764u: goto label_2ba764;
            case 0x2BA768u: goto label_2ba768;
            case 0x2BA76Cu: goto label_2ba76c;
            case 0x2BA770u: goto label_2ba770;
            case 0x2BA774u: goto label_2ba774;
            case 0x2BA778u: goto label_2ba778;
            case 0x2BA77Cu: goto label_2ba77c;
            case 0x2BA780u: goto label_2ba780;
            case 0x2BA784u: goto label_2ba784;
            case 0x2BA788u: goto label_2ba788;
            case 0x2BA78Cu: goto label_2ba78c;
            case 0x2BA790u: goto label_2ba790;
            case 0x2BA794u: goto label_2ba794;
            case 0x2BA798u: goto label_2ba798;
            case 0x2BA79Cu: goto label_2ba79c;
            case 0x2BA7A0u: goto label_2ba7a0;
            case 0x2BA7A4u: goto label_2ba7a4;
            case 0x2BA7A8u: goto label_2ba7a8;
            case 0x2BA7ACu: goto label_2ba7ac;
            case 0x2BA7B0u: goto label_2ba7b0;
            case 0x2BA7B4u: goto label_2ba7b4;
            case 0x2BA7B8u: goto label_2ba7b8;
            case 0x2BA7BCu: goto label_2ba7bc;
            case 0x2BA7C0u: goto label_2ba7c0;
            case 0x2BA7C4u: goto label_2ba7c4;
            case 0x2BA7C8u: goto label_2ba7c8;
            case 0x2BA7CCu: goto label_2ba7cc;
            case 0x2BA7D0u: goto label_2ba7d0;
            case 0x2BA7D4u: goto label_2ba7d4;
            case 0x2BA7D8u: goto label_2ba7d8;
            case 0x2BA7DCu: goto label_2ba7dc;
            case 0x2BA7E0u: goto label_2ba7e0;
            case 0x2BA7E4u: goto label_2ba7e4;
            case 0x2BA7E8u: goto label_2ba7e8;
            case 0x2BA7ECu: goto label_2ba7ec;
            case 0x2BA7F0u: goto label_2ba7f0;
            case 0x2BA7F4u: goto label_2ba7f4;
            case 0x2BA7F8u: goto label_2ba7f8;
            case 0x2BA7FCu: goto label_2ba7fc;
            case 0x2BA800u: goto label_2ba800;
            case 0x2BA804u: goto label_2ba804;
            case 0x2BA808u: goto label_2ba808;
            case 0x2BA80Cu: goto label_2ba80c;
            case 0x2BA810u: goto label_2ba810;
            case 0x2BA814u: goto label_2ba814;
            case 0x2BA818u: goto label_2ba818;
            case 0x2BA81Cu: goto label_2ba81c;
            case 0x2BA820u: goto label_2ba820;
            case 0x2BA824u: goto label_2ba824;
            case 0x2BA828u: goto label_2ba828;
            case 0x2BA82Cu: goto label_2ba82c;
            case 0x2BA830u: goto label_2ba830;
            case 0x2BA834u: goto label_2ba834;
            case 0x2BA838u: goto label_2ba838;
            case 0x2BA83Cu: goto label_2ba83c;
            case 0x2BA840u: goto label_2ba840;
            case 0x2BA844u: goto label_2ba844;
            case 0x2BA848u: goto label_2ba848;
            case 0x2BA84Cu: goto label_2ba84c;
            case 0x2BA850u: goto label_2ba850;
            case 0x2BA854u: goto label_2ba854;
            case 0x2BA858u: goto label_2ba858;
            case 0x2BA85Cu: goto label_2ba85c;
            case 0x2BA860u: goto label_2ba860;
            case 0x2BA864u: goto label_2ba864;
            case 0x2BA868u: goto label_2ba868;
            case 0x2BA86Cu: goto label_2ba86c;
            case 0x2BA870u: goto label_2ba870;
            case 0x2BA874u: goto label_2ba874;
            case 0x2BA878u: goto label_2ba878;
            case 0x2BA87Cu: goto label_2ba87c;
            case 0x2BA880u: goto label_2ba880;
            case 0x2BA884u: goto label_2ba884;
            case 0x2BA888u: goto label_2ba888;
            case 0x2BA88Cu: goto label_2ba88c;
            case 0x2BA890u: goto label_2ba890;
            case 0x2BA894u: goto label_2ba894;
            case 0x2BA898u: goto label_2ba898;
            case 0x2BA89Cu: goto label_2ba89c;
            case 0x2BA8A0u: goto label_2ba8a0;
            case 0x2BA8A4u: goto label_2ba8a4;
            case 0x2BA8A8u: goto label_2ba8a8;
            case 0x2BA8ACu: goto label_2ba8ac;
            case 0x2BA8B0u: goto label_2ba8b0;
            case 0x2BA8B4u: goto label_2ba8b4;
            case 0x2BA8B8u: goto label_2ba8b8;
            case 0x2BA8BCu: goto label_2ba8bc;
            case 0x2BA8C0u: goto label_2ba8c0;
            case 0x2BA8C4u: goto label_2ba8c4;
            case 0x2BA8C8u: goto label_2ba8c8;
            case 0x2BA8CCu: goto label_2ba8cc;
            case 0x2BA8D0u: goto label_2ba8d0;
            case 0x2BA8D4u: goto label_2ba8d4;
            case 0x2BA8D8u: goto label_2ba8d8;
            case 0x2BA8DCu: goto label_2ba8dc;
            case 0x2BA8E0u: goto label_2ba8e0;
            case 0x2BA8E4u: goto label_2ba8e4;
            case 0x2BA8E8u: goto label_2ba8e8;
            case 0x2BA8ECu: goto label_2ba8ec;
            case 0x2BA8F0u: goto label_2ba8f0;
            case 0x2BA8F4u: goto label_2ba8f4;
            case 0x2BA8F8u: goto label_2ba8f8;
            case 0x2BA8FCu: goto label_2ba8fc;
            case 0x2BA900u: goto label_2ba900;
            case 0x2BA904u: goto label_2ba904;
            case 0x2BA908u: goto label_2ba908;
            case 0x2BA90Cu: goto label_2ba90c;
            case 0x2BA910u: goto label_2ba910;
            case 0x2BA914u: goto label_2ba914;
            case 0x2BA918u: goto label_2ba918;
            case 0x2BA91Cu: goto label_2ba91c;
            case 0x2BA920u: goto label_2ba920;
            case 0x2BA924u: goto label_2ba924;
            case 0x2BA928u: goto label_2ba928;
            case 0x2BA92Cu: goto label_2ba92c;
            case 0x2BA930u: goto label_2ba930;
            case 0x2BA934u: goto label_2ba934;
            case 0x2BA938u: goto label_2ba938;
            case 0x2BA93Cu: goto label_2ba93c;
            case 0x2BA940u: goto label_2ba940;
            case 0x2BA944u: goto label_2ba944;
            case 0x2BA948u: goto label_2ba948;
            case 0x2BA94Cu: goto label_2ba94c;
            case 0x2BA950u: goto label_2ba950;
            case 0x2BA954u: goto label_2ba954;
            case 0x2BA958u: goto label_2ba958;
            case 0x2BA95Cu: goto label_2ba95c;
            case 0x2BA960u: goto label_2ba960;
            case 0x2BA964u: goto label_2ba964;
            case 0x2BA968u: goto label_2ba968;
            case 0x2BA96Cu: goto label_2ba96c;
            case 0x2BA970u: goto label_2ba970;
            case 0x2BA974u: goto label_2ba974;
            case 0x2BA978u: goto label_2ba978;
            case 0x2BA97Cu: goto label_2ba97c;
            case 0x2BA980u: goto label_2ba980;
            case 0x2BA984u: goto label_2ba984;
            case 0x2BA988u: goto label_2ba988;
            case 0x2BA98Cu: goto label_2ba98c;
            case 0x2BA990u: goto label_2ba990;
            case 0x2BA994u: goto label_2ba994;
            case 0x2BA998u: goto label_2ba998;
            case 0x2BA99Cu: goto label_2ba99c;
            case 0x2BA9A0u: goto label_2ba9a0;
            case 0x2BA9A4u: goto label_2ba9a4;
            case 0x2BA9A8u: goto label_2ba9a8;
            case 0x2BA9ACu: goto label_2ba9ac;
            case 0x2BA9B0u: goto label_2ba9b0;
            case 0x2BA9B4u: goto label_2ba9b4;
            case 0x2BA9B8u: goto label_2ba9b8;
            case 0x2BA9BCu: goto label_2ba9bc;
            case 0x2BA9C0u: goto label_2ba9c0;
            case 0x2BA9C4u: goto label_2ba9c4;
            case 0x2BA9C8u: goto label_2ba9c8;
            case 0x2BA9CCu: goto label_2ba9cc;
            case 0x2BA9D0u: goto label_2ba9d0;
            case 0x2BA9D4u: goto label_2ba9d4;
            case 0x2BA9D8u: goto label_2ba9d8;
            case 0x2BA9DCu: goto label_2ba9dc;
            case 0x2BA9E0u: goto label_2ba9e0;
            case 0x2BA9E4u: goto label_2ba9e4;
            case 0x2BA9E8u: goto label_2ba9e8;
            case 0x2BA9ECu: goto label_2ba9ec;
            case 0x2BA9F0u: goto label_2ba9f0;
            case 0x2BA9F4u: goto label_2ba9f4;
            case 0x2BA9F8u: goto label_2ba9f8;
            case 0x2BA9FCu: goto label_2ba9fc;
            case 0x2BAA00u: goto label_2baa00;
            case 0x2BAA04u: goto label_2baa04;
            case 0x2BAA08u: goto label_2baa08;
            case 0x2BAA0Cu: goto label_2baa0c;
            case 0x2BAA10u: goto label_2baa10;
            case 0x2BAA14u: goto label_2baa14;
            case 0x2BAA18u: goto label_2baa18;
            case 0x2BAA1Cu: goto label_2baa1c;
            case 0x2BAA20u: goto label_2baa20;
            case 0x2BAA24u: goto label_2baa24;
            case 0x2BAA28u: goto label_2baa28;
            case 0x2BAA2Cu: goto label_2baa2c;
            case 0x2BAA30u: goto label_2baa30;
            case 0x2BAA34u: goto label_2baa34;
            case 0x2BAA38u: goto label_2baa38;
            case 0x2BAA3Cu: goto label_2baa3c;
            case 0x2BAA40u: goto label_2baa40;
            case 0x2BAA44u: goto label_2baa44;
            case 0x2BAA48u: goto label_2baa48;
            case 0x2BAA4Cu: goto label_2baa4c;
            case 0x2BAA50u: goto label_2baa50;
            case 0x2BAA54u: goto label_2baa54;
            case 0x2BAA58u: goto label_2baa58;
            case 0x2BAA5Cu: goto label_2baa5c;
            case 0x2BAA60u: goto label_2baa60;
            case 0x2BAA64u: goto label_2baa64;
            case 0x2BAA68u: goto label_2baa68;
            case 0x2BAA6Cu: goto label_2baa6c;
            case 0x2BAA70u: goto label_2baa70;
            case 0x2BAA74u: goto label_2baa74;
            case 0x2BAA78u: goto label_2baa78;
            case 0x2BAA7Cu: goto label_2baa7c;
            case 0x2BAA80u: goto label_2baa80;
            case 0x2BAA84u: goto label_2baa84;
            case 0x2BAA88u: goto label_2baa88;
            case 0x2BAA8Cu: goto label_2baa8c;
            case 0x2BAA90u: goto label_2baa90;
            case 0x2BAA94u: goto label_2baa94;
            case 0x2BAA98u: goto label_2baa98;
            case 0x2BAA9Cu: goto label_2baa9c;
            case 0x2BAAA0u: goto label_2baaa0;
            case 0x2BAAA4u: goto label_2baaa4;
            case 0x2BAAA8u: goto label_2baaa8;
            case 0x2BAAACu: goto label_2baaac;
            case 0x2BAAB0u: goto label_2baab0;
            case 0x2BAAB4u: goto label_2baab4;
            case 0x2BAAB8u: goto label_2baab8;
            case 0x2BAABCu: goto label_2baabc;
            case 0x2BAAC0u: goto label_2baac0;
            case 0x2BAAC4u: goto label_2baac4;
            case 0x2BAAC8u: goto label_2baac8;
            case 0x2BAACCu: goto label_2baacc;
            case 0x2BAAD0u: goto label_2baad0;
            case 0x2BAAD4u: goto label_2baad4;
            case 0x2BAAD8u: goto label_2baad8;
            case 0x2BAADCu: goto label_2baadc;
            case 0x2BAAE0u: goto label_2baae0;
            case 0x2BAAE4u: goto label_2baae4;
            case 0x2BAAE8u: goto label_2baae8;
            case 0x2BAAECu: goto label_2baaec;
            case 0x2BAAF0u: goto label_2baaf0;
            case 0x2BAAF4u: goto label_2baaf4;
            case 0x2BAAF8u: goto label_2baaf8;
            case 0x2BAAFCu: goto label_2baafc;
            case 0x2BAB00u: goto label_2bab00;
            case 0x2BAB04u: goto label_2bab04;
            case 0x2BAB08u: goto label_2bab08;
            case 0x2BAB0Cu: goto label_2bab0c;
            case 0x2BAB10u: goto label_2bab10;
            case 0x2BAB14u: goto label_2bab14;
            case 0x2BAB18u: goto label_2bab18;
            case 0x2BAB1Cu: goto label_2bab1c;
            case 0x2BAB20u: goto label_2bab20;
            case 0x2BAB24u: goto label_2bab24;
            case 0x2BAB28u: goto label_2bab28;
            case 0x2BAB2Cu: goto label_2bab2c;
            case 0x2BAB30u: goto label_2bab30;
            case 0x2BAB34u: goto label_2bab34;
            case 0x2BAB38u: goto label_2bab38;
            case 0x2BAB3Cu: goto label_2bab3c;
            case 0x2BAB40u: goto label_2bab40;
            case 0x2BAB44u: goto label_2bab44;
            case 0x2BAB48u: goto label_2bab48;
            case 0x2BAB4Cu: goto label_2bab4c;
            case 0x2BAB50u: goto label_2bab50;
            case 0x2BAB54u: goto label_2bab54;
            case 0x2BAB58u: goto label_2bab58;
            case 0x2BAB5Cu: goto label_2bab5c;
            case 0x2BAB60u: goto label_2bab60;
            case 0x2BAB64u: goto label_2bab64;
            case 0x2BAB68u: goto label_2bab68;
            case 0x2BAB6Cu: goto label_2bab6c;
            case 0x2BAB70u: goto label_2bab70;
            case 0x2BAB74u: goto label_2bab74;
            case 0x2BAB78u: goto label_2bab78;
            case 0x2BAB7Cu: goto label_2bab7c;
            case 0x2BAB80u: goto label_2bab80;
            case 0x2BAB84u: goto label_2bab84;
            case 0x2BAB88u: goto label_2bab88;
            case 0x2BAB8Cu: goto label_2bab8c;
            case 0x2BAB90u: goto label_2bab90;
            case 0x2BAB94u: goto label_2bab94;
            case 0x2BAB98u: goto label_2bab98;
            case 0x2BAB9Cu: goto label_2bab9c;
            case 0x2BABA0u: goto label_2baba0;
            case 0x2BABA4u: goto label_2baba4;
            case 0x2BABA8u: goto label_2baba8;
            case 0x2BABACu: goto label_2babac;
            case 0x2BABB0u: goto label_2babb0;
            case 0x2BABB4u: goto label_2babb4;
            case 0x2BABB8u: goto label_2babb8;
            case 0x2BABBCu: goto label_2babbc;
            case 0x2BABC0u: goto label_2babc0;
            case 0x2BABC4u: goto label_2babc4;
            case 0x2BABC8u: goto label_2babc8;
            case 0x2BABCCu: goto label_2babcc;
            case 0x2BABD0u: goto label_2babd0;
            case 0x2BABD4u: goto label_2babd4;
            case 0x2BABD8u: goto label_2babd8;
            case 0x2BABDCu: goto label_2babdc;
            case 0x2BABE0u: goto label_2babe0;
            case 0x2BABE4u: goto label_2babe4;
            case 0x2BABE8u: goto label_2babe8;
            case 0x2BABECu: goto label_2babec;
            case 0x2BABF0u: goto label_2babf0;
            case 0x2BABF4u: goto label_2babf4;
            case 0x2BABF8u: goto label_2babf8;
            case 0x2BABFCu: goto label_2babfc;
            case 0x2BAC00u: goto label_2bac00;
            case 0x2BAC04u: goto label_2bac04;
            case 0x2BAC08u: goto label_2bac08;
            case 0x2BAC0Cu: goto label_2bac0c;
            case 0x2BAC10u: goto label_2bac10;
            case 0x2BAC14u: goto label_2bac14;
            case 0x2BAC18u: goto label_2bac18;
            case 0x2BAC1Cu: goto label_2bac1c;
            case 0x2BAC20u: goto label_2bac20;
            case 0x2BAC24u: goto label_2bac24;
            case 0x2BAC28u: goto label_2bac28;
            case 0x2BAC2Cu: goto label_2bac2c;
            case 0x2BAC30u: goto label_2bac30;
            case 0x2BAC34u: goto label_2bac34;
            case 0x2BAC38u: goto label_2bac38;
            case 0x2BAC3Cu: goto label_2bac3c;
            case 0x2BAC40u: goto label_2bac40;
            case 0x2BAC44u: goto label_2bac44;
            case 0x2BAC48u: goto label_2bac48;
            case 0x2BAC4Cu: goto label_2bac4c;
            case 0x2BAC50u: goto label_2bac50;
            case 0x2BAC54u: goto label_2bac54;
            case 0x2BAC58u: goto label_2bac58;
            case 0x2BAC5Cu: goto label_2bac5c;
            case 0x2BAC60u: goto label_2bac60;
            case 0x2BAC64u: goto label_2bac64;
            case 0x2BAC68u: goto label_2bac68;
            case 0x2BAC6Cu: goto label_2bac6c;
            case 0x2BAC70u: goto label_2bac70;
            case 0x2BAC74u: goto label_2bac74;
            case 0x2BAC78u: goto label_2bac78;
            case 0x2BAC7Cu: goto label_2bac7c;
            case 0x2BAC80u: goto label_2bac80;
            case 0x2BAC84u: goto label_2bac84;
            case 0x2BAC88u: goto label_2bac88;
            case 0x2BAC8Cu: goto label_2bac8c;
            case 0x2BAC90u: goto label_2bac90;
            case 0x2BAC94u: goto label_2bac94;
            case 0x2BAC98u: goto label_2bac98;
            case 0x2BAC9Cu: goto label_2bac9c;
            case 0x2BACA0u: goto label_2baca0;
            case 0x2BACA4u: goto label_2baca4;
            case 0x2BACA8u: goto label_2baca8;
            case 0x2BACACu: goto label_2bacac;
            case 0x2BACB0u: goto label_2bacb0;
            case 0x2BACB4u: goto label_2bacb4;
            case 0x2BACB8u: goto label_2bacb8;
            case 0x2BACBCu: goto label_2bacbc;
            case 0x2BACC0u: goto label_2bacc0;
            case 0x2BACC4u: goto label_2bacc4;
            case 0x2BACC8u: goto label_2bacc8;
            case 0x2BACCCu: goto label_2baccc;
            case 0x2BACD0u: goto label_2bacd0;
            case 0x2BACD4u: goto label_2bacd4;
            case 0x2BACD8u: goto label_2bacd8;
            case 0x2BACDCu: goto label_2bacdc;
            case 0x2BACE0u: goto label_2bace0;
            case 0x2BACE4u: goto label_2bace4;
            case 0x2BACE8u: goto label_2bace8;
            case 0x2BACECu: goto label_2bacec;
            case 0x2BACF0u: goto label_2bacf0;
            case 0x2BACF4u: goto label_2bacf4;
            case 0x2BACF8u: goto label_2bacf8;
            case 0x2BACFCu: goto label_2bacfc;
            case 0x2BAD00u: goto label_2bad00;
            case 0x2BAD04u: goto label_2bad04;
            case 0x2BAD08u: goto label_2bad08;
            case 0x2BAD0Cu: goto label_2bad0c;
            case 0x2BAD10u: goto label_2bad10;
            case 0x2BAD14u: goto label_2bad14;
            case 0x2BAD18u: goto label_2bad18;
            case 0x2BAD1Cu: goto label_2bad1c;
            case 0x2BAD20u: goto label_2bad20;
            case 0x2BAD24u: goto label_2bad24;
            case 0x2BAD28u: goto label_2bad28;
            case 0x2BAD2Cu: goto label_2bad2c;
            case 0x2BAD30u: goto label_2bad30;
            case 0x2BAD34u: goto label_2bad34;
            case 0x2BAD38u: goto label_2bad38;
            case 0x2BAD3Cu: goto label_2bad3c;
            case 0x2BAD40u: goto label_2bad40;
            case 0x2BAD44u: goto label_2bad44;
            case 0x2BAD48u: goto label_2bad48;
            case 0x2BAD4Cu: goto label_2bad4c;
            case 0x2BAD50u: goto label_2bad50;
            case 0x2BAD54u: goto label_2bad54;
            case 0x2BAD58u: goto label_2bad58;
            case 0x2BAD5Cu: goto label_2bad5c;
            case 0x2BAD60u: goto label_2bad60;
            case 0x2BAD64u: goto label_2bad64;
            case 0x2BAD68u: goto label_2bad68;
            case 0x2BAD6Cu: goto label_2bad6c;
            case 0x2BAD70u: goto label_2bad70;
            case 0x2BAD74u: goto label_2bad74;
            case 0x2BAD78u: goto label_2bad78;
            case 0x2BAD7Cu: goto label_2bad7c;
            case 0x2BAD80u: goto label_2bad80;
            case 0x2BAD84u: goto label_2bad84;
            case 0x2BAD88u: goto label_2bad88;
            case 0x2BAD8Cu: goto label_2bad8c;
            case 0x2BAD90u: goto label_2bad90;
            case 0x2BAD94u: goto label_2bad94;
            case 0x2BAD98u: goto label_2bad98;
            case 0x2BAD9Cu: goto label_2bad9c;
            case 0x2BADA0u: goto label_2bada0;
            case 0x2BADA4u: goto label_2bada4;
            case 0x2BADA8u: goto label_2bada8;
            case 0x2BADACu: goto label_2badac;
            case 0x2BADB0u: goto label_2badb0;
            case 0x2BADB4u: goto label_2badb4;
            case 0x2BADB8u: goto label_2badb8;
            case 0x2BADBCu: goto label_2badbc;
            case 0x2BADC0u: goto label_2badc0;
            case 0x2BADC4u: goto label_2badc4;
            case 0x2BADC8u: goto label_2badc8;
            case 0x2BADCCu: goto label_2badcc;
            case 0x2BADD0u: goto label_2badd0;
            case 0x2BADD4u: goto label_2badd4;
            case 0x2BADD8u: goto label_2badd8;
            case 0x2BADDCu: goto label_2baddc;
            case 0x2BADE0u: goto label_2bade0;
            case 0x2BADE4u: goto label_2bade4;
            case 0x2BADE8u: goto label_2bade8;
            case 0x2BADECu: goto label_2badec;
            case 0x2BADF0u: goto label_2badf0;
            case 0x2BADF4u: goto label_2badf4;
            case 0x2BADF8u: goto label_2badf8;
            case 0x2BADFCu: goto label_2badfc;
            case 0x2BAE00u: goto label_2bae00;
            case 0x2BAE04u: goto label_2bae04;
            case 0x2BAE08u: goto label_2bae08;
            case 0x2BAE0Cu: goto label_2bae0c;
            case 0x2BAE10u: goto label_2bae10;
            case 0x2BAE14u: goto label_2bae14;
            case 0x2BAE18u: goto label_2bae18;
            case 0x2BAE1Cu: goto label_2bae1c;
            case 0x2BAE20u: goto label_2bae20;
            case 0x2BAE24u: goto label_2bae24;
            case 0x2BAE28u: goto label_2bae28;
            case 0x2BAE2Cu: goto label_2bae2c;
            case 0x2BAE30u: goto label_2bae30;
            case 0x2BAE34u: goto label_2bae34;
            case 0x2BAE38u: goto label_2bae38;
            case 0x2BAE3Cu: goto label_2bae3c;
            case 0x2BAE40u: goto label_2bae40;
            case 0x2BAE44u: goto label_2bae44;
            case 0x2BAE48u: goto label_2bae48;
            case 0x2BAE4Cu: goto label_2bae4c;
            case 0x2BAE50u: goto label_2bae50;
            case 0x2BAE54u: goto label_2bae54;
            case 0x2BAE58u: goto label_2bae58;
            case 0x2BAE5Cu: goto label_2bae5c;
            case 0x2BAE60u: goto label_2bae60;
            case 0x2BAE64u: goto label_2bae64;
            case 0x2BAE68u: goto label_2bae68;
            case 0x2BAE6Cu: goto label_2bae6c;
            case 0x2BAE70u: goto label_2bae70;
            case 0x2BAE74u: goto label_2bae74;
            case 0x2BAE78u: goto label_2bae78;
            case 0x2BAE7Cu: goto label_2bae7c;
            case 0x2BAE80u: goto label_2bae80;
            case 0x2BAE84u: goto label_2bae84;
            case 0x2BAE88u: goto label_2bae88;
            case 0x2BAE8Cu: goto label_2bae8c;
            case 0x2BAE90u: goto label_2bae90;
            case 0x2BAE94u: goto label_2bae94;
            case 0x2BAE98u: goto label_2bae98;
            case 0x2BAE9Cu: goto label_2bae9c;
            case 0x2BAEA0u: goto label_2baea0;
            case 0x2BAEA4u: goto label_2baea4;
            case 0x2BAEA8u: goto label_2baea8;
            case 0x2BAEACu: goto label_2baeac;
            case 0x2BAEB0u: goto label_2baeb0;
            case 0x2BAEB4u: goto label_2baeb4;
            case 0x2BAEB8u: goto label_2baeb8;
            case 0x2BAEBCu: goto label_2baebc;
            case 0x2BAEC0u: goto label_2baec0;
            case 0x2BAEC4u: goto label_2baec4;
            case 0x2BAEC8u: goto label_2baec8;
            case 0x2BAECCu: goto label_2baecc;
            case 0x2BAED0u: goto label_2baed0;
            case 0x2BAED4u: goto label_2baed4;
            case 0x2BAED8u: goto label_2baed8;
            case 0x2BAEDCu: goto label_2baedc;
            case 0x2BAEE0u: goto label_2baee0;
            case 0x2BAEE4u: goto label_2baee4;
            case 0x2BAEE8u: goto label_2baee8;
            case 0x2BAEECu: goto label_2baeec;
            case 0x2BAEF0u: goto label_2baef0;
            case 0x2BAEF4u: goto label_2baef4;
            case 0x2BAEF8u: goto label_2baef8;
            case 0x2BAEFCu: goto label_2baefc;
            case 0x2BAF00u: goto label_2baf00;
            case 0x2BAF04u: goto label_2baf04;
            case 0x2BAF08u: goto label_2baf08;
            case 0x2BAF0Cu: goto label_2baf0c;
            case 0x2BAF10u: goto label_2baf10;
            case 0x2BAF14u: goto label_2baf14;
            case 0x2BAF18u: goto label_2baf18;
            case 0x2BAF1Cu: goto label_2baf1c;
            case 0x2BAF20u: goto label_2baf20;
            case 0x2BAF24u: goto label_2baf24;
            case 0x2BAF28u: goto label_2baf28;
            case 0x2BAF2Cu: goto label_2baf2c;
            case 0x2BAF30u: goto label_2baf30;
            case 0x2BAF34u: goto label_2baf34;
            case 0x2BAF38u: goto label_2baf38;
            case 0x2BAF3Cu: goto label_2baf3c;
            case 0x2BAF40u: goto label_2baf40;
            case 0x2BAF44u: goto label_2baf44;
            case 0x2BAF48u: goto label_2baf48;
            case 0x2BAF4Cu: goto label_2baf4c;
            case 0x2BAF50u: goto label_2baf50;
            case 0x2BAF54u: goto label_2baf54;
            case 0x2BAF58u: goto label_2baf58;
            case 0x2BAF5Cu: goto label_2baf5c;
            case 0x2BAF60u: goto label_2baf60;
            case 0x2BAF64u: goto label_2baf64;
            case 0x2BAF68u: goto label_2baf68;
            case 0x2BAF6Cu: goto label_2baf6c;
            case 0x2BAF70u: goto label_2baf70;
            case 0x2BAF74u: goto label_2baf74;
            case 0x2BAF78u: goto label_2baf78;
            case 0x2BAF7Cu: goto label_2baf7c;
            case 0x2BAF80u: goto label_2baf80;
            case 0x2BAF84u: goto label_2baf84;
            case 0x2BAF88u: goto label_2baf88;
            case 0x2BAF8Cu: goto label_2baf8c;
            case 0x2BAF90u: goto label_2baf90;
            case 0x2BAF94u: goto label_2baf94;
            case 0x2BAF98u: goto label_2baf98;
            case 0x2BAF9Cu: goto label_2baf9c;
            case 0x2BAFA0u: goto label_2bafa0;
            case 0x2BAFA4u: goto label_2bafa4;
            case 0x2BAFA8u: goto label_2bafa8;
            case 0x2BAFACu: goto label_2bafac;
            case 0x2BAFB0u: goto label_2bafb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B9C64u;
label_2b9c64:
    // 0x2b9c64: 0x982d
    ctx->pc = 0x2b9c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c68:
    // 0x2b9c68: 0x3c04003b
    ctx->pc = 0x2b9c68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9c6c:
    // 0x2b9c6c: 0x24845c88
    ctx->pc = 0x2b9c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
label_2b9c70:
    // 0x2b9c70: 0xc0b4a34
label_2b9c74:
    if (ctx->pc == 0x2B9C74u) {
        ctx->pc = 0x2B9C74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C78u;
        goto label_2b9c78;
    }
    ctx->pc = 0x2B9C70u;
    SET_GPR_U32(ctx, 31, 0x2B9C78u);
    ctx->pc = 0x2B9C74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9C78u; }
    }
    if (ctx->pc != 0x2B9C78u) { return; }
    ctx->pc = 0x2B9C78u;
label_2b9c78:
    // 0x2b9c78: 0x8e430000
    ctx->pc = 0x2b9c78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9c7c:
    // 0x2b9c7c: 0x3c02ff00
    ctx->pc = 0x2b9c7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2b9c80:
    // 0x2b9c80: 0x621824
    ctx->pc = 0x2b9c80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9c84:
    // 0x2b9c84: 0x50620005
label_2b9c88:
    if (ctx->pc == 0x2B9C88u) {
        ctx->pc = 0x2B9C88u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2B9C8Cu;
        goto label_2b9c8c;
    }
    ctx->pc = 0x2B9C84u;
    {
        const bool branch_taken_0x2b9c84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b9c84) {
            ctx->pc = 0x2B9C88u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2B9C9Cu;
            goto label_2b9c9c;
        }
    }
    ctx->pc = 0x2B9C8Cu;
label_2b9c8c:
    // 0x2b9c8c: 0x1460000f
label_2b9c90:
    if (ctx->pc == 0x2B9C90u) {
        ctx->pc = 0x2B9C90u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9C94u;
        goto label_2b9c94;
    }
    ctx->pc = 0x2B9C8Cu;
    {
        const bool branch_taken_0x2b9c8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9C90u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9c8c) {
            ctx->pc = 0x2B9CCCu;
            goto label_2b9ccc;
        }
    }
    ctx->pc = 0x2B9C94u;
label_2b9c94:
    // 0x2b9c94: 0x8e430004
    ctx->pc = 0x2b9c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b9c98:
    // 0x2b9c98: 0x3c02ff00
    ctx->pc = 0x2b9c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2b9c9c:
    // 0x2b9c9c: 0x621824
    ctx->pc = 0x2b9c9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9ca0:
    // 0x2b9ca0: 0x50620004
label_2b9ca4:
    if (ctx->pc == 0x2B9CA4u) {
        ctx->pc = 0x2B9CA4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2B9CA8u;
        goto label_2b9ca8;
    }
    ctx->pc = 0x2B9CA0u;
    {
        const bool branch_taken_0x2b9ca0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b9ca0) {
            ctx->pc = 0x2B9CA4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x2B9CB4u;
            goto label_2b9cb4;
        }
    }
    ctx->pc = 0x2B9CA8u;
label_2b9ca8:
    // 0x2b9ca8: 0x14600008
label_2b9cac:
    if (ctx->pc == 0x2B9CACu) {
        ctx->pc = 0x2B9CACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9CB0u;
        goto label_2b9cb0;
    }
    ctx->pc = 0x2B9CA8u;
    {
        const bool branch_taken_0x2b9ca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B9CACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9ca8) {
            ctx->pc = 0x2B9CCCu;
            goto label_2b9ccc;
        }
    }
    ctx->pc = 0x2B9CB0u;
label_2b9cb0:
    // 0x2b9cb0: 0x8e430008
    ctx->pc = 0x2b9cb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b9cb4:
    // 0x2b9cb4: 0x3c02ff00
    ctx->pc = 0x2b9cb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2b9cb8:
    // 0x2b9cb8: 0x621824
    ctx->pc = 0x2b9cb8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9cbc:
    // 0x2b9cbc: 0x1062004d
label_2b9cc0:
    if (ctx->pc == 0x2B9CC0u) {
        ctx->pc = 0x2B9CC4u;
        goto label_2b9cc4;
    }
    ctx->pc = 0x2B9CBCu;
    {
        const bool branch_taken_0x2b9cbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b9cbc) {
            ctx->pc = 0x2B9DF4u;
            goto label_2b9df4;
        }
    }
    ctx->pc = 0x2B9CC4u;
label_2b9cc4:
    // 0x2b9cc4: 0x1060004b
label_2b9cc8:
    if (ctx->pc == 0x2B9CC8u) {
        ctx->pc = 0x2B9CC8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9CCCu;
        goto label_2b9ccc;
    }
    ctx->pc = 0x2B9CC4u;
    {
        const bool branch_taken_0x2b9cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9CC8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9cc4) {
            ctx->pc = 0x2B9DF4u;
            goto label_2b9df4;
        }
    }
    ctx->pc = 0x2B9CCCu;
label_2b9ccc:
    // 0x2b9ccc: 0x26105ca0
    ctx->pc = 0x2b9cccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9cd0:
    // 0x2b9cd0: 0xc0be862
label_2b9cd4:
    if (ctx->pc == 0x2B9CD4u) {
        ctx->pc = 0x2B9CD4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B9CD8u;
        goto label_2b9cd8;
    }
    ctx->pc = 0x2B9CD0u;
    SET_GPR_U32(ctx, 31, 0x2B9CD8u);
    ctx->pc = 0x2B9CD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9CD8u; }
    }
    if (ctx->pc != 0x2B9CD8u) { return; }
    ctx->pc = 0x2B9CD8u;
label_2b9cd8:
    // 0x2b9cd8: 0x200202d
    ctx->pc = 0x2b9cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cdc:
    // 0x2b9cdc: 0xc0b4a34
label_2b9ce0:
    if (ctx->pc == 0x2B9CE0u) {
        ctx->pc = 0x2B9CE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CE4u;
        goto label_2b9ce4;
    }
    ctx->pc = 0x2B9CDCu;
    SET_GPR_U32(ctx, 31, 0x2B9CE4u);
    ctx->pc = 0x2B9CE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9CE4u; }
    }
    if (ctx->pc != 0x2B9CE4u) { return; }
    ctx->pc = 0x2B9CE4u;
label_2b9ce4:
    // 0x2b9ce4: 0xc0be862
label_2b9ce8:
    if (ctx->pc == 0x2B9CE8u) {
        ctx->pc = 0x2B9CE8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B9CECu;
        goto label_2b9cec;
    }
    ctx->pc = 0x2B9CE4u;
    SET_GPR_U32(ctx, 31, 0x2B9CECu);
    ctx->pc = 0x2B9CE8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9CECu; }
    }
    if (ctx->pc != 0x2B9CECu) { return; }
    ctx->pc = 0x2B9CECu;
label_2b9cec:
    // 0x2b9cec: 0x200202d
    ctx->pc = 0x2b9cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cf0:
    // 0x2b9cf0: 0xc0b4a34
label_2b9cf4:
    if (ctx->pc == 0x2B9CF4u) {
        ctx->pc = 0x2B9CF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CF8u;
        goto label_2b9cf8;
    }
    ctx->pc = 0x2B9CF0u;
    SET_GPR_U32(ctx, 31, 0x2B9CF8u);
    ctx->pc = 0x2B9CF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9CF8u; }
    }
    if (ctx->pc != 0x2B9CF8u) { return; }
    ctx->pc = 0x2B9CF8u;
label_2b9cf8:
    // 0x2b9cf8: 0xc0be862
label_2b9cfc:
    if (ctx->pc == 0x2B9CFCu) {
        ctx->pc = 0x2B9CFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B9D00u;
        goto label_2b9d00;
    }
    ctx->pc = 0x2B9CF8u;
    SET_GPR_U32(ctx, 31, 0x2B9D00u);
    ctx->pc = 0x2B9CFCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D00u; }
    }
    if (ctx->pc != 0x2B9D00u) { return; }
    ctx->pc = 0x2B9D00u;
label_2b9d00:
    // 0x2b9d00: 0x200202d
    ctx->pc = 0x2b9d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d04:
    // 0x2b9d04: 0xc0b4a34
label_2b9d08:
    if (ctx->pc == 0x2B9D08u) {
        ctx->pc = 0x2B9D08u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D0Cu;
        goto label_2b9d0c;
    }
    ctx->pc = 0x2B9D04u;
    SET_GPR_U32(ctx, 31, 0x2B9D0Cu);
    ctx->pc = 0x2B9D08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D0Cu; }
    }
    if (ctx->pc != 0x2B9D0Cu) { return; }
    ctx->pc = 0x2B9D0Cu;
label_2b9d0c:
    // 0x2b9d0c: 0xc0be862
label_2b9d10:
    if (ctx->pc == 0x2B9D10u) {
        ctx->pc = 0x2B9D10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B9D14u;
        goto label_2b9d14;
    }
    ctx->pc = 0x2B9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D14u);
    ctx->pc = 0x2B9D10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D14u; }
    }
    if (ctx->pc != 0x2B9D14u) { return; }
    ctx->pc = 0x2B9D14u;
label_2b9d14:
    // 0x2b9d14: 0x200202d
    ctx->pc = 0x2b9d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d18:
    // 0x2b9d18: 0xc0b4a34
label_2b9d1c:
    if (ctx->pc == 0x2B9D1Cu) {
        ctx->pc = 0x2B9D1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D20u;
        goto label_2b9d20;
    }
    ctx->pc = 0x2B9D18u;
    SET_GPR_U32(ctx, 31, 0x2B9D20u);
    ctx->pc = 0x2B9D1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D20u; }
    }
    if (ctx->pc != 0x2B9D20u) { return; }
    ctx->pc = 0x2B9D20u;
label_2b9d20:
    // 0x2b9d20: 0x3c11003b
    ctx->pc = 0x2b9d20u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_2b9d24:
    // 0x2b9d24: 0x26314678
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 18040));
label_2b9d28:
    // 0x2b9d28: 0xc0b4a34
label_2b9d2c:
    if (ctx->pc == 0x2B9D2Cu) {
        ctx->pc = 0x2B9D2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D30u;
        goto label_2b9d30;
    }
    ctx->pc = 0x2B9D28u;
    SET_GPR_U32(ctx, 31, 0x2B9D30u);
    ctx->pc = 0x2B9D2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D30u; }
    }
    if (ctx->pc != 0x2B9D30u) { return; }
    ctx->pc = 0x2B9D30u;
label_2b9d30:
    // 0x2b9d30: 0x3c04003b
    ctx->pc = 0x2b9d30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9d34:
    // 0x2b9d34: 0xc0b4a34
label_2b9d38:
    if (ctx->pc == 0x2B9D38u) {
        ctx->pc = 0x2B9D38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23728));
        ctx->pc = 0x2B9D3Cu;
        goto label_2b9d3c;
    }
    ctx->pc = 0x2B9D34u;
    SET_GPR_U32(ctx, 31, 0x2B9D3Cu);
    ctx->pc = 0x2B9D38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23728));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D3Cu; }
    }
    if (ctx->pc != 0x2B9D3Cu) { return; }
    ctx->pc = 0x2B9D3Cu;
label_2b9d3c:
    // 0x2b9d3c: 0xc6400000
    ctx->pc = 0x2b9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9d40:
    // 0x2b9d40: 0xc64c000c
    ctx->pc = 0x2b9d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9d44:
    // 0x2b9d44: 0x0
    ctx->pc = 0x2b9d44u;
    // NOP
label_2b9d48:
    // 0x2b9d48: 0x0
    ctx->pc = 0x2b9d48u;
    // NOP
label_2b9d4c:
    // 0x2b9d4c: 0x460c0303
    ctx->pc = 0x2b9d4cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2b9d50:
    // 0x2b9d50: 0xc0be862
label_2b9d54:
    if (ctx->pc == 0x2B9D54u) {
        ctx->pc = 0x2B9D58u;
        goto label_2b9d58;
    }
    ctx->pc = 0x2B9D50u;
    SET_GPR_U32(ctx, 31, 0x2B9D58u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D58u; }
    }
    if (ctx->pc != 0x2B9D58u) { return; }
    ctx->pc = 0x2B9D58u;
label_2b9d58:
    // 0x2b9d58: 0x200202d
    ctx->pc = 0x2b9d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d5c:
    // 0x2b9d5c: 0xc0b4a34
label_2b9d60:
    if (ctx->pc == 0x2B9D60u) {
        ctx->pc = 0x2B9D60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D64u;
        goto label_2b9d64;
    }
    ctx->pc = 0x2B9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D64u);
    ctx->pc = 0x2B9D60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D64u; }
    }
    if (ctx->pc != 0x2B9D64u) { return; }
    ctx->pc = 0x2B9D64u;
label_2b9d64:
    // 0x2b9d64: 0xc6400004
    ctx->pc = 0x2b9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9d68:
    // 0x2b9d68: 0xc64c000c
    ctx->pc = 0x2b9d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9d6c:
    // 0x2b9d6c: 0x0
    ctx->pc = 0x2b9d6cu;
    // NOP
label_2b9d70:
    // 0x2b9d70: 0x0
    ctx->pc = 0x2b9d70u;
    // NOP
label_2b9d74:
    // 0x2b9d74: 0x460c0303
    ctx->pc = 0x2b9d74u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2b9d78:
    // 0x2b9d78: 0xc0be862
label_2b9d7c:
    if (ctx->pc == 0x2B9D7Cu) {
        ctx->pc = 0x2B9D80u;
        goto label_2b9d80;
    }
    ctx->pc = 0x2B9D78u;
    SET_GPR_U32(ctx, 31, 0x2B9D80u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D80u; }
    }
    if (ctx->pc != 0x2B9D80u) { return; }
    ctx->pc = 0x2B9D80u;
label_2b9d80:
    // 0x2b9d80: 0x200202d
    ctx->pc = 0x2b9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d84:
    // 0x2b9d84: 0xc0b4a34
label_2b9d88:
    if (ctx->pc == 0x2B9D88u) {
        ctx->pc = 0x2B9D88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D8Cu;
        goto label_2b9d8c;
    }
    ctx->pc = 0x2B9D84u;
    SET_GPR_U32(ctx, 31, 0x2B9D8Cu);
    ctx->pc = 0x2B9D88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9D8Cu; }
    }
    if (ctx->pc != 0x2B9D8Cu) { return; }
    ctx->pc = 0x2B9D8Cu;
label_2b9d8c:
    // 0x2b9d8c: 0xc6400008
    ctx->pc = 0x2b9d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9d90:
    // 0x2b9d90: 0xc64c000c
    ctx->pc = 0x2b9d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9d94:
    // 0x2b9d94: 0x0
    ctx->pc = 0x2b9d94u;
    // NOP
label_2b9d98:
    // 0x2b9d98: 0x0
    ctx->pc = 0x2b9d98u;
    // NOP
label_2b9d9c:
    // 0x2b9d9c: 0x460c0303
    ctx->pc = 0x2b9d9cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2b9da0:
    // 0x2b9da0: 0xc0be862
label_2b9da4:
    if (ctx->pc == 0x2B9DA4u) {
        ctx->pc = 0x2B9DA8u;
        goto label_2b9da8;
    }
    ctx->pc = 0x2B9DA0u;
    SET_GPR_U32(ctx, 31, 0x2B9DA8u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DA8u; }
    }
    if (ctx->pc != 0x2B9DA8u) { return; }
    ctx->pc = 0x2B9DA8u;
label_2b9da8:
    // 0x2b9da8: 0x200202d
    ctx->pc = 0x2b9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9dac:
    // 0x2b9dac: 0xc0b4a34
label_2b9db0:
    if (ctx->pc == 0x2B9DB0u) {
        ctx->pc = 0x2B9DB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DB4u;
        goto label_2b9db4;
    }
    ctx->pc = 0x2B9DACu;
    SET_GPR_U32(ctx, 31, 0x2B9DB4u);
    ctx->pc = 0x2B9DB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DB4u; }
    }
    if (ctx->pc != 0x2B9DB4u) { return; }
    ctx->pc = 0x2B9DB4u;
label_2b9db4:
    // 0x2b9db4: 0x3c013f80
    ctx->pc = 0x2b9db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2b9db8:
    // 0x2b9db8: 0x44810000
    ctx->pc = 0x2b9db8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2b9dbc:
    // 0x2b9dbc: 0xc64c000c
    ctx->pc = 0x2b9dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9dc0:
    // 0x2b9dc0: 0x0
    ctx->pc = 0x2b9dc0u;
    // NOP
label_2b9dc4:
    // 0x2b9dc4: 0x0
    ctx->pc = 0x2b9dc4u;
    // NOP
label_2b9dc8:
    // 0x2b9dc8: 0x460c0303
    ctx->pc = 0x2b9dc8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2b9dcc:
    // 0x2b9dcc: 0xc0be862
label_2b9dd0:
    if (ctx->pc == 0x2B9DD0u) {
        ctx->pc = 0x2B9DD4u;
        goto label_2b9dd4;
    }
    ctx->pc = 0x2B9DCCu;
    SET_GPR_U32(ctx, 31, 0x2B9DD4u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DD4u; }
    }
    if (ctx->pc != 0x2B9DD4u) { return; }
    ctx->pc = 0x2B9DD4u;
label_2b9dd4:
    // 0x2b9dd4: 0x3c04003b
    ctx->pc = 0x2b9dd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9dd8:
    // 0x2b9dd8: 0x24845cc8
    ctx->pc = 0x2b9dd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23752));
label_2b9ddc:
    // 0x2b9ddc: 0xc0b4a34
label_2b9de0:
    if (ctx->pc == 0x2B9DE0u) {
        ctx->pc = 0x2B9DE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DE4u;
        goto label_2b9de4;
    }
    ctx->pc = 0x2B9DDCu;
    SET_GPR_U32(ctx, 31, 0x2B9DE4u);
    ctx->pc = 0x2B9DE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DE4u; }
    }
    if (ctx->pc != 0x2B9DE4u) { return; }
    ctx->pc = 0x2B9DE4u;
label_2b9de4:
    // 0x2b9de4: 0xc0b4a34
label_2b9de8:
    if (ctx->pc == 0x2B9DE8u) {
        ctx->pc = 0x2B9DE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DECu;
        goto label_2b9dec;
    }
    ctx->pc = 0x2B9DE4u;
    SET_GPR_U32(ctx, 31, 0x2B9DECu);
    ctx->pc = 0x2B9DE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9DECu; }
    }
    if (ctx->pc != 0x2B9DECu) { return; }
    ctx->pc = 0x2B9DECu;
label_2b9dec:
    // 0x2b9dec: 0x1000001d
label_2b9df0:
    if (ctx->pc == 0x2B9DF0u) {
        ctx->pc = 0x2B9DF0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9DF4u;
        goto label_2b9df4;
    }
    ctx->pc = 0x2B9DECu;
    {
        const bool branch_taken_0x2b9dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9DF0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9dec) {
            ctx->pc = 0x2B9E64u;
            goto label_2b9e64;
        }
    }
    ctx->pc = 0x2B9DF4u;
label_2b9df4:
    // 0x2b9df4: 0xc64c0000
    ctx->pc = 0x2b9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9df8:
    // 0x2b9df8: 0x46806320
    ctx->pc = 0x2b9df8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9dfc:
    // 0x2b9dfc: 0x3c013c00
    ctx->pc = 0x2b9dfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2b9e00:
    // 0x2b9e00: 0x4481a000
    ctx->pc = 0x2b9e00u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2b9e04:
    // 0x2b9e04: 0xc0be862
label_2b9e08:
    if (ctx->pc == 0x2B9E08u) {
        ctx->pc = 0x2B9E08u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9E0Cu;
        goto label_2b9e0c;
    }
    ctx->pc = 0x2B9E04u;
    SET_GPR_U32(ctx, 31, 0x2B9E0Cu);
    ctx->pc = 0x2B9E08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E0Cu; }
    }
    if (ctx->pc != 0x2B9E0Cu) { return; }
    ctx->pc = 0x2B9E0Cu;
label_2b9e0c:
    // 0x2b9e0c: 0x3c10003b
    ctx->pc = 0x2b9e0cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2b9e10:
    // 0x2b9e10: 0x26045ca0
    ctx->pc = 0x2b9e10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9e14:
    // 0x2b9e14: 0xc0b4a34
label_2b9e18:
    if (ctx->pc == 0x2B9E18u) {
        ctx->pc = 0x2B9E18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E1Cu;
        goto label_2b9e1c;
    }
    ctx->pc = 0x2B9E14u;
    SET_GPR_U32(ctx, 31, 0x2B9E1Cu);
    ctx->pc = 0x2B9E18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E1Cu; }
    }
    if (ctx->pc != 0x2B9E1Cu) { return; }
    ctx->pc = 0x2B9E1Cu;
label_2b9e1c:
    // 0x2b9e1c: 0xc64c0004
    ctx->pc = 0x2b9e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9e20:
    // 0x2b9e20: 0x46806320
    ctx->pc = 0x2b9e20u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9e24:
    // 0x2b9e24: 0xc0be862
label_2b9e28:
    if (ctx->pc == 0x2B9E28u) {
        ctx->pc = 0x2B9E28u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9E2Cu;
        goto label_2b9e2c;
    }
    ctx->pc = 0x2B9E24u;
    SET_GPR_U32(ctx, 31, 0x2B9E2Cu);
    ctx->pc = 0x2B9E28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E2Cu; }
    }
    if (ctx->pc != 0x2B9E2Cu) { return; }
    ctx->pc = 0x2B9E2Cu;
label_2b9e2c:
    // 0x2b9e2c: 0x26045ca0
    ctx->pc = 0x2b9e2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9e30:
    // 0x2b9e30: 0xc0b4a34
label_2b9e34:
    if (ctx->pc == 0x2B9E34u) {
        ctx->pc = 0x2B9E34u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E38u;
        goto label_2b9e38;
    }
    ctx->pc = 0x2B9E30u;
    SET_GPR_U32(ctx, 31, 0x2B9E38u);
    ctx->pc = 0x2B9E34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E38u; }
    }
    if (ctx->pc != 0x2B9E38u) { return; }
    ctx->pc = 0x2B9E38u;
label_2b9e38:
    // 0x2b9e38: 0xc64c0008
    ctx->pc = 0x2b9e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9e3c:
    // 0x2b9e3c: 0x46806320
    ctx->pc = 0x2b9e3cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9e40:
    // 0x2b9e40: 0xc0be862
label_2b9e44:
    if (ctx->pc == 0x2B9E44u) {
        ctx->pc = 0x2B9E44u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9E48u;
        goto label_2b9e48;
    }
    ctx->pc = 0x2B9E40u;
    SET_GPR_U32(ctx, 31, 0x2B9E48u);
    ctx->pc = 0x2B9E44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E48u; }
    }
    if (ctx->pc != 0x2B9E48u) { return; }
    ctx->pc = 0x2B9E48u;
label_2b9e48:
    // 0x2b9e48: 0x26045ca0
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9e4c:
    // 0x2b9e4c: 0xc0b4a34
label_2b9e50:
    if (ctx->pc == 0x2B9E50u) {
        ctx->pc = 0x2B9E50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E54u;
        goto label_2b9e54;
    }
    ctx->pc = 0x2B9E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E54u);
    ctx->pc = 0x2B9E50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E54u; }
    }
    if (ctx->pc != 0x2B9E54u) { return; }
    ctx->pc = 0x2B9E54u;
label_2b9e54:
    // 0x2b9e54: 0x3c04003b
    ctx->pc = 0x2b9e54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9e58:
    // 0x2b9e58: 0xc0b4a34
label_2b9e5c:
    if (ctx->pc == 0x2B9E5Cu) {
        ctx->pc = 0x2B9E5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B9E60u;
        goto label_2b9e60;
    }
    ctx->pc = 0x2B9E58u;
    SET_GPR_U32(ctx, 31, 0x2B9E60u);
    ctx->pc = 0x2B9E5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E60u; }
    }
    if (ctx->pc != 0x2B9E60u) { return; }
    ctx->pc = 0x2B9E60u;
label_2b9e60:
    // 0x2b9e60: 0x3c04003b
    ctx->pc = 0x2b9e60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9e64:
    // 0x2b9e64: 0xc0b4a34
label_2b9e68:
    if (ctx->pc == 0x2B9E68u) {
        ctx->pc = 0x2B9E68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
        ctx->pc = 0x2B9E6Cu;
        goto label_2b9e6c;
    }
    ctx->pc = 0x2B9E64u;
    SET_GPR_U32(ctx, 31, 0x2B9E6Cu);
    ctx->pc = 0x2B9E68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E6Cu; }
    }
    if (ctx->pc != 0x2B9E6Cu) { return; }
    ctx->pc = 0x2B9E6Cu;
label_2b9e6c:
    // 0x2b9e6c: 0x8e450010
    ctx->pc = 0x2b9e6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2b9e70:
    // 0x2b9e70: 0x8e420014
    ctx->pc = 0x2b9e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b9e74:
    // 0x2b9e74: 0xa21025
    ctx->pc = 0x2b9e74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b9e78:
    // 0x2b9e78: 0x8e430018
    ctx->pc = 0x2b9e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2b9e7c:
    // 0x2b9e7c: 0x431025
    ctx->pc = 0x2b9e7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9e80:
    // 0x2b9e80: 0x8e43001c
    ctx->pc = 0x2b9e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2b9e84:
    // 0x2b9e84: 0x431025
    ctx->pc = 0x2b9e84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9e88:
    // 0x2b9e88: 0x3c03ffff
    ctx->pc = 0x2b9e88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2b9e8c:
    // 0x2b9e8c: 0x3463ff00
    ctx->pc = 0x2b9e8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
label_2b9e90:
    // 0x2b9e90: 0x431024
    ctx->pc = 0x2b9e90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9e94:
    // 0x2b9e94: 0x10400015
label_2b9e98:
    if (ctx->pc == 0x2B9E98u) {
        ctx->pc = 0x2B9E98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9E9Cu;
        goto label_2b9e9c;
    }
    ctx->pc = 0x2B9E94u;
    {
        const bool branch_taken_0x2b9e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9E98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9e94) {
            ctx->pc = 0x2B9EECu;
            goto label_2b9eec;
        }
    }
    ctx->pc = 0x2B9E9Cu;
label_2b9e9c:
    // 0x2b9e9c: 0xc0b4a34
label_2b9ea0:
    if (ctx->pc == 0x2B9EA0u) {
        ctx->pc = 0x2B9EA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23792));
        ctx->pc = 0x2B9EA4u;
        goto label_2b9ea4;
    }
    ctx->pc = 0x2B9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B9EA4u);
    ctx->pc = 0x2B9EA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23792));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9EA4u; }
    }
    if (ctx->pc != 0x2B9EA4u) { return; }
    ctx->pc = 0x2B9EA4u;
label_2b9ea4:
    // 0x2b9ea4: 0xc6400014
    ctx->pc = 0x2b9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9ea8:
    // 0x2b9ea8: 0x46800020
    ctx->pc = 0x2b9ea8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2b9eac:
    // 0x2b9eac: 0x3c013c00
    ctx->pc = 0x2b9eacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2b9eb0:
    // 0x2b9eb0: 0x44816000
    ctx->pc = 0x2b9eb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2b9eb4:
    // 0x2b9eb4: 0xc0be862
label_2b9eb8:
    if (ctx->pc == 0x2B9EB8u) {
        ctx->pc = 0x2B9EB8u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x2B9EBCu;
        goto label_2b9ebc;
    }
    ctx->pc = 0x2B9EB4u;
    SET_GPR_U32(ctx, 31, 0x2B9EBCu);
    ctx->pc = 0x2B9EB8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9EBCu; }
    }
    if (ctx->pc != 0x2B9EBCu) { return; }
    ctx->pc = 0x2B9EBCu;
label_2b9ebc:
    // 0x2b9ebc: 0x3c04003b
    ctx->pc = 0x2b9ebcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9ec0:
    // 0x2b9ec0: 0x24845ca0
    ctx->pc = 0x2b9ec0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23712));
label_2b9ec4:
    // 0x2b9ec4: 0xc0b4a34
label_2b9ec8:
    if (ctx->pc == 0x2B9EC8u) {
        ctx->pc = 0x2B9EC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9ECCu;
        goto label_2b9ecc;
    }
    ctx->pc = 0x2B9EC4u;
    SET_GPR_U32(ctx, 31, 0x2B9ECCu);
    ctx->pc = 0x2B9EC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ECCu; }
    }
    if (ctx->pc != 0x2B9ECCu) { return; }
    ctx->pc = 0x2B9ECCu;
label_2b9ecc:
    // 0x2b9ecc: 0xc0be862
label_2b9ed0:
    if (ctx->pc == 0x2B9ED0u) {
        ctx->pc = 0x2B9ED0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B9ED4u;
        goto label_2b9ed4;
    }
    ctx->pc = 0x2B9ECCu;
    SET_GPR_U32(ctx, 31, 0x2B9ED4u);
    ctx->pc = 0x2B9ED0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ED4u; }
    }
    if (ctx->pc != 0x2B9ED4u) { return; }
    ctx->pc = 0x2B9ED4u;
label_2b9ed4:
    // 0x2b9ed4: 0x3c04003b
    ctx->pc = 0x2b9ed4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9ed8:
    // 0x2b9ed8: 0x24845cc8
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23752));
label_2b9edc:
    // 0x2b9edc: 0xc0b4a34
label_2b9ee0:
    if (ctx->pc == 0x2B9EE0u) {
        ctx->pc = 0x2B9EE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EE4u;
        goto label_2b9ee4;
    }
    ctx->pc = 0x2B9EDCu;
    SET_GPR_U32(ctx, 31, 0x2B9EE4u);
    ctx->pc = 0x2B9EE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9EE4u; }
    }
    if (ctx->pc != 0x2B9EE4u) { return; }
    ctx->pc = 0x2B9EE4u;
label_2b9ee4:
    // 0x2b9ee4: 0x10000019
label_2b9ee8:
    if (ctx->pc == 0x2B9EE8u) {
        ctx->pc = 0x2B9EE8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9EECu;
        goto label_2b9eec;
    }
    ctx->pc = 0x2B9EE4u;
    {
        const bool branch_taken_0x2b9ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9EE8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b9ee4) {
            ctx->pc = 0x2B9F4Cu;
            goto label_2b9f4c;
        }
    }
    ctx->pc = 0x2B9EECu;
label_2b9eec:
    // 0x2b9eec: 0xc64c0010
    ctx->pc = 0x2b9eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9ef0:
    // 0x2b9ef0: 0x46806320
    ctx->pc = 0x2b9ef0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9ef4:
    // 0x2b9ef4: 0x3c013c00
    ctx->pc = 0x2b9ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2b9ef8:
    // 0x2b9ef8: 0x4481a000
    ctx->pc = 0x2b9ef8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2b9efc:
    // 0x2b9efc: 0xc0be862
label_2b9f00:
    if (ctx->pc == 0x2B9F00u) {
        ctx->pc = 0x2B9F00u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9F04u;
        goto label_2b9f04;
    }
    ctx->pc = 0x2B9EFCu;
    SET_GPR_U32(ctx, 31, 0x2B9F04u);
    ctx->pc = 0x2B9F00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F04u; }
    }
    if (ctx->pc != 0x2B9F04u) { return; }
    ctx->pc = 0x2B9F04u;
label_2b9f04:
    // 0x2b9f04: 0x3c10003b
    ctx->pc = 0x2b9f04u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2b9f08:
    // 0x2b9f08: 0x26045ca0
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9f0c:
    // 0x2b9f0c: 0xc0b4a34
label_2b9f10:
    if (ctx->pc == 0x2B9F10u) {
        ctx->pc = 0x2B9F10u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F14u;
        goto label_2b9f14;
    }
    ctx->pc = 0x2B9F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F14u);
    ctx->pc = 0x2B9F10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F14u; }
    }
    if (ctx->pc != 0x2B9F14u) { return; }
    ctx->pc = 0x2B9F14u;
label_2b9f14:
    // 0x2b9f14: 0xc64c0014
    ctx->pc = 0x2b9f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9f18:
    // 0x2b9f18: 0x46806320
    ctx->pc = 0x2b9f18u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9f1c:
    // 0x2b9f1c: 0xc0be862
label_2b9f20:
    if (ctx->pc == 0x2B9F20u) {
        ctx->pc = 0x2B9F20u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9F24u;
        goto label_2b9f24;
    }
    ctx->pc = 0x2B9F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F24u);
    ctx->pc = 0x2B9F20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F24u; }
    }
    if (ctx->pc != 0x2B9F24u) { return; }
    ctx->pc = 0x2B9F24u;
label_2b9f24:
    // 0x2b9f24: 0x26045ca0
    ctx->pc = 0x2b9f24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9f28:
    // 0x2b9f28: 0xc0b4a34
label_2b9f2c:
    if (ctx->pc == 0x2B9F2Cu) {
        ctx->pc = 0x2B9F2Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F30u;
        goto label_2b9f30;
    }
    ctx->pc = 0x2B9F28u;
    SET_GPR_U32(ctx, 31, 0x2B9F30u);
    ctx->pc = 0x2B9F2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F30u; }
    }
    if (ctx->pc != 0x2B9F30u) { return; }
    ctx->pc = 0x2B9F30u;
label_2b9f30:
    // 0x2b9f30: 0xc64c0018
    ctx->pc = 0x2b9f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b9f34:
    // 0x2b9f34: 0x46806320
    ctx->pc = 0x2b9f34u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2b9f38:
    // 0x2b9f38: 0xc0be862
label_2b9f3c:
    if (ctx->pc == 0x2B9F3Cu) {
        ctx->pc = 0x2B9F3Cu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2B9F40u;
        goto label_2b9f40;
    }
    ctx->pc = 0x2B9F38u;
    SET_GPR_U32(ctx, 31, 0x2B9F40u);
    ctx->pc = 0x2B9F3Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F40u; }
    }
    if (ctx->pc != 0x2B9F40u) { return; }
    ctx->pc = 0x2B9F40u;
label_2b9f40:
    // 0x2b9f40: 0x26045ca0
    ctx->pc = 0x2b9f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2b9f44:
    // 0x2b9f44: 0xc0b4a34
label_2b9f48:
    if (ctx->pc == 0x2B9F48u) {
        ctx->pc = 0x2B9F48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F4Cu;
        goto label_2b9f4c;
    }
    ctx->pc = 0x2B9F44u;
    SET_GPR_U32(ctx, 31, 0x2B9F4Cu);
    ctx->pc = 0x2B9F48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F4Cu; }
    }
    if (ctx->pc != 0x2B9F4Cu) { return; }
    ctx->pc = 0x2B9F4Cu;
label_2b9f4c:
    // 0x2b9f4c: 0x3c04003b
    ctx->pc = 0x2b9f4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9f50:
    // 0x2b9f50: 0x24845d08
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23816));
label_2b9f54:
    // 0x2b9f54: 0xc0b4a34
label_2b9f58:
    if (ctx->pc == 0x2B9F58u) {
        ctx->pc = 0x2B9F58u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2B9F5Cu;
        goto label_2b9f5c;
    }
    ctx->pc = 0x2B9F54u;
    SET_GPR_U32(ctx, 31, 0x2B9F5Cu);
    ctx->pc = 0x2B9F58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F5Cu; }
    }
    if (ctx->pc != 0x2B9F5Cu) { return; }
    ctx->pc = 0x2B9F5Cu;
label_2b9f5c:
    // 0x2b9f5c: 0x8e43001c
    ctx->pc = 0x2b9f5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2b9f60:
    // 0x2b9f60: 0x24020080
    ctx->pc = 0x2b9f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2b9f64:
    // 0x2b9f64: 0x14620006
label_2b9f68:
    if (ctx->pc == 0x2B9F68u) {
        ctx->pc = 0x2B9F68u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2B9F6Cu;
        goto label_2b9f6c;
    }
    ctx->pc = 0x2B9F64u;
    {
        const bool branch_taken_0x2b9f64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B9F68u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2b9f64) {
            ctx->pc = 0x2B9F80u;
            goto label_2b9f80;
        }
    }
    ctx->pc = 0x2B9F6Cu;
label_2b9f6c:
    // 0x2b9f6c: 0x3c04003b
    ctx->pc = 0x2b9f6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9f70:
    // 0x2b9f70: 0xc0b4a34
label_2b9f74:
    if (ctx->pc == 0x2B9F74u) {
        ctx->pc = 0x2B9F74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
        ctx->pc = 0x2B9F78u;
        goto label_2b9f78;
    }
    ctx->pc = 0x2B9F70u;
    SET_GPR_U32(ctx, 31, 0x2B9F78u);
    ctx->pc = 0x2B9F74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F78u; }
    }
    if (ctx->pc != 0x2B9F78u) { return; }
    ctx->pc = 0x2B9F78u;
label_2b9f78:
    // 0x2b9f78: 0x1000001a
label_2b9f7c:
    if (ctx->pc == 0x2B9F7Cu) {
        ctx->pc = 0x2B9F7Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9F80u;
        goto label_2b9f80;
    }
    ctx->pc = 0x2B9F78u;
    {
        const bool branch_taken_0x2b9f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9F7Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9f78) {
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x54620006
label_2b9f84:
    if (ctx->pc == 0x2B9F84u) {
        ctx->pc = 0x2B9F84u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2B9F88u;
        goto label_2b9f88;
    }
    ctx->pc = 0x2B9F80u;
    {
        const bool branch_taken_0x2b9f80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b9f80) {
            ctx->pc = 0x2B9F84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2B9F9Cu;
            goto label_2b9f9c;
        }
    }
    ctx->pc = 0x2B9F88u;
label_2b9f88:
    // 0x2b9f88: 0x3c04003b
    ctx->pc = 0x2b9f88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9f8c:
    // 0x2b9f8c: 0xc0b4a34
label_2b9f90:
    if (ctx->pc == 0x2B9F90u) {
        ctx->pc = 0x2B9F90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
        ctx->pc = 0x2B9F94u;
        goto label_2b9f94;
    }
    ctx->pc = 0x2B9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F94u);
    ctx->pc = 0x2B9F90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F94u; }
    }
    if (ctx->pc != 0x2B9F94u) { return; }
    ctx->pc = 0x2B9F94u;
label_2b9f94:
    // 0x2b9f94: 0x10000013
label_2b9f98:
    if (ctx->pc == 0x2B9F98u) {
        ctx->pc = 0x2B9F98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9F9Cu;
        goto label_2b9f9c;
    }
    ctx->pc = 0x2B9F94u;
    {
        const bool branch_taken_0x2b9f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9F98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9f94) {
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9F9Cu;
label_2b9f9c:
    // 0x2b9f9c: 0x54400006
label_2b9fa0:
    if (ctx->pc == 0x2B9FA0u) {
        ctx->pc = 0x2B9FA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2B9FA4u;
        goto label_2b9fa4;
    }
    ctx->pc = 0x2B9F9Cu;
    {
        const bool branch_taken_0x2b9f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b9f9c) {
            ctx->pc = 0x2B9FA0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2B9FB8u;
            goto label_2b9fb8;
        }
    }
    ctx->pc = 0x2B9FA4u;
label_2b9fa4:
    // 0x2b9fa4: 0x3c04003b
    ctx->pc = 0x2b9fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9fa8:
    // 0x2b9fa8: 0xc0b4a34
label_2b9fac:
    if (ctx->pc == 0x2B9FACu) {
        ctx->pc = 0x2B9FACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
        ctx->pc = 0x2B9FB0u;
        goto label_2b9fb0;
    }
    ctx->pc = 0x2B9FA8u;
    SET_GPR_U32(ctx, 31, 0x2B9FB0u);
    ctx->pc = 0x2B9FACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FB0u; }
    }
    if (ctx->pc != 0x2B9FB0u) { return; }
    ctx->pc = 0x2B9FB0u;
label_2b9fb0:
    // 0x2b9fb0: 0x1000000c
label_2b9fb4:
    if (ctx->pc == 0x2B9FB4u) {
        ctx->pc = 0x2B9FB4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9FB8u;
        goto label_2b9fb8;
    }
    ctx->pc = 0x2B9FB0u;
    {
        const bool branch_taken_0x2b9fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9FB4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9fb0) {
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FB8u;
label_2b9fb8:
    // 0x2b9fb8: 0x24027fff
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_2b9fbc:
    // 0x2b9fbc: 0x54620006
label_2b9fc0:
    if (ctx->pc == 0x2B9FC0u) {
        ctx->pc = 0x2B9FC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9FC4u;
        goto label_2b9fc4;
    }
    ctx->pc = 0x2B9FBCu;
    {
        const bool branch_taken_0x2b9fbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b9fbc) {
            ctx->pc = 0x2B9FC0u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2B9FD8u;
            goto label_2b9fd8;
        }
    }
    ctx->pc = 0x2B9FC4u;
label_2b9fc4:
    // 0x2b9fc4: 0x3c04003b
    ctx->pc = 0x2b9fc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9fc8:
    // 0x2b9fc8: 0xc0b4a34
label_2b9fcc:
    if (ctx->pc == 0x2B9FCCu) {
        ctx->pc = 0x2B9FCCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
        ctx->pc = 0x2B9FD0u;
        goto label_2b9fd0;
    }
    ctx->pc = 0x2B9FC8u;
    SET_GPR_U32(ctx, 31, 0x2B9FD0u);
    ctx->pc = 0x2B9FCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FD0u; }
    }
    if (ctx->pc != 0x2B9FD0u) { return; }
    ctx->pc = 0x2B9FD0u;
label_2b9fd0:
    // 0x2b9fd0: 0x10000004
label_2b9fd4:
    if (ctx->pc == 0x2B9FD4u) {
        ctx->pc = 0x2B9FD4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B9FD8u;
        goto label_2b9fd8;
    }
    ctx->pc = 0x2B9FD0u;
    {
        const bool branch_taken_0x2b9fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9FD4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9fd0) {
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FD8u;
label_2b9fd8:
    // 0x2b9fd8: 0xc0b4a34
label_2b9fdc:
    if (ctx->pc == 0x2B9FDCu) {
        ctx->pc = 0x2B9FDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
        ctx->pc = 0x2B9FE0u;
        goto label_2b9fe0;
    }
    ctx->pc = 0x2B9FD8u;
    SET_GPR_U32(ctx, 31, 0x2B9FE0u);
    ctx->pc = 0x2B9FDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FE0u; }
    }
    if (ctx->pc != 0x2B9FE0u) { return; }
    ctx->pc = 0x2B9FE0u;
label_2b9fe0:
    // 0x2b9fe0: 0x3c04003b
    ctx->pc = 0x2b9fe0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9fe4:
    // 0x2b9fe4: 0xc0b4a34
label_2b9fe8:
    if (ctx->pc == 0x2B9FE8u) {
        ctx->pc = 0x2B9FE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B9FECu;
        goto label_2b9fec;
    }
    ctx->pc = 0x2B9FE4u;
    SET_GPR_U32(ctx, 31, 0x2B9FECu);
    ctx->pc = 0x2B9FE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FECu; }
    }
    if (ctx->pc != 0x2B9FECu) { return; }
    ctx->pc = 0x2B9FECu;
label_2b9fec:
    // 0x2b9fec: 0x3c04003b
    ctx->pc = 0x2b9fecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b9ff0:
    // 0x2b9ff0: 0xc0b4a34
label_2b9ff4:
    if (ctx->pc == 0x2B9FF4u) {
        ctx->pc = 0x2B9FF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
        ctx->pc = 0x2B9FF8u;
        goto label_2b9ff8;
    }
    ctx->pc = 0x2B9FF0u;
    SET_GPR_U32(ctx, 31, 0x2B9FF8u);
    ctx->pc = 0x2B9FF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FF8u; }
    }
    if (ctx->pc != 0x2B9FF8u) { return; }
    ctx->pc = 0x2B9FF8u;
label_2b9ff8:
    // 0x2b9ff8: 0x8e420010
    ctx->pc = 0x2b9ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2b9ffc:
    // 0x2b9ffc: 0x8e430014
    ctx->pc = 0x2b9ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ba000:
    // 0x2ba000: 0x431025
    ctx->pc = 0x2ba000u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba004:
    // 0x2ba004: 0x8e430018
    ctx->pc = 0x2ba004u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2ba008:
    // 0x2ba008: 0x431025
    ctx->pc = 0x2ba008u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba00c:
    // 0x2ba00c: 0x8e43001c
    ctx->pc = 0x2ba00cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba010:
    // 0x2ba010: 0x431025
    ctx->pc = 0x2ba010u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba014:
    // 0x2ba014: 0x3c03ffff
    ctx->pc = 0x2ba014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2ba018:
    // 0x2ba018: 0x3463ff00
    ctx->pc = 0x2ba018u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
label_2ba01c:
    // 0x2ba01c: 0x431024
    ctx->pc = 0x2ba01cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba020:
    // 0x2ba020: 0x10400018
label_2ba024:
    if (ctx->pc == 0x2BA024u) {
        ctx->pc = 0x2BA028u;
        goto label_2ba028;
    }
    ctx->pc = 0x2BA020u;
    {
        const bool branch_taken_0x2ba020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba020) {
            ctx->pc = 0x2BA084u;
            goto label_2ba084;
        }
    }
    ctx->pc = 0x2BA028u;
label_2ba028:
    // 0x2ba028: 0xc0be862
label_2ba02c:
    if (ctx->pc == 0x2BA02Cu) {
        ctx->pc = 0x2BA02Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA030u;
        goto label_2ba030;
    }
    ctx->pc = 0x2BA028u;
    SET_GPR_U32(ctx, 31, 0x2BA030u);
    ctx->pc = 0x2BA02Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA030u; }
    }
    if (ctx->pc != 0x2BA030u) { return; }
    ctx->pc = 0x2BA030u;
label_2ba030:
    // 0x2ba030: 0x3c10003b
    ctx->pc = 0x2ba030u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba034:
    // 0x2ba034: 0x26045ca0
    ctx->pc = 0x2ba034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba038:
    // 0x2ba038: 0xc0b4a34
label_2ba03c:
    if (ctx->pc == 0x2BA03Cu) {
        ctx->pc = 0x2BA03Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA040u;
        goto label_2ba040;
    }
    ctx->pc = 0x2BA038u;
    SET_GPR_U32(ctx, 31, 0x2BA040u);
    ctx->pc = 0x2BA03Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA040u; }
    }
    if (ctx->pc != 0x2BA040u) { return; }
    ctx->pc = 0x2BA040u;
label_2ba040:
    // 0x2ba040: 0xc0be862
label_2ba044:
    if (ctx->pc == 0x2BA044u) {
        ctx->pc = 0x2BA044u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA048u;
        goto label_2ba048;
    }
    ctx->pc = 0x2BA040u;
    SET_GPR_U32(ctx, 31, 0x2BA048u);
    ctx->pc = 0x2BA044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA048u; }
    }
    if (ctx->pc != 0x2BA048u) { return; }
    ctx->pc = 0x2BA048u;
label_2ba048:
    // 0x2ba048: 0x26045ca0
    ctx->pc = 0x2ba048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba04c:
    // 0x2ba04c: 0xc0b4a34
label_2ba050:
    if (ctx->pc == 0x2BA050u) {
        ctx->pc = 0x2BA050u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA054u;
        goto label_2ba054;
    }
    ctx->pc = 0x2BA04Cu;
    SET_GPR_U32(ctx, 31, 0x2BA054u);
    ctx->pc = 0x2BA050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA054u; }
    }
    if (ctx->pc != 0x2BA054u) { return; }
    ctx->pc = 0x2BA054u;
label_2ba054:
    // 0x2ba054: 0xc0be862
label_2ba058:
    if (ctx->pc == 0x2BA058u) {
        ctx->pc = 0x2BA058u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA05Cu;
        goto label_2ba05c;
    }
    ctx->pc = 0x2BA054u;
    SET_GPR_U32(ctx, 31, 0x2BA05Cu);
    ctx->pc = 0x2BA058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA05Cu; }
    }
    if (ctx->pc != 0x2BA05Cu) { return; }
    ctx->pc = 0x2BA05Cu;
label_2ba05c:
    // 0x2ba05c: 0x26045ca0
    ctx->pc = 0x2ba05cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba060:
    // 0x2ba060: 0xc0b4a34
label_2ba064:
    if (ctx->pc == 0x2BA064u) {
        ctx->pc = 0x2BA064u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA068u;
        goto label_2ba068;
    }
    ctx->pc = 0x2BA060u;
    SET_GPR_U32(ctx, 31, 0x2BA068u);
    ctx->pc = 0x2BA064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA068u; }
    }
    if (ctx->pc != 0x2BA068u) { return; }
    ctx->pc = 0x2BA068u;
label_2ba068:
    // 0x2ba068: 0xc0be862
label_2ba06c:
    if (ctx->pc == 0x2BA06Cu) {
        ctx->pc = 0x2BA06Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA070u;
        goto label_2ba070;
    }
    ctx->pc = 0x2BA068u;
    SET_GPR_U32(ctx, 31, 0x2BA070u);
    ctx->pc = 0x2BA06Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA070u; }
    }
    if (ctx->pc != 0x2BA070u) { return; }
    ctx->pc = 0x2BA070u;
label_2ba070:
    // 0x2ba070: 0x26045ca0
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba074:
    // 0x2ba074: 0xc0b4a34
label_2ba078:
    if (ctx->pc == 0x2BA078u) {
        ctx->pc = 0x2BA078u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA07Cu;
        goto label_2ba07c;
    }
    ctx->pc = 0x2BA074u;
    SET_GPR_U32(ctx, 31, 0x2BA07Cu);
    ctx->pc = 0x2BA078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA07Cu; }
    }
    if (ctx->pc != 0x2BA07Cu) { return; }
    ctx->pc = 0x2BA07Cu;
label_2ba07c:
    // 0x2ba07c: 0x10000023
label_2ba080:
    if (ctx->pc == 0x2BA080u) {
        ctx->pc = 0x2BA084u;
        goto label_2ba084;
    }
    ctx->pc = 0x2BA07Cu;
    {
        const bool branch_taken_0x2ba07c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba07c) {
            ctx->pc = 0x2BA10Cu;
            goto label_2ba10c;
        }
    }
    ctx->pc = 0x2BA084u;
label_2ba084:
    // 0x2ba084: 0xc64c0020
    ctx->pc = 0x2ba084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba088:
    // 0x2ba088: 0x46806320
    ctx->pc = 0x2ba088u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba08c:
    // 0x2ba08c: 0x3c013b80
    ctx->pc = 0x2ba08cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2ba090:
    // 0x2ba090: 0x34218081
    ctx->pc = 0x2ba090u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2ba094:
    // 0x2ba094: 0x4481a000
    ctx->pc = 0x2ba094u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba098:
    // 0x2ba098: 0xc0be862
label_2ba09c:
    if (ctx->pc == 0x2BA09Cu) {
        ctx->pc = 0x2BA09Cu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA0A0u;
        goto label_2ba0a0;
    }
    ctx->pc = 0x2BA098u;
    SET_GPR_U32(ctx, 31, 0x2BA0A0u);
    ctx->pc = 0x2BA09Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0A0u; }
    }
    if (ctx->pc != 0x2BA0A0u) { return; }
    ctx->pc = 0x2BA0A0u;
label_2ba0a0:
    // 0x2ba0a0: 0x3c10003b
    ctx->pc = 0x2ba0a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba0a4:
    // 0x2ba0a4: 0x26045ca0
    ctx->pc = 0x2ba0a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba0a8:
    // 0x2ba0a8: 0xc0b4a34
label_2ba0ac:
    if (ctx->pc == 0x2BA0ACu) {
        ctx->pc = 0x2BA0ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0B0u;
        goto label_2ba0b0;
    }
    ctx->pc = 0x2BA0A8u;
    SET_GPR_U32(ctx, 31, 0x2BA0B0u);
    ctx->pc = 0x2BA0ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0B0u; }
    }
    if (ctx->pc != 0x2BA0B0u) { return; }
    ctx->pc = 0x2BA0B0u;
label_2ba0b0:
    // 0x2ba0b0: 0xc64c0024
    ctx->pc = 0x2ba0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba0b4:
    // 0x2ba0b4: 0x46806320
    ctx->pc = 0x2ba0b4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba0b8:
    // 0x2ba0b8: 0xc0be862
label_2ba0bc:
    if (ctx->pc == 0x2BA0BCu) {
        ctx->pc = 0x2BA0BCu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA0C0u;
        goto label_2ba0c0;
    }
    ctx->pc = 0x2BA0B8u;
    SET_GPR_U32(ctx, 31, 0x2BA0C0u);
    ctx->pc = 0x2BA0BCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0C0u; }
    }
    if (ctx->pc != 0x2BA0C0u) { return; }
    ctx->pc = 0x2BA0C0u;
label_2ba0c0:
    // 0x2ba0c0: 0x26045ca0
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba0c4:
    // 0x2ba0c4: 0xc0b4a34
label_2ba0c8:
    if (ctx->pc == 0x2BA0C8u) {
        ctx->pc = 0x2BA0C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0CCu;
        goto label_2ba0cc;
    }
    ctx->pc = 0x2BA0C4u;
    SET_GPR_U32(ctx, 31, 0x2BA0CCu);
    ctx->pc = 0x2BA0C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0CCu; }
    }
    if (ctx->pc != 0x2BA0CCu) { return; }
    ctx->pc = 0x2BA0CCu;
label_2ba0cc:
    // 0x2ba0cc: 0xc64c0028
    ctx->pc = 0x2ba0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba0d0:
    // 0x2ba0d0: 0x46806320
    ctx->pc = 0x2ba0d0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba0d4:
    // 0x2ba0d4: 0xc0be862
label_2ba0d8:
    if (ctx->pc == 0x2BA0D8u) {
        ctx->pc = 0x2BA0D8u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA0DCu;
        goto label_2ba0dc;
    }
    ctx->pc = 0x2BA0D4u;
    SET_GPR_U32(ctx, 31, 0x2BA0DCu);
    ctx->pc = 0x2BA0D8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0DCu; }
    }
    if (ctx->pc != 0x2BA0DCu) { return; }
    ctx->pc = 0x2BA0DCu;
label_2ba0dc:
    // 0x2ba0dc: 0x26045ca0
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba0e0:
    // 0x2ba0e0: 0xc0b4a34
label_2ba0e4:
    if (ctx->pc == 0x2BA0E4u) {
        ctx->pc = 0x2BA0E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0E8u;
        goto label_2ba0e8;
    }
    ctx->pc = 0x2BA0E0u;
    SET_GPR_U32(ctx, 31, 0x2BA0E8u);
    ctx->pc = 0x2BA0E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0E8u; }
    }
    if (ctx->pc != 0x2BA0E8u) { return; }
    ctx->pc = 0x2BA0E8u;
label_2ba0e8:
    // 0x2ba0e8: 0x3c04003b
    ctx->pc = 0x2ba0e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba0ec:
    // 0x2ba0ec: 0xc0b4a34
label_2ba0f0:
    if (ctx->pc == 0x2BA0F0u) {
        ctx->pc = 0x2BA0F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23920));
        ctx->pc = 0x2BA0F4u;
        goto label_2ba0f4;
    }
    ctx->pc = 0x2BA0ECu;
    SET_GPR_U32(ctx, 31, 0x2BA0F4u);
    ctx->pc = 0x2BA0F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23920));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0F4u; }
    }
    if (ctx->pc != 0x2BA0F4u) { return; }
    ctx->pc = 0x2BA0F4u;
label_2ba0f4:
    // 0x2ba0f4: 0x3c04003b
    ctx->pc = 0x2ba0f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba0f8:
    // 0x2ba0f8: 0x24845d80
    ctx->pc = 0x2ba0f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23936));
label_2ba0fc:
    // 0x2ba0fc: 0x8e450020
    ctx->pc = 0x2ba0fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2ba100:
    // 0x2ba100: 0x8e460024
    ctx->pc = 0x2ba100u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2ba104:
    // 0x2ba104: 0xc0b4a34
label_2ba108:
    if (ctx->pc == 0x2BA108u) {
        ctx->pc = 0x2BA108u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x2BA10Cu;
        goto label_2ba10c;
    }
    ctx->pc = 0x2BA104u;
    SET_GPR_U32(ctx, 31, 0x2BA10Cu);
    ctx->pc = 0x2BA108u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA10Cu; }
    }
    if (ctx->pc != 0x2BA10Cu) { return; }
    ctx->pc = 0x2BA10Cu;
label_2ba10c:
    // 0x2ba10c: 0x52600005
label_2ba110:
    if (ctx->pc == 0x2BA110u) {
        ctx->pc = 0x2BA110u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA114u;
        goto label_2ba114;
    }
    ctx->pc = 0x2BA10Cu;
    {
        const bool branch_taken_0x2ba10c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba10c) {
            ctx->pc = 0x2BA110u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BA124u;
            goto label_2ba124;
        }
    }
    ctx->pc = 0x2BA114u;
label_2ba114:
    // 0x2ba114: 0x3c04003b
    ctx->pc = 0x2ba114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba118:
    // 0x2ba118: 0xc0b4a34
label_2ba11c:
    if (ctx->pc == 0x2BA11Cu) {
        ctx->pc = 0x2BA11Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23960));
        ctx->pc = 0x2BA120u;
        goto label_2ba120;
    }
    ctx->pc = 0x2BA118u;
    SET_GPR_U32(ctx, 31, 0x2BA120u);
    ctx->pc = 0x2BA11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23960));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA120u; }
    }
    if (ctx->pc != 0x2BA120u) { return; }
    ctx->pc = 0x2BA120u;
label_2ba120:
    // 0x2ba120: 0x3c04003b
    ctx->pc = 0x2ba120u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba124:
    // 0x2ba124: 0xc0b4a34
label_2ba128:
    if (ctx->pc == 0x2BA128u) {
        ctx->pc = 0x2BA128u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BA12Cu;
        goto label_2ba12c;
    }
    ctx->pc = 0x2BA124u;
    SET_GPR_U32(ctx, 31, 0x2BA12Cu);
    ctx->pc = 0x2BA128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA12Cu; }
    }
    if (ctx->pc != 0x2BA12Cu) { return; }
    ctx->pc = 0x2BA12Cu;
label_2ba12c:
    // 0x2ba12c: 0x3c04003b
    ctx->pc = 0x2ba12cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba130:
    // 0x2ba130: 0xc0b4a34
label_2ba134:
    if (ctx->pc == 0x2BA134u) {
        ctx->pc = 0x2BA134u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
        ctx->pc = 0x2BA138u;
        goto label_2ba138;
    }
    ctx->pc = 0x2BA130u;
    SET_GPR_U32(ctx, 31, 0x2BA138u);
    ctx->pc = 0x2BA134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA138u; }
    }
    if (ctx->pc != 0x2BA138u) { return; }
    ctx->pc = 0x2BA138u;
label_2ba138:
    // 0x2ba138: 0x8e430030
    ctx->pc = 0x2ba138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2ba13c:
    // 0x2ba13c: 0x3c02ff00
    ctx->pc = 0x2ba13cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2ba140:
    // 0x2ba140: 0x621824
    ctx->pc = 0x2ba140u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba144:
    // 0x2ba144: 0x1062001a
label_2ba148:
    if (ctx->pc == 0x2BA148u) {
        ctx->pc = 0x2BA14Cu;
        goto label_2ba14c;
    }
    ctx->pc = 0x2BA144u;
    {
        const bool branch_taken_0x2ba144 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ba144) {
            ctx->pc = 0x2BA1B0u;
            goto label_2ba1b0;
        }
    }
    ctx->pc = 0x2BA14Cu;
label_2ba14c:
    // 0x2ba14c: 0x10600018
label_2ba150:
    if (ctx->pc == 0x2BA150u) {
        ctx->pc = 0x2BA154u;
        goto label_2ba154;
    }
    ctx->pc = 0x2BA14Cu;
    {
        const bool branch_taken_0x2ba14c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba14c) {
            ctx->pc = 0x2BA1B0u;
            goto label_2ba1b0;
        }
    }
    ctx->pc = 0x2BA154u;
label_2ba154:
    // 0x2ba154: 0xc0be862
label_2ba158:
    if (ctx->pc == 0x2BA158u) {
        ctx->pc = 0x2BA158u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA15Cu;
        goto label_2ba15c;
    }
    ctx->pc = 0x2BA154u;
    SET_GPR_U32(ctx, 31, 0x2BA15Cu);
    ctx->pc = 0x2BA158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA15Cu; }
    }
    if (ctx->pc != 0x2BA15Cu) { return; }
    ctx->pc = 0x2BA15Cu;
label_2ba15c:
    // 0x2ba15c: 0x3c10003b
    ctx->pc = 0x2ba15cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba160:
    // 0x2ba160: 0x26045ca0
    ctx->pc = 0x2ba160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba164:
    // 0x2ba164: 0xc0b4a34
label_2ba168:
    if (ctx->pc == 0x2BA168u) {
        ctx->pc = 0x2BA168u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA16Cu;
        goto label_2ba16c;
    }
    ctx->pc = 0x2BA164u;
    SET_GPR_U32(ctx, 31, 0x2BA16Cu);
    ctx->pc = 0x2BA168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA16Cu; }
    }
    if (ctx->pc != 0x2BA16Cu) { return; }
    ctx->pc = 0x2BA16Cu;
label_2ba16c:
    // 0x2ba16c: 0xc0be862
label_2ba170:
    if (ctx->pc == 0x2BA170u) {
        ctx->pc = 0x2BA170u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA174u;
        goto label_2ba174;
    }
    ctx->pc = 0x2BA16Cu;
    SET_GPR_U32(ctx, 31, 0x2BA174u);
    ctx->pc = 0x2BA170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA174u; }
    }
    if (ctx->pc != 0x2BA174u) { return; }
    ctx->pc = 0x2BA174u;
label_2ba174:
    // 0x2ba174: 0x26045ca0
    ctx->pc = 0x2ba174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba178:
    // 0x2ba178: 0xc0b4a34
label_2ba17c:
    if (ctx->pc == 0x2BA17Cu) {
        ctx->pc = 0x2BA17Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA180u;
        goto label_2ba180;
    }
    ctx->pc = 0x2BA178u;
    SET_GPR_U32(ctx, 31, 0x2BA180u);
    ctx->pc = 0x2BA17Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA180u; }
    }
    if (ctx->pc != 0x2BA180u) { return; }
    ctx->pc = 0x2BA180u;
label_2ba180:
    // 0x2ba180: 0xc0be862
label_2ba184:
    if (ctx->pc == 0x2BA184u) {
        ctx->pc = 0x2BA184u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA188u;
        goto label_2ba188;
    }
    ctx->pc = 0x2BA180u;
    SET_GPR_U32(ctx, 31, 0x2BA188u);
    ctx->pc = 0x2BA184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA188u; }
    }
    if (ctx->pc != 0x2BA188u) { return; }
    ctx->pc = 0x2BA188u;
label_2ba188:
    // 0x2ba188: 0x26045ca0
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba18c:
    // 0x2ba18c: 0xc0b4a34
label_2ba190:
    if (ctx->pc == 0x2BA190u) {
        ctx->pc = 0x2BA190u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA194u;
        goto label_2ba194;
    }
    ctx->pc = 0x2BA18Cu;
    SET_GPR_U32(ctx, 31, 0x2BA194u);
    ctx->pc = 0x2BA190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA194u; }
    }
    if (ctx->pc != 0x2BA194u) { return; }
    ctx->pc = 0x2BA194u;
label_2ba194:
    // 0x2ba194: 0xc0be862
label_2ba198:
    if (ctx->pc == 0x2BA198u) {
        ctx->pc = 0x2BA198u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA19Cu;
        goto label_2ba19c;
    }
    ctx->pc = 0x2BA194u;
    SET_GPR_U32(ctx, 31, 0x2BA19Cu);
    ctx->pc = 0x2BA198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA19Cu; }
    }
    if (ctx->pc != 0x2BA19Cu) { return; }
    ctx->pc = 0x2BA19Cu;
label_2ba19c:
    // 0x2ba19c: 0x26045ca0
    ctx->pc = 0x2ba19cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba1a0:
    // 0x2ba1a0: 0xc0b4a34
label_2ba1a4:
    if (ctx->pc == 0x2BA1A4u) {
        ctx->pc = 0x2BA1A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1A8u;
        goto label_2ba1a8;
    }
    ctx->pc = 0x2BA1A0u;
    SET_GPR_U32(ctx, 31, 0x2BA1A8u);
    ctx->pc = 0x2BA1A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1A8u; }
    }
    if (ctx->pc != 0x2BA1A8u) { return; }
    ctx->pc = 0x2BA1A8u;
label_2ba1a8:
    // 0x2ba1a8: 0x10000022
label_2ba1ac:
    if (ctx->pc == 0x2BA1ACu) {
        ctx->pc = 0x2BA1B0u;
        goto label_2ba1b0;
    }
    ctx->pc = 0x2BA1A8u;
    {
        const bool branch_taken_0x2ba1a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba1a8) {
            ctx->pc = 0x2BA234u;
            goto label_2ba234;
        }
    }
    ctx->pc = 0x2BA1B0u;
label_2ba1b0:
    // 0x2ba1b0: 0xc64c0030
    ctx->pc = 0x2ba1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba1b4:
    // 0x2ba1b4: 0x46806320
    ctx->pc = 0x2ba1b4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba1b8:
    // 0x2ba1b8: 0x3c013d80
    ctx->pc = 0x2ba1b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15744 << 16));
label_2ba1bc:
    // 0x2ba1bc: 0x4481a000
    ctx->pc = 0x2ba1bcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba1c0:
    // 0x2ba1c0: 0xc0be862
label_2ba1c4:
    if (ctx->pc == 0x2BA1C4u) {
        ctx->pc = 0x2BA1C4u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA1C8u;
        goto label_2ba1c8;
    }
    ctx->pc = 0x2BA1C0u;
    SET_GPR_U32(ctx, 31, 0x2BA1C8u);
    ctx->pc = 0x2BA1C4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1C8u; }
    }
    if (ctx->pc != 0x2BA1C8u) { return; }
    ctx->pc = 0x2BA1C8u;
label_2ba1c8:
    // 0x2ba1c8: 0x3c10003b
    ctx->pc = 0x2ba1c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba1cc:
    // 0x2ba1cc: 0x26045ca0
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba1d0:
    // 0x2ba1d0: 0xc0b4a34
label_2ba1d4:
    if (ctx->pc == 0x2BA1D4u) {
        ctx->pc = 0x2BA1D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1D8u;
        goto label_2ba1d8;
    }
    ctx->pc = 0x2BA1D0u;
    SET_GPR_U32(ctx, 31, 0x2BA1D8u);
    ctx->pc = 0x2BA1D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1D8u; }
    }
    if (ctx->pc != 0x2BA1D8u) { return; }
    ctx->pc = 0x2BA1D8u;
label_2ba1d8:
    // 0x2ba1d8: 0xc64c0034
    ctx->pc = 0x2ba1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba1dc:
    // 0x2ba1dc: 0x46806320
    ctx->pc = 0x2ba1dcu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba1e0:
    // 0x2ba1e0: 0xc0be862
label_2ba1e4:
    if (ctx->pc == 0x2BA1E4u) {
        ctx->pc = 0x2BA1E4u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA1E8u;
        goto label_2ba1e8;
    }
    ctx->pc = 0x2BA1E0u;
    SET_GPR_U32(ctx, 31, 0x2BA1E8u);
    ctx->pc = 0x2BA1E4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1E8u; }
    }
    if (ctx->pc != 0x2BA1E8u) { return; }
    ctx->pc = 0x2BA1E8u;
label_2ba1e8:
    // 0x2ba1e8: 0x26045ca0
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba1ec:
    // 0x2ba1ec: 0xc0b4a34
label_2ba1f0:
    if (ctx->pc == 0x2BA1F0u) {
        ctx->pc = 0x2BA1F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1F4u;
        goto label_2ba1f4;
    }
    ctx->pc = 0x2BA1ECu;
    SET_GPR_U32(ctx, 31, 0x2BA1F4u);
    ctx->pc = 0x2BA1F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1F4u; }
    }
    if (ctx->pc != 0x2BA1F4u) { return; }
    ctx->pc = 0x2BA1F4u;
label_2ba1f4:
    // 0x2ba1f4: 0xc64c0038
    ctx->pc = 0x2ba1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba1f8:
    // 0x2ba1f8: 0x46806320
    ctx->pc = 0x2ba1f8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba1fc:
    // 0x2ba1fc: 0x3c013800
    ctx->pc = 0x2ba1fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
label_2ba200:
    // 0x2ba200: 0x4481a000
    ctx->pc = 0x2ba200u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba204:
    // 0x2ba204: 0xc0be862
label_2ba208:
    if (ctx->pc == 0x2BA208u) {
        ctx->pc = 0x2BA208u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA20Cu;
        goto label_2ba20c;
    }
    ctx->pc = 0x2BA204u;
    SET_GPR_U32(ctx, 31, 0x2BA20Cu);
    ctx->pc = 0x2BA208u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA20Cu; }
    }
    if (ctx->pc != 0x2BA20Cu) { return; }
    ctx->pc = 0x2BA20Cu;
label_2ba20c:
    // 0x2ba20c: 0x26045ca0
    ctx->pc = 0x2ba20cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba210:
    // 0x2ba210: 0xc0b4a34
label_2ba214:
    if (ctx->pc == 0x2BA214u) {
        ctx->pc = 0x2BA214u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA218u;
        goto label_2ba218;
    }
    ctx->pc = 0x2BA210u;
    SET_GPR_U32(ctx, 31, 0x2BA218u);
    ctx->pc = 0x2BA214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA218u; }
    }
    if (ctx->pc != 0x2BA218u) { return; }
    ctx->pc = 0x2BA218u;
label_2ba218:
    // 0x2ba218: 0xc64c003c
    ctx->pc = 0x2ba218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba21c:
    // 0x2ba21c: 0x46806320
    ctx->pc = 0x2ba21cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba220:
    // 0x2ba220: 0xc0be862
label_2ba224:
    if (ctx->pc == 0x2BA224u) {
        ctx->pc = 0x2BA224u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA228u;
        goto label_2ba228;
    }
    ctx->pc = 0x2BA220u;
    SET_GPR_U32(ctx, 31, 0x2BA228u);
    ctx->pc = 0x2BA224u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA228u; }
    }
    if (ctx->pc != 0x2BA228u) { return; }
    ctx->pc = 0x2BA228u;
label_2ba228:
    // 0x2ba228: 0x26045ca0
    ctx->pc = 0x2ba228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba22c:
    // 0x2ba22c: 0xc0b4a34
label_2ba230:
    if (ctx->pc == 0x2BA230u) {
        ctx->pc = 0x2BA230u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA234u;
        goto label_2ba234;
    }
    ctx->pc = 0x2BA22Cu;
    SET_GPR_U32(ctx, 31, 0x2BA234u);
    ctx->pc = 0x2BA230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA234u; }
    }
    if (ctx->pc != 0x2BA234u) { return; }
    ctx->pc = 0x2BA234u;
label_2ba234:
    // 0x2ba234: 0x12600284
label_2ba238:
    if (ctx->pc == 0x2BA238u) {
        ctx->pc = 0x2BA238u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA23Cu;
        goto label_2ba23c;
    }
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA238u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BA23Cu;
label_2ba23c:
    // 0x2ba23c: 0x8e530010
    ctx->pc = 0x2ba23cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2ba240:
    // 0x2ba240: 0xc0b4a34
label_2ba244:
    if (ctx->pc == 0x2BA244u) {
        ctx->pc = 0x2BA244u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24008));
        ctx->pc = 0x2BA248u;
        goto label_2ba248;
    }
    ctx->pc = 0x2BA240u;
    SET_GPR_U32(ctx, 31, 0x2BA248u);
    ctx->pc = 0x2BA244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24008));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA248u; }
    }
    if (ctx->pc != 0x2BA248u) { return; }
    ctx->pc = 0x2BA248u;
label_2ba248:
    // 0x2ba248: 0x132942
    ctx->pc = 0x2ba248u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 5));
label_2ba24c:
    // 0x2ba24c: 0x3c10003b
    ctx->pc = 0x2ba24cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba250:
    // 0x2ba250: 0x26045dd0
    ctx->pc = 0x2ba250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2ba254:
    // 0x2ba254: 0xc0b4a34
label_2ba258:
    if (ctx->pc == 0x2BA258u) {
        ctx->pc = 0x2BA258u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BA25Cu;
        goto label_2ba25c;
    }
    ctx->pc = 0x2BA254u;
    SET_GPR_U32(ctx, 31, 0x2BA25Cu);
    ctx->pc = 0x2BA258u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA25Cu; }
    }
    if (ctx->pc != 0x2BA25Cu) { return; }
    ctx->pc = 0x2BA25Cu;
label_2ba25c:
    // 0x2ba25c: 0x132902
    ctx->pc = 0x2ba25cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 4));
label_2ba260:
    // 0x2ba260: 0x26045dd0
    ctx->pc = 0x2ba260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2ba264:
    // 0x2ba264: 0xc0b4a34
label_2ba268:
    if (ctx->pc == 0x2BA268u) {
        ctx->pc = 0x2BA268u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BA26Cu;
        goto label_2ba26c;
    }
    ctx->pc = 0x2BA264u;
    SET_GPR_U32(ctx, 31, 0x2BA26Cu);
    ctx->pc = 0x2BA268u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA26Cu; }
    }
    if (ctx->pc != 0x2BA26Cu) { return; }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x1328c2
    ctx->pc = 0x2ba26cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 3));
label_2ba270:
    // 0x2ba270: 0x26045dd0
    ctx->pc = 0x2ba270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2ba274:
    // 0x2ba274: 0xc0b4a34
label_2ba278:
    if (ctx->pc == 0x2BA278u) {
        ctx->pc = 0x2BA278u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BA27Cu;
        goto label_2ba27c;
    }
    ctx->pc = 0x2BA274u;
    SET_GPR_U32(ctx, 31, 0x2BA27Cu);
    ctx->pc = 0x2BA278u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA27Cu; }
    }
    if (ctx->pc != 0x2BA27Cu) { return; }
    ctx->pc = 0x2BA27Cu;
label_2ba27c:
    // 0x2ba27c: 0x132882
    ctx->pc = 0x2ba27cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 2));
label_2ba280:
    // 0x2ba280: 0x26045dd0
    ctx->pc = 0x2ba280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2ba284:
    // 0x2ba284: 0xc0b4a34
label_2ba288:
    if (ctx->pc == 0x2BA288u) {
        ctx->pc = 0x2BA288u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BA28Cu;
        goto label_2ba28c;
    }
    ctx->pc = 0x2BA284u;
    SET_GPR_U32(ctx, 31, 0x2BA28Cu);
    ctx->pc = 0x2BA288u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA28Cu; }
    }
    if (ctx->pc != 0x2BA28Cu) { return; }
    ctx->pc = 0x2BA28Cu;
label_2ba28c:
    // 0x2ba28c: 0x132842
    ctx->pc = 0x2ba28cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 1));
label_2ba290:
    // 0x2ba290: 0x26045dd0
    ctx->pc = 0x2ba290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2ba294:
    // 0x2ba294: 0xc0b4a34
label_2ba298:
    if (ctx->pc == 0x2BA298u) {
        ctx->pc = 0x2BA298u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BA29Cu;
        goto label_2ba29c;
    }
    ctx->pc = 0x2BA294u;
    SET_GPR_U32(ctx, 31, 0x2BA29Cu);
    ctx->pc = 0x2BA298u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA29Cu; }
    }
    if (ctx->pc != 0x2BA29Cu) { return; }
    ctx->pc = 0x2BA29Cu;
label_2ba29c:
    // 0x2ba29c: 0x3c04003b
    ctx->pc = 0x2ba29cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba2a0:
    // 0x2ba2a0: 0x24845dd8
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24024));
label_2ba2a4:
    // 0x2ba2a4: 0xc0b4a34
label_2ba2a8:
    if (ctx->pc == 0x2BA2A8u) {
        ctx->pc = 0x2BA2A8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2BA2ACu;
        goto label_2ba2ac;
    }
    ctx->pc = 0x2BA2A4u;
    SET_GPR_U32(ctx, 31, 0x2BA2ACu);
    ctx->pc = 0x2BA2A8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA2ACu; }
    }
    if (ctx->pc != 0x2BA2ACu) { return; }
    ctx->pc = 0x2BA2ACu;
label_2ba2ac:
    // 0x2ba2ac: 0x10000267
label_2ba2b0:
    if (ctx->pc == 0x2BA2B0u) {
        ctx->pc = 0x2BA2B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA2B4u;
        goto label_2ba2b4;
    }
    ctx->pc = 0x2BA2ACu;
    {
        const bool branch_taken_0x2ba2ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA2B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba2ac) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BA2B4u;
label_2ba2b4:
    // 0x2ba2b4: 0x3c04003b
    ctx->pc = 0x2ba2b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba2b8:
    // 0x2ba2b8: 0x24845c88
    ctx->pc = 0x2ba2b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
label_2ba2bc:
    // 0x2ba2bc: 0xc0b4a34
label_2ba2c0:
    if (ctx->pc == 0x2BA2C0u) {
        ctx->pc = 0x2BA2C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2C4u;
        goto label_2ba2c4;
    }
    ctx->pc = 0x2BA2BCu;
    SET_GPR_U32(ctx, 31, 0x2BA2C4u);
    ctx->pc = 0x2BA2C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA2C4u; }
    }
    if (ctx->pc != 0x2BA2C4u) { return; }
    ctx->pc = 0x2BA2C4u;
label_2ba2c4:
    // 0x2ba2c4: 0x8e430000
    ctx->pc = 0x2ba2c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba2c8:
    // 0x2ba2c8: 0x3c02ff00
    ctx->pc = 0x2ba2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2ba2cc:
    // 0x2ba2cc: 0x621824
    ctx->pc = 0x2ba2ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba2d0:
    // 0x2ba2d0: 0x50620005
label_2ba2d4:
    if (ctx->pc == 0x2BA2D4u) {
        ctx->pc = 0x2BA2D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2BA2D8u;
        goto label_2ba2d8;
    }
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2BA2D4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2BA2E8u;
            goto label_2ba2e8;
        }
    }
    ctx->pc = 0x2BA2D8u;
label_2ba2d8:
    // 0x2ba2d8: 0x1460000f
label_2ba2dc:
    if (ctx->pc == 0x2BA2DCu) {
        ctx->pc = 0x2BA2DCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA2E0u;
        goto label_2ba2e0;
    }
    ctx->pc = 0x2BA2D8u;
    {
        const bool branch_taken_0x2ba2d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BA2DCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba2d8) {
            ctx->pc = 0x2BA318u;
            goto label_2ba318;
        }
    }
    ctx->pc = 0x2BA2E0u;
label_2ba2e0:
    // 0x2ba2e0: 0x8e430004
    ctx->pc = 0x2ba2e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ba2e4:
    // 0x2ba2e4: 0x3c02ff00
    ctx->pc = 0x2ba2e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2ba2e8:
    // 0x2ba2e8: 0x621824
    ctx->pc = 0x2ba2e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba2ec:
    // 0x2ba2ec: 0x50620004
label_2ba2f0:
    if (ctx->pc == 0x2BA2F0u) {
        ctx->pc = 0x2BA2F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2BA2F4u;
        goto label_2ba2f4;
    }
    ctx->pc = 0x2BA2ECu;
    {
        const bool branch_taken_0x2ba2ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ba2ec) {
            ctx->pc = 0x2BA2F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x2BA300u;
            goto label_2ba300;
        }
    }
    ctx->pc = 0x2BA2F4u;
label_2ba2f4:
    // 0x2ba2f4: 0x14600008
label_2ba2f8:
    if (ctx->pc == 0x2BA2F8u) {
        ctx->pc = 0x2BA2F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA2FCu;
        goto label_2ba2fc;
    }
    ctx->pc = 0x2BA2F4u;
    {
        const bool branch_taken_0x2ba2f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BA2F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba2f4) {
            ctx->pc = 0x2BA318u;
            goto label_2ba318;
        }
    }
    ctx->pc = 0x2BA2FCu;
label_2ba2fc:
    // 0x2ba2fc: 0x8e430008
    ctx->pc = 0x2ba2fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ba300:
    // 0x2ba300: 0x3c02ff00
    ctx->pc = 0x2ba300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_2ba304:
    // 0x2ba304: 0x621824
    ctx->pc = 0x2ba304u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba308:
    // 0x2ba308: 0x1062003e
label_2ba30c:
    if (ctx->pc == 0x2BA30Cu) {
        ctx->pc = 0x2BA310u;
        goto label_2ba310;
    }
    ctx->pc = 0x2BA308u;
    {
        const bool branch_taken_0x2ba308 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ba308) {
            ctx->pc = 0x2BA404u;
            goto label_2ba404;
        }
    }
    ctx->pc = 0x2BA310u;
label_2ba310:
    // 0x2ba310: 0x1060003c
label_2ba314:
    if (ctx->pc == 0x2BA314u) {
        ctx->pc = 0x2BA314u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA318u;
        goto label_2ba318;
    }
    ctx->pc = 0x2BA310u;
    {
        const bool branch_taken_0x2ba310 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA314u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba310) {
            ctx->pc = 0x2BA404u;
            goto label_2ba404;
        }
    }
    ctx->pc = 0x2BA318u;
label_2ba318:
    // 0x2ba318: 0x24845de0
    ctx->pc = 0x2ba318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24032));
label_2ba31c:
    // 0x2ba31c: 0xc0b4a34
label_2ba320:
    if (ctx->pc == 0x2BA320u) {
        ctx->pc = 0x2BA320u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA324u;
        goto label_2ba324;
    }
    ctx->pc = 0x2BA31Cu;
    SET_GPR_U32(ctx, 31, 0x2BA324u);
    ctx->pc = 0x2BA320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA324u; }
    }
    if (ctx->pc != 0x2BA324u) { return; }
    ctx->pc = 0x2BA324u;
label_2ba324:
    // 0x2ba324: 0xc641000c
    ctx->pc = 0x2ba324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ba328:
    // 0x2ba328: 0x44800000
    ctx->pc = 0x2ba328u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ba32c:
    // 0x2ba32c: 0x46000832
    ctx->pc = 0x2ba32cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba330:
    // 0x2ba330: 0x0
    ctx->pc = 0x2ba330u;
    // NOP
label_2ba334:
    // 0x2ba334: 0x45000005
label_2ba338:
    if (ctx->pc == 0x2BA338u) {
        ctx->pc = 0x2BA338u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA33Cu;
        goto label_2ba33c;
    }
    ctx->pc = 0x2BA334u;
    {
        const bool branch_taken_0x2ba334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA338u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba334) {
            ctx->pc = 0x2BA34Cu;
            goto label_2ba34c;
        }
    }
    ctx->pc = 0x2BA33Cu;
label_2ba33c:
    // 0x2ba33c: 0xc0b4a34
label_2ba340:
    if (ctx->pc == 0x2BA340u) {
        ctx->pc = 0x2BA340u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
        ctx->pc = 0x2BA344u;
        goto label_2ba344;
    }
    ctx->pc = 0x2BA33Cu;
    SET_GPR_U32(ctx, 31, 0x2BA344u);
    ctx->pc = 0x2BA340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA344u; }
    }
    if (ctx->pc != 0x2BA344u) { return; }
    ctx->pc = 0x2BA344u;
label_2ba344:
    // 0x2ba344: 0x10000017
label_2ba348:
    if (ctx->pc == 0x2BA348u) {
        ctx->pc = 0x2BA348u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2BA34Cu;
        goto label_2ba34c;
    }
    ctx->pc = 0x2BA344u;
    {
        const bool branch_taken_0x2ba344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA348u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        if (branch_taken_0x2ba344) {
            ctx->pc = 0x2BA3A4u;
            goto label_2ba3a4;
        }
    }
    ctx->pc = 0x2BA34Cu;
label_2ba34c:
    // 0x2ba34c: 0xc0be862
label_2ba350:
    if (ctx->pc == 0x2BA350u) {
        ctx->pc = 0x2BA350u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA354u;
        goto label_2ba354;
    }
    ctx->pc = 0x2BA34Cu;
    SET_GPR_U32(ctx, 31, 0x2BA354u);
    ctx->pc = 0x2BA350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA354u; }
    }
    if (ctx->pc != 0x2BA354u) { return; }
    ctx->pc = 0x2BA354u;
label_2ba354:
    // 0x2ba354: 0x3c10003b
    ctx->pc = 0x2ba354u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba358:
    // 0x2ba358: 0x26045e08
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2ba35c:
    // 0x2ba35c: 0xc0b4a34
label_2ba360:
    if (ctx->pc == 0x2BA360u) {
        ctx->pc = 0x2BA360u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA364u;
        goto label_2ba364;
    }
    ctx->pc = 0x2BA35Cu;
    SET_GPR_U32(ctx, 31, 0x2BA364u);
    ctx->pc = 0x2BA360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA364u; }
    }
    if (ctx->pc != 0x2BA364u) { return; }
    ctx->pc = 0x2BA364u;
label_2ba364:
    // 0x2ba364: 0xc0be862
label_2ba368:
    if (ctx->pc == 0x2BA368u) {
        ctx->pc = 0x2BA368u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA36Cu;
        goto label_2ba36c;
    }
    ctx->pc = 0x2BA364u;
    SET_GPR_U32(ctx, 31, 0x2BA36Cu);
    ctx->pc = 0x2BA368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA36Cu; }
    }
    if (ctx->pc != 0x2BA36Cu) { return; }
    ctx->pc = 0x2BA36Cu;
label_2ba36c:
    // 0x2ba36c: 0x26045e08
    ctx->pc = 0x2ba36cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2ba370:
    // 0x2ba370: 0xc0b4a34
label_2ba374:
    if (ctx->pc == 0x2BA374u) {
        ctx->pc = 0x2BA374u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA378u;
        goto label_2ba378;
    }
    ctx->pc = 0x2BA370u;
    SET_GPR_U32(ctx, 31, 0x2BA378u);
    ctx->pc = 0x2BA374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA378u; }
    }
    if (ctx->pc != 0x2BA378u) { return; }
    ctx->pc = 0x2BA378u;
label_2ba378:
    // 0x2ba378: 0xc0be862
label_2ba37c:
    if (ctx->pc == 0x2BA37Cu) {
        ctx->pc = 0x2BA37Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA380u;
        goto label_2ba380;
    }
    ctx->pc = 0x2BA378u;
    SET_GPR_U32(ctx, 31, 0x2BA380u);
    ctx->pc = 0x2BA37Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA380u; }
    }
    if (ctx->pc != 0x2BA380u) { return; }
    ctx->pc = 0x2BA380u;
label_2ba380:
    // 0x2ba380: 0x26045e08
    ctx->pc = 0x2ba380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2ba384:
    // 0x2ba384: 0xc0b4a34
label_2ba388:
    if (ctx->pc == 0x2BA388u) {
        ctx->pc = 0x2BA388u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA38Cu;
        goto label_2ba38c;
    }
    ctx->pc = 0x2BA384u;
    SET_GPR_U32(ctx, 31, 0x2BA38Cu);
    ctx->pc = 0x2BA388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA38Cu; }
    }
    if (ctx->pc != 0x2BA38Cu) { return; }
    ctx->pc = 0x2BA38Cu;
label_2ba38c:
    // 0x2ba38c: 0xc0be862
label_2ba390:
    if (ctx->pc == 0x2BA390u) {
        ctx->pc = 0x2BA390u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA394u;
        goto label_2ba394;
    }
    ctx->pc = 0x2BA38Cu;
    SET_GPR_U32(ctx, 31, 0x2BA394u);
    ctx->pc = 0x2BA390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA394u; }
    }
    if (ctx->pc != 0x2BA394u) { return; }
    ctx->pc = 0x2BA394u;
label_2ba394:
    // 0x2ba394: 0x26045e08
    ctx->pc = 0x2ba394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2ba398:
    // 0x2ba398: 0xc0b4a34
label_2ba39c:
    if (ctx->pc == 0x2BA39Cu) {
        ctx->pc = 0x2BA39Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3A0u;
        goto label_2ba3a0;
    }
    ctx->pc = 0x2BA398u;
    SET_GPR_U32(ctx, 31, 0x2BA3A0u);
    ctx->pc = 0x2BA39Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3A0u; }
    }
    if (ctx->pc != 0x2BA3A0u) { return; }
    ctx->pc = 0x2BA3A0u;
label_2ba3a0:
    // 0x2ba3a0: 0x8e450010
    ctx->pc = 0x2ba3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2ba3a4:
    // 0x2ba3a4: 0x3c04003b
    ctx->pc = 0x2ba3a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba3a8:
    // 0x2ba3a8: 0x24845e18
    ctx->pc = 0x2ba3a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24088));
label_2ba3ac:
    // 0x2ba3ac: 0xc0b4a34
label_2ba3b0:
    if (ctx->pc == 0x2BA3B0u) {
        ctx->pc = 0x2BA3B0u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x2BA3B4u;
        goto label_2ba3b4;
    }
    ctx->pc = 0x2BA3ACu;
    SET_GPR_U32(ctx, 31, 0x2BA3B4u);
    ctx->pc = 0x2BA3B0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3B4u; }
    }
    if (ctx->pc != 0x2BA3B4u) { return; }
    ctx->pc = 0x2BA3B4u;
label_2ba3b4:
    // 0x2ba3b4: 0x3c04003b
    ctx->pc = 0x2ba3b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba3b8:
    // 0x2ba3b8: 0x24845e28
    ctx->pc = 0x2ba3b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24104));
label_2ba3bc:
    // 0x2ba3bc: 0xc0b4a34
label_2ba3c0:
    if (ctx->pc == 0x2BA3C0u) {
        ctx->pc = 0x2BA3C0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA3C4u;
        goto label_2ba3c4;
    }
    ctx->pc = 0x2BA3BCu;
    SET_GPR_U32(ctx, 31, 0x2BA3C4u);
    ctx->pc = 0x2BA3C0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3C4u; }
    }
    if (ctx->pc != 0x2BA3C4u) { return; }
    ctx->pc = 0x2BA3C4u;
label_2ba3c4:
    // 0x2ba3c4: 0x8e43001c
    ctx->pc = 0x2ba3c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba3c8:
    // 0x2ba3c8: 0x24020080
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2ba3cc:
    // 0x2ba3cc: 0x10620201
label_2ba3d0:
    if (ctx->pc == 0x2BA3D0u) {
        ctx->pc = 0x2BA3D0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2BA3D4u;
        goto label_2ba3d4;
    }
    ctx->pc = 0x2BA3CCu;
    {
        const bool branch_taken_0x2ba3cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BA3D0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2ba3cc) {
            ctx->pc = 0x2BABD4u;
            goto label_2babd4;
        }
    }
    ctx->pc = 0x2BA3D4u;
label_2ba3d4:
    // 0x2ba3d4: 0x10620207
label_2ba3d8:
    if (ctx->pc == 0x2BA3D8u) {
        ctx->pc = 0x2BA3D8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA3DCu;
        goto label_2ba3dc;
    }
    ctx->pc = 0x2BA3D4u;
    {
        const bool branch_taken_0x2ba3d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BA3D8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba3d4) {
            ctx->pc = 0x2BABF4u;
            goto label_2babf4;
        }
    }
    ctx->pc = 0x2BA3DCu;
label_2ba3dc:
    // 0x2ba3dc: 0x8e42001c
    ctx->pc = 0x2ba3dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba3e0:
    // 0x2ba3e0: 0x1040020a
label_2ba3e4:
    if (ctx->pc == 0x2BA3E4u) {
        ctx->pc = 0x2BA3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x2BA3E8u;
        goto label_2ba3e8;
    }
    ctx->pc = 0x2BA3E0u;
    {
        const bool branch_taken_0x2ba3e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        if (branch_taken_0x2ba3e0) {
            ctx->pc = 0x2BAC0Cu;
            goto label_2bac0c;
        }
    }
    ctx->pc = 0x2BA3E8u;
label_2ba3e8:
    // 0x2ba3e8: 0x50620211
label_2ba3ec:
    if (ctx->pc == 0x2BA3ECu) {
        ctx->pc = 0x2BA3ECu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA3F0u;
        goto label_2ba3f0;
    }
    ctx->pc = 0x2BA3E8u;
    {
        const bool branch_taken_0x2ba3e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ba3e8) {
            ctx->pc = 0x2BA3ECu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BAC30u;
            goto label_2bac30;
        }
    }
    ctx->pc = 0x2BA3F0u;
label_2ba3f0:
    // 0x2ba3f0: 0x3c04003b
    ctx->pc = 0x2ba3f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba3f4:
    // 0x2ba3f4: 0xc0b4a34
label_2ba3f8:
    if (ctx->pc == 0x2BA3F8u) {
        ctx->pc = 0x2BA3F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
        ctx->pc = 0x2BA3FCu;
        goto label_2ba3fc;
    }
    ctx->pc = 0x2BA3F4u;
    SET_GPR_U32(ctx, 31, 0x2BA3FCu);
    ctx->pc = 0x2BA3F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3FCu; }
    }
    if (ctx->pc != 0x2BA3FCu) { return; }
    ctx->pc = 0x2BA3FCu;
label_2ba3fc:
    // 0x2ba3fc: 0x10000213
label_2ba400:
    if (ctx->pc == 0x2BA400u) {
        ctx->pc = 0x2BA400u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA404u;
        goto label_2ba404;
    }
    ctx->pc = 0x2BA3FCu;
    {
        const bool branch_taken_0x2ba3fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA400u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba3fc) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BA404u;
label_2ba404:
    // 0x2ba404: 0xc64c0000
    ctx->pc = 0x2ba404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba408:
    // 0x2ba408: 0x46806320
    ctx->pc = 0x2ba408u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba40c:
    // 0x2ba40c: 0x3c013c00
    ctx->pc = 0x2ba40cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2ba410:
    // 0x2ba410: 0x4481a000
    ctx->pc = 0x2ba410u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba414:
    // 0x2ba414: 0xc0be862
label_2ba418:
    if (ctx->pc == 0x2BA418u) {
        ctx->pc = 0x2BA418u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA41Cu;
        goto label_2ba41c;
    }
    ctx->pc = 0x2BA414u;
    SET_GPR_U32(ctx, 31, 0x2BA41Cu);
    ctx->pc = 0x2BA418u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA41Cu; }
    }
    if (ctx->pc != 0x2BA41Cu) { return; }
    ctx->pc = 0x2BA41Cu;
label_2ba41c:
    // 0x2ba41c: 0x3c10003b
    ctx->pc = 0x2ba41cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba420:
    // 0x2ba420: 0x26045e38
    ctx->pc = 0x2ba420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24120));
label_2ba424:
    // 0x2ba424: 0xc0b4a34
label_2ba428:
    if (ctx->pc == 0x2BA428u) {
        ctx->pc = 0x2BA428u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA42Cu;
        goto label_2ba42c;
    }
    ctx->pc = 0x2BA424u;
    SET_GPR_U32(ctx, 31, 0x2BA42Cu);
    ctx->pc = 0x2BA428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA42Cu; }
    }
    if (ctx->pc != 0x2BA42Cu) { return; }
    ctx->pc = 0x2BA42Cu;
label_2ba42c:
    // 0x2ba42c: 0xc64c0004
    ctx->pc = 0x2ba42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba430:
    // 0x2ba430: 0x46806320
    ctx->pc = 0x2ba430u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba434:
    // 0x2ba434: 0xc0be862
label_2ba438:
    if (ctx->pc == 0x2BA438u) {
        ctx->pc = 0x2BA438u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA43Cu;
        goto label_2ba43c;
    }
    ctx->pc = 0x2BA434u;
    SET_GPR_U32(ctx, 31, 0x2BA43Cu);
    ctx->pc = 0x2BA438u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA43Cu; }
    }
    if (ctx->pc != 0x2BA43Cu) { return; }
    ctx->pc = 0x2BA43Cu;
label_2ba43c:
    // 0x2ba43c: 0x26045e38
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24120));
label_2ba440:
    // 0x2ba440: 0xc0b4a34
label_2ba444:
    if (ctx->pc == 0x2BA444u) {
        ctx->pc = 0x2BA444u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA448u;
        goto label_2ba448;
    }
    ctx->pc = 0x2BA440u;
    SET_GPR_U32(ctx, 31, 0x2BA448u);
    ctx->pc = 0x2BA444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA448u; }
    }
    if (ctx->pc != 0x2BA448u) { return; }
    ctx->pc = 0x2BA448u;
label_2ba448:
    // 0x2ba448: 0xc64c0008
    ctx->pc = 0x2ba448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba44c:
    // 0x2ba44c: 0x46806320
    ctx->pc = 0x2ba44cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba450:
    // 0x2ba450: 0xc0be862
label_2ba454:
    if (ctx->pc == 0x2BA454u) {
        ctx->pc = 0x2BA454u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA458u;
        goto label_2ba458;
    }
    ctx->pc = 0x2BA450u;
    SET_GPR_U32(ctx, 31, 0x2BA458u);
    ctx->pc = 0x2BA454u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA458u; }
    }
    if (ctx->pc != 0x2BA458u) { return; }
    ctx->pc = 0x2BA458u;
label_2ba458:
    // 0x2ba458: 0x26045e38
    ctx->pc = 0x2ba458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24120));
label_2ba45c:
    // 0x2ba45c: 0xc0b4a34
label_2ba460:
    if (ctx->pc == 0x2BA460u) {
        ctx->pc = 0x2BA460u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA464u;
        goto label_2ba464;
    }
    ctx->pc = 0x2BA45Cu;
    SET_GPR_U32(ctx, 31, 0x2BA464u);
    ctx->pc = 0x2BA460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA464u; }
    }
    if (ctx->pc != 0x2BA464u) { return; }
    ctx->pc = 0x2BA464u;
label_2ba464:
    // 0x2ba464: 0x3c04003b
    ctx->pc = 0x2ba464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba468:
    // 0x2ba468: 0x24845e48
    ctx->pc = 0x2ba468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24136));
label_2ba46c:
    // 0x2ba46c: 0xc0b4a34
label_2ba470:
    if (ctx->pc == 0x2BA470u) {
        ctx->pc = 0x2BA470u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA474u;
        goto label_2ba474;
    }
    ctx->pc = 0x2BA46Cu;
    SET_GPR_U32(ctx, 31, 0x2BA474u);
    ctx->pc = 0x2BA470u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA474u; }
    }
    if (ctx->pc != 0x2BA474u) { return; }
    ctx->pc = 0x2BA474u;
label_2ba474:
    // 0x2ba474: 0x8e43001c
    ctx->pc = 0x2ba474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba478:
    // 0x2ba478: 0x24020080
    ctx->pc = 0x2ba478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2ba47c:
    // 0x2ba47c: 0x106201d5
label_2ba480:
    if (ctx->pc == 0x2BA480u) {
        ctx->pc = 0x2BA480u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2BA484u;
        goto label_2ba484;
    }
    ctx->pc = 0x2BA47Cu;
    {
        const bool branch_taken_0x2ba47c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BA480u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2ba47c) {
            ctx->pc = 0x2BABD4u;
            goto label_2babd4;
        }
    }
    ctx->pc = 0x2BA484u;
label_2ba484:
    // 0x2ba484: 0x106201db
label_2ba488:
    if (ctx->pc == 0x2BA488u) {
        ctx->pc = 0x2BA488u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA48Cu;
        goto label_2ba48c;
    }
    ctx->pc = 0x2BA484u;
    {
        const bool branch_taken_0x2ba484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BA488u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba484) {
            ctx->pc = 0x2BABF4u;
            goto label_2babf4;
        }
    }
    ctx->pc = 0x2BA48Cu;
label_2ba48c:
    // 0x2ba48c: 0x8e42001c
    ctx->pc = 0x2ba48cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba490:
    // 0x2ba490: 0x104001de
label_2ba494:
    if (ctx->pc == 0x2BA494u) {
        ctx->pc = 0x2BA494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x2BA498u;
        goto label_2ba498;
    }
    ctx->pc = 0x2BA490u;
    {
        const bool branch_taken_0x2ba490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        if (branch_taken_0x2ba490) {
            ctx->pc = 0x2BAC0Cu;
            goto label_2bac0c;
        }
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x106201e5
label_2ba49c:
    if (ctx->pc == 0x2BA49Cu) {
        ctx->pc = 0x2BA49Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA4A0u;
        goto label_2ba4a0;
    }
    ctx->pc = 0x2BA498u;
    {
        const bool branch_taken_0x2ba498 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BA49Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba498) {
            ctx->pc = 0x2BAC30u;
            goto label_2bac30;
        }
    }
    ctx->pc = 0x2BA4A0u;
label_2ba4a0:
    // 0x2ba4a0: 0x100001e7
label_2ba4a4:
    if (ctx->pc == 0x2BA4A4u) {
        ctx->pc = 0x2BA4A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA4A8u;
        goto label_2ba4a8;
    }
    ctx->pc = 0x2BA4A0u;
    {
        const bool branch_taken_0x2ba4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA4A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba4a0) {
            ctx->pc = 0x2BAC40u;
            goto label_2bac40;
        }
    }
    ctx->pc = 0x2BA4A8u;
label_2ba4a8:
    // 0x2ba4a8: 0x3c04003b
    ctx->pc = 0x2ba4a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba4ac:
    // 0x2ba4ac: 0x24845c88
    ctx->pc = 0x2ba4acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
label_2ba4b0:
    // 0x2ba4b0: 0xc0b4a34
label_2ba4b4:
    if (ctx->pc == 0x2BA4B4u) {
        ctx->pc = 0x2BA4B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4B8u;
        goto label_2ba4b8;
    }
    ctx->pc = 0x2BA4B0u;
    SET_GPR_U32(ctx, 31, 0x2BA4B8u);
    ctx->pc = 0x2BA4B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4B8u; }
    }
    if (ctx->pc != 0x2BA4B8u) { return; }
    ctx->pc = 0x2BA4B8u;
label_2ba4b8:
    // 0x2ba4b8: 0xc64c0000
    ctx->pc = 0x2ba4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba4bc:
    // 0x2ba4bc: 0x46806320
    ctx->pc = 0x2ba4bcu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba4c0:
    // 0x2ba4c0: 0x3c013c00
    ctx->pc = 0x2ba4c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2ba4c4:
    // 0x2ba4c4: 0x4481a000
    ctx->pc = 0x2ba4c4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba4c8:
    // 0x2ba4c8: 0xc0be862
label_2ba4cc:
    if (ctx->pc == 0x2BA4CCu) {
        ctx->pc = 0x2BA4CCu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA4D0u;
        goto label_2ba4d0;
    }
    ctx->pc = 0x2BA4C8u;
    SET_GPR_U32(ctx, 31, 0x2BA4D0u);
    ctx->pc = 0x2BA4CCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4D0u; }
    }
    if (ctx->pc != 0x2BA4D0u) { return; }
    ctx->pc = 0x2BA4D0u;
label_2ba4d0:
    // 0x2ba4d0: 0x3c10003b
    ctx->pc = 0x2ba4d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba4d4:
    // 0x2ba4d4: 0x26045ca0
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba4d8:
    // 0x2ba4d8: 0xc0b4a34
label_2ba4dc:
    if (ctx->pc == 0x2BA4DCu) {
        ctx->pc = 0x2BA4DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4E0u;
        goto label_2ba4e0;
    }
    ctx->pc = 0x2BA4D8u;
    SET_GPR_U32(ctx, 31, 0x2BA4E0u);
    ctx->pc = 0x2BA4DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4E0u; }
    }
    if (ctx->pc != 0x2BA4E0u) { return; }
    ctx->pc = 0x2BA4E0u;
label_2ba4e0:
    // 0x2ba4e0: 0xc64c0004
    ctx->pc = 0x2ba4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba4e4:
    // 0x2ba4e4: 0x46806320
    ctx->pc = 0x2ba4e4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba4e8:
    // 0x2ba4e8: 0xc0be862
label_2ba4ec:
    if (ctx->pc == 0x2BA4ECu) {
        ctx->pc = 0x2BA4ECu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA4F0u;
        goto label_2ba4f0;
    }
    ctx->pc = 0x2BA4E8u;
    SET_GPR_U32(ctx, 31, 0x2BA4F0u);
    ctx->pc = 0x2BA4ECu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4F0u; }
    }
    if (ctx->pc != 0x2BA4F0u) { return; }
    ctx->pc = 0x2BA4F0u;
label_2ba4f0:
    // 0x2ba4f0: 0x26045ca0
    ctx->pc = 0x2ba4f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba4f4:
    // 0x2ba4f4: 0xc0b4a34
label_2ba4f8:
    if (ctx->pc == 0x2BA4F8u) {
        ctx->pc = 0x2BA4F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4FCu;
        goto label_2ba4fc;
    }
    ctx->pc = 0x2BA4F4u;
    SET_GPR_U32(ctx, 31, 0x2BA4FCu);
    ctx->pc = 0x2BA4F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4FCu; }
    }
    if (ctx->pc != 0x2BA4FCu) { return; }
    ctx->pc = 0x2BA4FCu;
label_2ba4fc:
    // 0x2ba4fc: 0xc64c0008
    ctx->pc = 0x2ba4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba500:
    // 0x2ba500: 0x46806320
    ctx->pc = 0x2ba500u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba504:
    // 0x2ba504: 0xc0be862
label_2ba508:
    if (ctx->pc == 0x2BA508u) {
        ctx->pc = 0x2BA508u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA50Cu;
        goto label_2ba50c;
    }
    ctx->pc = 0x2BA504u;
    SET_GPR_U32(ctx, 31, 0x2BA50Cu);
    ctx->pc = 0x2BA508u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA50Cu; }
    }
    if (ctx->pc != 0x2BA50Cu) { return; }
    ctx->pc = 0x2BA50Cu;
label_2ba50c:
    // 0x2ba50c: 0x26045ca0
    ctx->pc = 0x2ba50cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba510:
    // 0x2ba510: 0xc0b4a34
label_2ba514:
    if (ctx->pc == 0x2BA514u) {
        ctx->pc = 0x2BA514u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA518u;
        goto label_2ba518;
    }
    ctx->pc = 0x2BA510u;
    SET_GPR_U32(ctx, 31, 0x2BA518u);
    ctx->pc = 0x2BA514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA518u; }
    }
    if (ctx->pc != 0x2BA518u) { return; }
    ctx->pc = 0x2BA518u;
label_2ba518:
    // 0x2ba518: 0x3c04003b
    ctx->pc = 0x2ba518u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba51c:
    // 0x2ba51c: 0xc0b4a34
label_2ba520:
    if (ctx->pc == 0x2BA520u) {
        ctx->pc = 0x2BA520u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BA524u;
        goto label_2ba524;
    }
    ctx->pc = 0x2BA51Cu;
    SET_GPR_U32(ctx, 31, 0x2BA524u);
    ctx->pc = 0x2BA520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA524u; }
    }
    if (ctx->pc != 0x2BA524u) { return; }
    ctx->pc = 0x2BA524u;
label_2ba524:
    // 0x2ba524: 0x3c04003b
    ctx->pc = 0x2ba524u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba528:
    // 0x2ba528: 0xc0b4a34
label_2ba52c:
    if (ctx->pc == 0x2BA52Cu) {
        ctx->pc = 0x2BA52Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
        ctx->pc = 0x2BA530u;
        goto label_2ba530;
    }
    ctx->pc = 0x2BA528u;
    SET_GPR_U32(ctx, 31, 0x2BA530u);
    ctx->pc = 0x2BA52Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA530u; }
    }
    if (ctx->pc != 0x2BA530u) { return; }
    ctx->pc = 0x2BA530u;
label_2ba530:
    // 0x2ba530: 0xc64c0010
    ctx->pc = 0x2ba530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba534:
    // 0x2ba534: 0x46806320
    ctx->pc = 0x2ba534u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba538:
    // 0x2ba538: 0xc0be862
label_2ba53c:
    if (ctx->pc == 0x2BA53Cu) {
        ctx->pc = 0x2BA53Cu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA540u;
        goto label_2ba540;
    }
    ctx->pc = 0x2BA538u;
    SET_GPR_U32(ctx, 31, 0x2BA540u);
    ctx->pc = 0x2BA53Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA540u; }
    }
    if (ctx->pc != 0x2BA540u) { return; }
    ctx->pc = 0x2BA540u;
label_2ba540:
    // 0x2ba540: 0x26045ca0
    ctx->pc = 0x2ba540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba544:
    // 0x2ba544: 0xc0b4a34
label_2ba548:
    if (ctx->pc == 0x2BA548u) {
        ctx->pc = 0x2BA548u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA54Cu;
        goto label_2ba54c;
    }
    ctx->pc = 0x2BA544u;
    SET_GPR_U32(ctx, 31, 0x2BA54Cu);
    ctx->pc = 0x2BA548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA54Cu; }
    }
    if (ctx->pc != 0x2BA54Cu) { return; }
    ctx->pc = 0x2BA54Cu;
label_2ba54c:
    // 0x2ba54c: 0xc64c0014
    ctx->pc = 0x2ba54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba550:
    // 0x2ba550: 0x46806320
    ctx->pc = 0x2ba550u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba554:
    // 0x2ba554: 0xc0be862
label_2ba558:
    if (ctx->pc == 0x2BA558u) {
        ctx->pc = 0x2BA558u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA55Cu;
        goto label_2ba55c;
    }
    ctx->pc = 0x2BA554u;
    SET_GPR_U32(ctx, 31, 0x2BA55Cu);
    ctx->pc = 0x2BA558u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA55Cu; }
    }
    if (ctx->pc != 0x2BA55Cu) { return; }
    ctx->pc = 0x2BA55Cu;
label_2ba55c:
    // 0x2ba55c: 0x26045ca0
    ctx->pc = 0x2ba55cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba560:
    // 0x2ba560: 0xc0b4a34
label_2ba564:
    if (ctx->pc == 0x2BA564u) {
        ctx->pc = 0x2BA564u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA568u;
        goto label_2ba568;
    }
    ctx->pc = 0x2BA560u;
    SET_GPR_U32(ctx, 31, 0x2BA568u);
    ctx->pc = 0x2BA564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA568u; }
    }
    if (ctx->pc != 0x2BA568u) { return; }
    ctx->pc = 0x2BA568u;
label_2ba568:
    // 0x2ba568: 0xc64c0018
    ctx->pc = 0x2ba568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba56c:
    // 0x2ba56c: 0x46806320
    ctx->pc = 0x2ba56cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba570:
    // 0x2ba570: 0xc0be862
label_2ba574:
    if (ctx->pc == 0x2BA574u) {
        ctx->pc = 0x2BA574u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA578u;
        goto label_2ba578;
    }
    ctx->pc = 0x2BA570u;
    SET_GPR_U32(ctx, 31, 0x2BA578u);
    ctx->pc = 0x2BA574u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA578u; }
    }
    if (ctx->pc != 0x2BA578u) { return; }
    ctx->pc = 0x2BA578u;
label_2ba578:
    // 0x2ba578: 0x26045ca0
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba57c:
    // 0x2ba57c: 0xc0b4a34
label_2ba580:
    if (ctx->pc == 0x2BA580u) {
        ctx->pc = 0x2BA580u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA584u;
        goto label_2ba584;
    }
    ctx->pc = 0x2BA57Cu;
    SET_GPR_U32(ctx, 31, 0x2BA584u);
    ctx->pc = 0x2BA580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA584u; }
    }
    if (ctx->pc != 0x2BA584u) { return; }
    ctx->pc = 0x2BA584u;
label_2ba584:
    // 0x2ba584: 0x3c04003b
    ctx->pc = 0x2ba584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba588:
    // 0x2ba588: 0x24845d08
    ctx->pc = 0x2ba588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23816));
label_2ba58c:
    // 0x2ba58c: 0xc0b4a34
label_2ba590:
    if (ctx->pc == 0x2BA590u) {
        ctx->pc = 0x2BA590u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA594u;
        goto label_2ba594;
    }
    ctx->pc = 0x2BA58Cu;
    SET_GPR_U32(ctx, 31, 0x2BA594u);
    ctx->pc = 0x2BA590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA594u; }
    }
    if (ctx->pc != 0x2BA594u) { return; }
    ctx->pc = 0x2BA594u;
label_2ba594:
    // 0x2ba594: 0x8e43001c
    ctx->pc = 0x2ba594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba598:
    // 0x2ba598: 0x24020080
    ctx->pc = 0x2ba598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2ba59c:
    // 0x2ba59c: 0x14620006
label_2ba5a0:
    if (ctx->pc == 0x2BA5A0u) {
        ctx->pc = 0x2BA5A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2BA5A4u;
        goto label_2ba5a4;
    }
    ctx->pc = 0x2BA59Cu;
    {
        const bool branch_taken_0x2ba59c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BA5A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2ba59c) {
            ctx->pc = 0x2BA5B8u;
            goto label_2ba5b8;
        }
    }
    ctx->pc = 0x2BA5A4u;
label_2ba5a4:
    // 0x2ba5a4: 0x3c04003b
    ctx->pc = 0x2ba5a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba5a8:
    // 0x2ba5a8: 0xc0b4a34
label_2ba5ac:
    if (ctx->pc == 0x2BA5ACu) {
        ctx->pc = 0x2BA5ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
        ctx->pc = 0x2BA5B0u;
        goto label_2ba5b0;
    }
    ctx->pc = 0x2BA5A8u;
    SET_GPR_U32(ctx, 31, 0x2BA5B0u);
    ctx->pc = 0x2BA5ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5B0u; }
    }
    if (ctx->pc != 0x2BA5B0u) { return; }
    ctx->pc = 0x2BA5B0u;
label_2ba5b0:
    // 0x2ba5b0: 0x1000001a
label_2ba5b4:
    if (ctx->pc == 0x2BA5B4u) {
        ctx->pc = 0x2BA5B4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA5B8u;
        goto label_2ba5b8;
    }
    ctx->pc = 0x2BA5B0u;
    {
        const bool branch_taken_0x2ba5b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA5B4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba5b0) {
            ctx->pc = 0x2BA61Cu;
            goto label_2ba61c;
        }
    }
    ctx->pc = 0x2BA5B8u;
label_2ba5b8:
    // 0x2ba5b8: 0x54620006
label_2ba5bc:
    if (ctx->pc == 0x2BA5BCu) {
        ctx->pc = 0x2BA5BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA5C0u;
        goto label_2ba5c0;
    }
    ctx->pc = 0x2BA5B8u;
    {
        const bool branch_taken_0x2ba5b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ba5b8) {
            ctx->pc = 0x2BA5BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BA5D4u;
            goto label_2ba5d4;
        }
    }
    ctx->pc = 0x2BA5C0u;
label_2ba5c0:
    // 0x2ba5c0: 0x3c04003b
    ctx->pc = 0x2ba5c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba5c4:
    // 0x2ba5c4: 0xc0b4a34
label_2ba5c8:
    if (ctx->pc == 0x2BA5C8u) {
        ctx->pc = 0x2BA5C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
        ctx->pc = 0x2BA5CCu;
        goto label_2ba5cc;
    }
    ctx->pc = 0x2BA5C4u;
    SET_GPR_U32(ctx, 31, 0x2BA5CCu);
    ctx->pc = 0x2BA5C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5CCu; }
    }
    if (ctx->pc != 0x2BA5CCu) { return; }
    ctx->pc = 0x2BA5CCu;
label_2ba5cc:
    // 0x2ba5cc: 0x10000013
label_2ba5d0:
    if (ctx->pc == 0x2BA5D0u) {
        ctx->pc = 0x2BA5D0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA5D4u;
        goto label_2ba5d4;
    }
    ctx->pc = 0x2BA5CCu;
    {
        const bool branch_taken_0x2ba5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA5D0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba5cc) {
            ctx->pc = 0x2BA61Cu;
            goto label_2ba61c;
        }
    }
    ctx->pc = 0x2BA5D4u;
label_2ba5d4:
    // 0x2ba5d4: 0x54400006
label_2ba5d8:
    if (ctx->pc == 0x2BA5D8u) {
        ctx->pc = 0x2BA5D8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA5DCu;
        goto label_2ba5dc;
    }
    ctx->pc = 0x2BA5D4u;
    {
        const bool branch_taken_0x2ba5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ba5d4) {
            ctx->pc = 0x2BA5D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BA5F0u;
            goto label_2ba5f0;
        }
    }
    ctx->pc = 0x2BA5DCu;
label_2ba5dc:
    // 0x2ba5dc: 0x3c04003b
    ctx->pc = 0x2ba5dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba5e0:
    // 0x2ba5e0: 0xc0b4a34
label_2ba5e4:
    if (ctx->pc == 0x2BA5E4u) {
        ctx->pc = 0x2BA5E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
        ctx->pc = 0x2BA5E8u;
        goto label_2ba5e8;
    }
    ctx->pc = 0x2BA5E0u;
    SET_GPR_U32(ctx, 31, 0x2BA5E8u);
    ctx->pc = 0x2BA5E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5E8u; }
    }
    if (ctx->pc != 0x2BA5E8u) { return; }
    ctx->pc = 0x2BA5E8u;
label_2ba5e8:
    // 0x2ba5e8: 0x1000000c
label_2ba5ec:
    if (ctx->pc == 0x2BA5ECu) {
        ctx->pc = 0x2BA5ECu;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA5F0u;
        goto label_2ba5f0;
    }
    ctx->pc = 0x2BA5E8u;
    {
        const bool branch_taken_0x2ba5e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA5ECu;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba5e8) {
            ctx->pc = 0x2BA61Cu;
            goto label_2ba61c;
        }
    }
    ctx->pc = 0x2BA5F0u;
label_2ba5f0:
    // 0x2ba5f0: 0x24027fff
    ctx->pc = 0x2ba5f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_2ba5f4:
    // 0x2ba5f4: 0x54620006
label_2ba5f8:
    if (ctx->pc == 0x2BA5F8u) {
        ctx->pc = 0x2BA5F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA5FCu;
        goto label_2ba5fc;
    }
    ctx->pc = 0x2BA5F4u;
    {
        const bool branch_taken_0x2ba5f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ba5f4) {
            ctx->pc = 0x2BA5F8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BA610u;
            goto label_2ba610;
        }
    }
    ctx->pc = 0x2BA5FCu;
label_2ba5fc:
    // 0x2ba5fc: 0x3c04003b
    ctx->pc = 0x2ba5fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba600:
    // 0x2ba600: 0xc0b4a34
label_2ba604:
    if (ctx->pc == 0x2BA604u) {
        ctx->pc = 0x2BA604u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
        ctx->pc = 0x2BA608u;
        goto label_2ba608;
    }
    ctx->pc = 0x2BA600u;
    SET_GPR_U32(ctx, 31, 0x2BA608u);
    ctx->pc = 0x2BA604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA608u; }
    }
    if (ctx->pc != 0x2BA608u) { return; }
    ctx->pc = 0x2BA608u;
label_2ba608:
    // 0x2ba608: 0x10000004
label_2ba60c:
    if (ctx->pc == 0x2BA60Cu) {
        ctx->pc = 0x2BA60Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA610u;
        goto label_2ba610;
    }
    ctx->pc = 0x2BA608u;
    {
        const bool branch_taken_0x2ba608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA60Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba608) {
            ctx->pc = 0x2BA61Cu;
            goto label_2ba61c;
        }
    }
    ctx->pc = 0x2BA610u;
label_2ba610:
    // 0x2ba610: 0xc0b4a34
label_2ba614:
    if (ctx->pc == 0x2BA614u) {
        ctx->pc = 0x2BA614u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
        ctx->pc = 0x2BA618u;
        goto label_2ba618;
    }
    ctx->pc = 0x2BA610u;
    SET_GPR_U32(ctx, 31, 0x2BA618u);
    ctx->pc = 0x2BA614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA618u; }
    }
    if (ctx->pc != 0x2BA618u) { return; }
    ctx->pc = 0x2BA618u;
label_2ba618:
    // 0x2ba618: 0x3c11003b
    ctx->pc = 0x2ba618u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_2ba61c:
    // 0x2ba61c: 0xc0b4a34
label_2ba620:
    if (ctx->pc == 0x2BA620u) {
        ctx->pc = 0x2BA620u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BA624u;
        goto label_2ba624;
    }
    ctx->pc = 0x2BA61Cu;
    SET_GPR_U32(ctx, 31, 0x2BA624u);
    ctx->pc = 0x2BA620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA624u; }
    }
    if (ctx->pc != 0x2BA624u) { return; }
    ctx->pc = 0x2BA624u;
label_2ba624:
    // 0x2ba624: 0x3c04003b
    ctx->pc = 0x2ba624u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba628:
    // 0x2ba628: 0xc0b4a34
label_2ba62c:
    if (ctx->pc == 0x2BA62Cu) {
        ctx->pc = 0x2BA62Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
        ctx->pc = 0x2BA630u;
        goto label_2ba630;
    }
    ctx->pc = 0x2BA628u;
    SET_GPR_U32(ctx, 31, 0x2BA630u);
    ctx->pc = 0x2BA62Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA630u; }
    }
    if (ctx->pc != 0x2BA630u) { return; }
    ctx->pc = 0x2BA630u;
label_2ba630:
    // 0x2ba630: 0xc64c0020
    ctx->pc = 0x2ba630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba634:
    // 0x2ba634: 0x46806320
    ctx->pc = 0x2ba634u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba638:
    // 0x2ba638: 0x3c013b80
    ctx->pc = 0x2ba638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
label_2ba63c:
    // 0x2ba63c: 0x34218081
    ctx->pc = 0x2ba63cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
label_2ba640:
    // 0x2ba640: 0x4481a000
    ctx->pc = 0x2ba640u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba644:
    // 0x2ba644: 0xc0be862
label_2ba648:
    if (ctx->pc == 0x2BA648u) {
        ctx->pc = 0x2BA648u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA64Cu;
        goto label_2ba64c;
    }
    ctx->pc = 0x2BA644u;
    SET_GPR_U32(ctx, 31, 0x2BA64Cu);
    ctx->pc = 0x2BA648u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA64Cu; }
    }
    if (ctx->pc != 0x2BA64Cu) { return; }
    ctx->pc = 0x2BA64Cu;
label_2ba64c:
    // 0x2ba64c: 0x3c10003b
    ctx->pc = 0x2ba64cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba650:
    // 0x2ba650: 0x26045ca0
    ctx->pc = 0x2ba650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba654:
    // 0x2ba654: 0xc0b4a34
label_2ba658:
    if (ctx->pc == 0x2BA658u) {
        ctx->pc = 0x2BA658u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA65Cu;
        goto label_2ba65c;
    }
    ctx->pc = 0x2BA654u;
    SET_GPR_U32(ctx, 31, 0x2BA65Cu);
    ctx->pc = 0x2BA658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA65Cu; }
    }
    if (ctx->pc != 0x2BA65Cu) { return; }
    ctx->pc = 0x2BA65Cu;
label_2ba65c:
    // 0x2ba65c: 0xc64c0024
    ctx->pc = 0x2ba65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba660:
    // 0x2ba660: 0x46806320
    ctx->pc = 0x2ba660u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba664:
    // 0x2ba664: 0xc0be862
label_2ba668:
    if (ctx->pc == 0x2BA668u) {
        ctx->pc = 0x2BA668u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA66Cu;
        goto label_2ba66c;
    }
    ctx->pc = 0x2BA664u;
    SET_GPR_U32(ctx, 31, 0x2BA66Cu);
    ctx->pc = 0x2BA668u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA66Cu; }
    }
    if (ctx->pc != 0x2BA66Cu) { return; }
    ctx->pc = 0x2BA66Cu;
label_2ba66c:
    // 0x2ba66c: 0x26045ca0
    ctx->pc = 0x2ba66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba670:
    // 0x2ba670: 0xc0b4a34
label_2ba674:
    if (ctx->pc == 0x2BA674u) {
        ctx->pc = 0x2BA674u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA678u;
        goto label_2ba678;
    }
    ctx->pc = 0x2BA670u;
    SET_GPR_U32(ctx, 31, 0x2BA678u);
    ctx->pc = 0x2BA674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA678u; }
    }
    if (ctx->pc != 0x2BA678u) { return; }
    ctx->pc = 0x2BA678u;
label_2ba678:
    // 0x2ba678: 0xc64c0028
    ctx->pc = 0x2ba678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba67c:
    // 0x2ba67c: 0x46806320
    ctx->pc = 0x2ba67cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba680:
    // 0x2ba680: 0xc0be862
label_2ba684:
    if (ctx->pc == 0x2BA684u) {
        ctx->pc = 0x2BA684u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA688u;
        goto label_2ba688;
    }
    ctx->pc = 0x2BA680u;
    SET_GPR_U32(ctx, 31, 0x2BA688u);
    ctx->pc = 0x2BA684u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA688u; }
    }
    if (ctx->pc != 0x2BA688u) { return; }
    ctx->pc = 0x2BA688u;
label_2ba688:
    // 0x2ba688: 0x26045ca0
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba68c:
    // 0x2ba68c: 0xc0b4a34
label_2ba690:
    if (ctx->pc == 0x2BA690u) {
        ctx->pc = 0x2BA690u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA694u;
        goto label_2ba694;
    }
    ctx->pc = 0x2BA68Cu;
    SET_GPR_U32(ctx, 31, 0x2BA694u);
    ctx->pc = 0x2BA690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA694u; }
    }
    if (ctx->pc != 0x2BA694u) { return; }
    ctx->pc = 0x2BA694u;
label_2ba694:
    // 0x2ba694: 0x3c04003b
    ctx->pc = 0x2ba694u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba698:
    // 0x2ba698: 0xc0b4a34
label_2ba69c:
    if (ctx->pc == 0x2BA69Cu) {
        ctx->pc = 0x2BA69Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23920));
        ctx->pc = 0x2BA6A0u;
        goto label_2ba6a0;
    }
    ctx->pc = 0x2BA698u;
    SET_GPR_U32(ctx, 31, 0x2BA6A0u);
    ctx->pc = 0x2BA69Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23920));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6A0u; }
    }
    if (ctx->pc != 0x2BA6A0u) { return; }
    ctx->pc = 0x2BA6A0u;
label_2ba6a0:
    // 0x2ba6a0: 0x3c04003b
    ctx->pc = 0x2ba6a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba6a4:
    // 0x2ba6a4: 0x24845d80
    ctx->pc = 0x2ba6a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23936));
label_2ba6a8:
    // 0x2ba6a8: 0x8e450020
    ctx->pc = 0x2ba6a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2ba6ac:
    // 0x2ba6ac: 0x8e460024
    ctx->pc = 0x2ba6acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2ba6b0:
    // 0x2ba6b0: 0xc0b4a34
label_2ba6b4:
    if (ctx->pc == 0x2BA6B4u) {
        ctx->pc = 0x2BA6B4u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x2BA6B8u;
        goto label_2ba6b8;
    }
    ctx->pc = 0x2BA6B0u;
    SET_GPR_U32(ctx, 31, 0x2BA6B8u);
    ctx->pc = 0x2BA6B4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6B8u; }
    }
    if (ctx->pc != 0x2BA6B8u) { return; }
    ctx->pc = 0x2BA6B8u;
label_2ba6b8:
    // 0x2ba6b8: 0xc0b4a34
label_2ba6bc:
    if (ctx->pc == 0x2BA6BCu) {
        ctx->pc = 0x2BA6BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BA6C0u;
        goto label_2ba6c0;
    }
    ctx->pc = 0x2BA6B8u;
    SET_GPR_U32(ctx, 31, 0x2BA6C0u);
    ctx->pc = 0x2BA6BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6C0u; }
    }
    if (ctx->pc != 0x2BA6C0u) { return; }
    ctx->pc = 0x2BA6C0u;
label_2ba6c0:
    // 0x2ba6c0: 0x3c04003b
    ctx->pc = 0x2ba6c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba6c4:
    // 0x2ba6c4: 0xc0b4a34
label_2ba6c8:
    if (ctx->pc == 0x2BA6C8u) {
        ctx->pc = 0x2BA6C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
        ctx->pc = 0x2BA6CCu;
        goto label_2ba6cc;
    }
    ctx->pc = 0x2BA6C4u;
    SET_GPR_U32(ctx, 31, 0x2BA6CCu);
    ctx->pc = 0x2BA6C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6CCu; }
    }
    if (ctx->pc != 0x2BA6CCu) { return; }
    ctx->pc = 0x2BA6CCu;
label_2ba6cc:
    // 0x2ba6cc: 0xc64c0030
    ctx->pc = 0x2ba6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba6d0:
    // 0x2ba6d0: 0x46806320
    ctx->pc = 0x2ba6d0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba6d4:
    // 0x2ba6d4: 0x3c013d80
    ctx->pc = 0x2ba6d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15744 << 16));
label_2ba6d8:
    // 0x2ba6d8: 0x4481a000
    ctx->pc = 0x2ba6d8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba6dc:
    // 0x2ba6dc: 0xc0be862
label_2ba6e0:
    if (ctx->pc == 0x2BA6E0u) {
        ctx->pc = 0x2BA6E0u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA6E4u;
        goto label_2ba6e4;
    }
    ctx->pc = 0x2BA6DCu;
    SET_GPR_U32(ctx, 31, 0x2BA6E4u);
    ctx->pc = 0x2BA6E0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6E4u; }
    }
    if (ctx->pc != 0x2BA6E4u) { return; }
    ctx->pc = 0x2BA6E4u;
label_2ba6e4:
    // 0x2ba6e4: 0x26045ca0
    ctx->pc = 0x2ba6e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba6e8:
    // 0x2ba6e8: 0xc0b4a34
label_2ba6ec:
    if (ctx->pc == 0x2BA6ECu) {
        ctx->pc = 0x2BA6ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6F0u;
        goto label_2ba6f0;
    }
    ctx->pc = 0x2BA6E8u;
    SET_GPR_U32(ctx, 31, 0x2BA6F0u);
    ctx->pc = 0x2BA6ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6F0u; }
    }
    if (ctx->pc != 0x2BA6F0u) { return; }
    ctx->pc = 0x2BA6F0u;
label_2ba6f0:
    // 0x2ba6f0: 0xc64c0034
    ctx->pc = 0x2ba6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba6f4:
    // 0x2ba6f4: 0x46806320
    ctx->pc = 0x2ba6f4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba6f8:
    // 0x2ba6f8: 0xc0be862
label_2ba6fc:
    if (ctx->pc == 0x2BA6FCu) {
        ctx->pc = 0x2BA6FCu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA700u;
        goto label_2ba700;
    }
    ctx->pc = 0x2BA6F8u;
    SET_GPR_U32(ctx, 31, 0x2BA700u);
    ctx->pc = 0x2BA6FCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA700u; }
    }
    if (ctx->pc != 0x2BA700u) { return; }
    ctx->pc = 0x2BA700u;
label_2ba700:
    // 0x2ba700: 0x26045ca0
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba704:
    // 0x2ba704: 0xc0b4a34
label_2ba708:
    if (ctx->pc == 0x2BA708u) {
        ctx->pc = 0x2BA708u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA70Cu;
        goto label_2ba70c;
    }
    ctx->pc = 0x2BA704u;
    SET_GPR_U32(ctx, 31, 0x2BA70Cu);
    ctx->pc = 0x2BA708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA70Cu; }
    }
    if (ctx->pc != 0x2BA70Cu) { return; }
    ctx->pc = 0x2BA70Cu;
label_2ba70c:
    // 0x2ba70c: 0xc64c0038
    ctx->pc = 0x2ba70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba710:
    // 0x2ba710: 0x46806320
    ctx->pc = 0x2ba710u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba714:
    // 0x2ba714: 0x3c013800
    ctx->pc = 0x2ba714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
label_2ba718:
    // 0x2ba718: 0x4481a000
    ctx->pc = 0x2ba718u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ba71c:
    // 0x2ba71c: 0xc0be862
label_2ba720:
    if (ctx->pc == 0x2BA720u) {
        ctx->pc = 0x2BA720u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA724u;
        goto label_2ba724;
    }
    ctx->pc = 0x2BA71Cu;
    SET_GPR_U32(ctx, 31, 0x2BA724u);
    ctx->pc = 0x2BA720u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA724u; }
    }
    if (ctx->pc != 0x2BA724u) { return; }
    ctx->pc = 0x2BA724u;
label_2ba724:
    // 0x2ba724: 0x26045ca0
    ctx->pc = 0x2ba724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba728:
    // 0x2ba728: 0xc0b4a34
label_2ba72c:
    if (ctx->pc == 0x2BA72Cu) {
        ctx->pc = 0x2BA72Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA730u;
        goto label_2ba730;
    }
    ctx->pc = 0x2BA728u;
    SET_GPR_U32(ctx, 31, 0x2BA730u);
    ctx->pc = 0x2BA72Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA730u; }
    }
    if (ctx->pc != 0x2BA730u) { return; }
    ctx->pc = 0x2BA730u;
label_2ba730:
    // 0x2ba730: 0xc64c003c
    ctx->pc = 0x2ba730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba734:
    // 0x2ba734: 0x46806320
    ctx->pc = 0x2ba734u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_2ba738:
    // 0x2ba738: 0xc0be862
label_2ba73c:
    if (ctx->pc == 0x2BA73Cu) {
        ctx->pc = 0x2BA73Cu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x2BA740u;
        goto label_2ba740;
    }
    ctx->pc = 0x2BA738u;
    SET_GPR_U32(ctx, 31, 0x2BA740u);
    ctx->pc = 0x2BA73Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA740u; }
    }
    if (ctx->pc != 0x2BA740u) { return; }
    ctx->pc = 0x2BA740u;
label_2ba740:
    // 0x2ba740: 0x26045ca0
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba744:
    // 0x2ba744: 0xc0b4a34
label_2ba748:
    if (ctx->pc == 0x2BA748u) {
        ctx->pc = 0x2BA748u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA74Cu;
        goto label_2ba74c;
    }
    ctx->pc = 0x2BA744u;
    SET_GPR_U32(ctx, 31, 0x2BA74Cu);
    ctx->pc = 0x2BA748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA74Cu; }
    }
    if (ctx->pc != 0x2BA74Cu) { return; }
    ctx->pc = 0x2BA74Cu;
label_2ba74c:
    // 0x2ba74c: 0x10000140
label_2ba750:
    if (ctx->pc == 0x2BA750u) {
        ctx->pc = 0x2BA750u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BA754u;
        goto label_2ba754;
    }
    ctx->pc = 0x2BA74Cu;
    {
        const bool branch_taken_0x2ba74c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA750u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        if (branch_taken_0x2ba74c) {
            ctx->pc = 0x2BAC50u;
            goto label_2bac50;
        }
    }
    ctx->pc = 0x2BA754u;
label_2ba754:
    // 0x2ba754: 0x3c04003b
    ctx->pc = 0x2ba754u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba758:
    // 0x2ba758: 0x24845c88
    ctx->pc = 0x2ba758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
label_2ba75c:
    // 0x2ba75c: 0xc0b4a34
label_2ba760:
    if (ctx->pc == 0x2BA760u) {
        ctx->pc = 0x2BA760u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA764u;
        goto label_2ba764;
    }
    ctx->pc = 0x2BA75Cu;
    SET_GPR_U32(ctx, 31, 0x2BA764u);
    ctx->pc = 0x2BA760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA764u; }
    }
    if (ctx->pc != 0x2BA764u) { return; }
    ctx->pc = 0x2BA764u;
label_2ba764:
    // 0x2ba764: 0x1000ff27
label_2ba768:
    if (ctx->pc == 0x2BA768u) {
        ctx->pc = 0x2BA76Cu;
        goto label_2ba76c;
    }
    ctx->pc = 0x2BA764u;
    {
        const bool branch_taken_0x2ba764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ba764) {
            ctx->pc = 0x2BA404u;
            goto label_2ba404;
        }
    }
    ctx->pc = 0x2BA76Cu;
label_2ba76c:
    // 0x2ba76c: 0x3c04003b
    ctx->pc = 0x2ba76cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba770:
    // 0x2ba770: 0x24845de0
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24032));
label_2ba774:
    // 0x2ba774: 0xc0b4a34
label_2ba778:
    if (ctx->pc == 0x2BA778u) {
        ctx->pc = 0x2BA778u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA77Cu;
        goto label_2ba77c;
    }
    ctx->pc = 0x2BA774u;
    SET_GPR_U32(ctx, 31, 0x2BA77Cu);
    ctx->pc = 0x2BA778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA77Cu; }
    }
    if (ctx->pc != 0x2BA77Cu) { return; }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0xc641000c
    ctx->pc = 0x2ba77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ba780:
    // 0x2ba780: 0x44800000
    ctx->pc = 0x2ba780u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ba784:
    // 0x2ba784: 0x46000832
    ctx->pc = 0x2ba784u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba788:
    // 0x2ba788: 0x0
    ctx->pc = 0x2ba788u;
    // NOP
label_2ba78c:
    // 0x2ba78c: 0x45020006
label_2ba790:
    if (ctx->pc == 0x2BA790u) {
        ctx->pc = 0x2BA790u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2BA794u;
        goto label_2ba794;
    }
    ctx->pc = 0x2BA78Cu;
    {
        const bool branch_taken_0x2ba78c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba78c) {
            ctx->pc = 0x2BA790u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2BA7A8u;
            goto label_2ba7a8;
        }
    }
    ctx->pc = 0x2BA794u;
label_2ba794:
    // 0x2ba794: 0x3c04003b
    ctx->pc = 0x2ba794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba798:
    // 0x2ba798: 0xc0b4a34
label_2ba79c:
    if (ctx->pc == 0x2BA79Cu) {
        ctx->pc = 0x2BA79Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
        ctx->pc = 0x2BA7A0u;
        goto label_2ba7a0;
    }
    ctx->pc = 0x2BA798u;
    SET_GPR_U32(ctx, 31, 0x2BA7A0u);
    ctx->pc = 0x2BA79Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7A0u; }
    }
    if (ctx->pc != 0x2BA7A0u) { return; }
    ctx->pc = 0x2BA7A0u;
label_2ba7a0:
    // 0x2ba7a0: 0x10000031
label_2ba7a4:
    if (ctx->pc == 0x2BA7A4u) {
        ctx->pc = 0x2BA7A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA7A8u;
        goto label_2ba7a8;
    }
    ctx->pc = 0x2BA7A0u;
    {
        const bool branch_taken_0x2ba7a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA7A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba7a0) {
            ctx->pc = 0x2BA868u;
            goto label_2ba868;
        }
    }
    ctx->pc = 0x2BA7A8u;
label_2ba7a8:
    // 0x2ba7a8: 0xc64c000c
    ctx->pc = 0x2ba7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba7ac:
    // 0x2ba7ac: 0x0
    ctx->pc = 0x2ba7acu;
    // NOP
label_2ba7b0:
    // 0x2ba7b0: 0x0
    ctx->pc = 0x2ba7b0u;
    // NOP
label_2ba7b4:
    // 0x2ba7b4: 0x460c0303
    ctx->pc = 0x2ba7b4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2ba7b8:
    // 0x2ba7b8: 0xc0be862
label_2ba7bc:
    if (ctx->pc == 0x2BA7BCu) {
        ctx->pc = 0x2BA7BCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA7C0u;
        goto label_2ba7c0;
    }
    ctx->pc = 0x2BA7B8u;
    SET_GPR_U32(ctx, 31, 0x2BA7C0u);
    ctx->pc = 0x2BA7BCu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7C0u; }
    }
    if (ctx->pc != 0x2BA7C0u) { return; }
    ctx->pc = 0x2BA7C0u;
label_2ba7c0:
    // 0x2ba7c0: 0x26045ca0
    ctx->pc = 0x2ba7c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba7c4:
    // 0x2ba7c4: 0xc0b4a34
label_2ba7c8:
    if (ctx->pc == 0x2BA7C8u) {
        ctx->pc = 0x2BA7C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA7CCu;
        goto label_2ba7cc;
    }
    ctx->pc = 0x2BA7C4u;
    SET_GPR_U32(ctx, 31, 0x2BA7CCu);
    ctx->pc = 0x2BA7C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7CCu; }
    }
    if (ctx->pc != 0x2BA7CCu) { return; }
    ctx->pc = 0x2BA7CCu;
label_2ba7cc:
    // 0x2ba7cc: 0xc6400004
    ctx->pc = 0x2ba7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ba7d0:
    // 0x2ba7d0: 0xc64c000c
    ctx->pc = 0x2ba7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba7d4:
    // 0x2ba7d4: 0x0
    ctx->pc = 0x2ba7d4u;
    // NOP
label_2ba7d8:
    // 0x2ba7d8: 0x0
    ctx->pc = 0x2ba7d8u;
    // NOP
label_2ba7dc:
    // 0x2ba7dc: 0x460c0303
    ctx->pc = 0x2ba7dcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2ba7e0:
    // 0x2ba7e0: 0xc0be862
label_2ba7e4:
    if (ctx->pc == 0x2BA7E4u) {
        ctx->pc = 0x2BA7E8u;
        goto label_2ba7e8;
    }
    ctx->pc = 0x2BA7E0u;
    SET_GPR_U32(ctx, 31, 0x2BA7E8u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7E8u; }
    }
    if (ctx->pc != 0x2BA7E8u) { return; }
    ctx->pc = 0x2BA7E8u;
label_2ba7e8:
    // 0x2ba7e8: 0x26045ca0
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba7ec:
    // 0x2ba7ec: 0xc0b4a34
label_2ba7f0:
    if (ctx->pc == 0x2BA7F0u) {
        ctx->pc = 0x2BA7F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA7F4u;
        goto label_2ba7f4;
    }
    ctx->pc = 0x2BA7ECu;
    SET_GPR_U32(ctx, 31, 0x2BA7F4u);
    ctx->pc = 0x2BA7F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7F4u; }
    }
    if (ctx->pc != 0x2BA7F4u) { return; }
    ctx->pc = 0x2BA7F4u;
label_2ba7f4:
    // 0x2ba7f4: 0xc6400008
    ctx->pc = 0x2ba7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ba7f8:
    // 0x2ba7f8: 0xc64c000c
    ctx->pc = 0x2ba7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba7fc:
    // 0x2ba7fc: 0x0
    ctx->pc = 0x2ba7fcu;
    // NOP
label_2ba800:
    // 0x2ba800: 0x0
    ctx->pc = 0x2ba800u;
    // NOP
label_2ba804:
    // 0x2ba804: 0x460c0303
    ctx->pc = 0x2ba804u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2ba808:
    // 0x2ba808: 0xc0be862
label_2ba80c:
    if (ctx->pc == 0x2BA80Cu) {
        ctx->pc = 0x2BA810u;
        goto label_2ba810;
    }
    ctx->pc = 0x2BA808u;
    SET_GPR_U32(ctx, 31, 0x2BA810u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA810u; }
    }
    if (ctx->pc != 0x2BA810u) { return; }
    ctx->pc = 0x2BA810u;
label_2ba810:
    // 0x2ba810: 0x26045ca0
    ctx->pc = 0x2ba810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba814:
    // 0x2ba814: 0xc0b4a34
label_2ba818:
    if (ctx->pc == 0x2BA818u) {
        ctx->pc = 0x2BA818u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA81Cu;
        goto label_2ba81c;
    }
    ctx->pc = 0x2BA814u;
    SET_GPR_U32(ctx, 31, 0x2BA81Cu);
    ctx->pc = 0x2BA818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA81Cu; }
    }
    if (ctx->pc != 0x2BA81Cu) { return; }
    ctx->pc = 0x2BA81Cu;
label_2ba81c:
    // 0x2ba81c: 0x3c013f80
    ctx->pc = 0x2ba81cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2ba820:
    // 0x2ba820: 0x44810000
    ctx->pc = 0x2ba820u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2ba824:
    // 0x2ba824: 0xc64c000c
    ctx->pc = 0x2ba824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba828:
    // 0x2ba828: 0x0
    ctx->pc = 0x2ba828u;
    // NOP
label_2ba82c:
    // 0x2ba82c: 0x0
    ctx->pc = 0x2ba82cu;
    // NOP
label_2ba830:
    // 0x2ba830: 0x460c0303
    ctx->pc = 0x2ba830u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2ba834:
    // 0x2ba834: 0xc0be862
label_2ba838:
    if (ctx->pc == 0x2BA838u) {
        ctx->pc = 0x2BA83Cu;
        goto label_2ba83c;
    }
    ctx->pc = 0x2BA834u;
    SET_GPR_U32(ctx, 31, 0x2BA83Cu);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA83Cu; }
    }
    if (ctx->pc != 0x2BA83Cu) { return; }
    ctx->pc = 0x2BA83Cu;
label_2ba83c:
    // 0x2ba83c: 0x3c04003b
    ctx->pc = 0x2ba83cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba840:
    // 0x2ba840: 0x24845cc8
    ctx->pc = 0x2ba840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23752));
label_2ba844:
    // 0x2ba844: 0xc0b4a34
label_2ba848:
    if (ctx->pc == 0x2BA848u) {
        ctx->pc = 0x2BA848u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA84Cu;
        goto label_2ba84c;
    }
    ctx->pc = 0x2BA844u;
    SET_GPR_U32(ctx, 31, 0x2BA84Cu);
    ctx->pc = 0x2BA848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA84Cu; }
    }
    if (ctx->pc != 0x2BA84Cu) { return; }
    ctx->pc = 0x2BA84Cu;
label_2ba84c:
    // 0x2ba84c: 0x3c04003b
    ctx->pc = 0x2ba84cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba850:
    // 0x2ba850: 0xc0b4a34
label_2ba854:
    if (ctx->pc == 0x2BA854u) {
        ctx->pc = 0x2BA854u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24152));
        ctx->pc = 0x2BA858u;
        goto label_2ba858;
    }
    ctx->pc = 0x2BA850u;
    SET_GPR_U32(ctx, 31, 0x2BA858u);
    ctx->pc = 0x2BA854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24152));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA858u; }
    }
    if (ctx->pc != 0x2BA858u) { return; }
    ctx->pc = 0x2BA858u;
label_2ba858:
    // 0x2ba858: 0x3c04003b
    ctx->pc = 0x2ba858u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba85c:
    // 0x2ba85c: 0xc0b4a34
label_2ba860:
    if (ctx->pc == 0x2BA860u) {
        ctx->pc = 0x2BA860u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BA864u;
        goto label_2ba864;
    }
    ctx->pc = 0x2BA85Cu;
    SET_GPR_U32(ctx, 31, 0x2BA864u);
    ctx->pc = 0x2BA860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA864u; }
    }
    if (ctx->pc != 0x2BA864u) { return; }
    ctx->pc = 0x2BA864u;
label_2ba864:
    // 0x2ba864: 0x3c04003b
    ctx->pc = 0x2ba864u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba868:
    // 0x2ba868: 0xc0b4a34
label_2ba86c:
    if (ctx->pc == 0x2BA86Cu) {
        ctx->pc = 0x2BA86Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24168));
        ctx->pc = 0x2BA870u;
        goto label_2ba870;
    }
    ctx->pc = 0x2BA868u;
    SET_GPR_U32(ctx, 31, 0x2BA870u);
    ctx->pc = 0x2BA86Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24168));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA870u; }
    }
    if (ctx->pc != 0x2BA870u) { return; }
    ctx->pc = 0x2BA870u;
label_2ba870:
    // 0x2ba870: 0xc0be862
label_2ba874:
    if (ctx->pc == 0x2BA874u) {
        ctx->pc = 0x2BA874u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA878u;
        goto label_2ba878;
    }
    ctx->pc = 0x2BA870u;
    SET_GPR_U32(ctx, 31, 0x2BA878u);
    ctx->pc = 0x2BA874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA878u; }
    }
    if (ctx->pc != 0x2BA878u) { return; }
    ctx->pc = 0x2BA878u;
label_2ba878:
    // 0x2ba878: 0x3c10003b
    ctx->pc = 0x2ba878u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba87c:
    // 0x2ba87c: 0x26045ca0
    ctx->pc = 0x2ba87cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba880:
    // 0x2ba880: 0xc0b4a34
label_2ba884:
    if (ctx->pc == 0x2BA884u) {
        ctx->pc = 0x2BA884u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA888u;
        goto label_2ba888;
    }
    ctx->pc = 0x2BA880u;
    SET_GPR_U32(ctx, 31, 0x2BA888u);
    ctx->pc = 0x2BA884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA888u; }
    }
    if (ctx->pc != 0x2BA888u) { return; }
    ctx->pc = 0x2BA888u;
label_2ba888:
    // 0x2ba888: 0xc0be862
label_2ba88c:
    if (ctx->pc == 0x2BA88Cu) {
        ctx->pc = 0x2BA88Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA890u;
        goto label_2ba890;
    }
    ctx->pc = 0x2BA888u;
    SET_GPR_U32(ctx, 31, 0x2BA890u);
    ctx->pc = 0x2BA88Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA890u; }
    }
    if (ctx->pc != 0x2BA890u) { return; }
    ctx->pc = 0x2BA890u;
label_2ba890:
    // 0x2ba890: 0x26045ca0
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba894:
    // 0x2ba894: 0xc0b4a34
label_2ba898:
    if (ctx->pc == 0x2BA898u) {
        ctx->pc = 0x2BA898u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA89Cu;
        goto label_2ba89c;
    }
    ctx->pc = 0x2BA894u;
    SET_GPR_U32(ctx, 31, 0x2BA89Cu);
    ctx->pc = 0x2BA898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA89Cu; }
    }
    if (ctx->pc != 0x2BA89Cu) { return; }
    ctx->pc = 0x2BA89Cu;
label_2ba89c:
    // 0x2ba89c: 0xc0be862
label_2ba8a0:
    if (ctx->pc == 0x2BA8A0u) {
        ctx->pc = 0x2BA8A0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA8A4u;
        goto label_2ba8a4;
    }
    ctx->pc = 0x2BA89Cu;
    SET_GPR_U32(ctx, 31, 0x2BA8A4u);
    ctx->pc = 0x2BA8A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8A4u; }
    }
    if (ctx->pc != 0x2BA8A4u) { return; }
    ctx->pc = 0x2BA8A4u;
label_2ba8a4:
    // 0x2ba8a4: 0x26045ca0
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba8a8:
    // 0x2ba8a8: 0xc0b4a34
label_2ba8ac:
    if (ctx->pc == 0x2BA8ACu) {
        ctx->pc = 0x2BA8ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8B0u;
        goto label_2ba8b0;
    }
    ctx->pc = 0x2BA8A8u;
    SET_GPR_U32(ctx, 31, 0x2BA8B0u);
    ctx->pc = 0x2BA8ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8B0u; }
    }
    if (ctx->pc != 0x2BA8B0u) { return; }
    ctx->pc = 0x2BA8B0u;
label_2ba8b0:
    // 0x2ba8b0: 0xc0be862
label_2ba8b4:
    if (ctx->pc == 0x2BA8B4u) {
        ctx->pc = 0x2BA8B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA8B8u;
        goto label_2ba8b8;
    }
    ctx->pc = 0x2BA8B0u;
    SET_GPR_U32(ctx, 31, 0x2BA8B8u);
    ctx->pc = 0x2BA8B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8B8u; }
    }
    if (ctx->pc != 0x2BA8B8u) { return; }
    ctx->pc = 0x2BA8B8u;
label_2ba8b8:
    // 0x2ba8b8: 0x26045ca0
    ctx->pc = 0x2ba8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba8bc:
    // 0x2ba8bc: 0xc0b4a34
label_2ba8c0:
    if (ctx->pc == 0x2BA8C0u) {
        ctx->pc = 0x2BA8C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8C4u;
        goto label_2ba8c4;
    }
    ctx->pc = 0x2BA8BCu;
    SET_GPR_U32(ctx, 31, 0x2BA8C4u);
    ctx->pc = 0x2BA8C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8C4u; }
    }
    if (ctx->pc != 0x2BA8C4u) { return; }
    ctx->pc = 0x2BA8C4u;
label_2ba8c4:
    // 0x2ba8c4: 0x3c04003b
    ctx->pc = 0x2ba8c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba8c8:
    // 0x2ba8c8: 0xc0b4a34
label_2ba8cc:
    if (ctx->pc == 0x2BA8CCu) {
        ctx->pc = 0x2BA8CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BA8D0u;
        goto label_2ba8d0;
    }
    ctx->pc = 0x2BA8C8u;
    SET_GPR_U32(ctx, 31, 0x2BA8D0u);
    ctx->pc = 0x2BA8CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8D0u; }
    }
    if (ctx->pc != 0x2BA8D0u) { return; }
    ctx->pc = 0x2BA8D0u;
label_2ba8d0:
    // 0x2ba8d0: 0x3c04003b
    ctx->pc = 0x2ba8d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba8d4:
    // 0x2ba8d4: 0xc0b4a34
label_2ba8d8:
    if (ctx->pc == 0x2BA8D8u) {
        ctx->pc = 0x2BA8D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
        ctx->pc = 0x2BA8DCu;
        goto label_2ba8dc;
    }
    ctx->pc = 0x2BA8D4u;
    SET_GPR_U32(ctx, 31, 0x2BA8DCu);
    ctx->pc = 0x2BA8D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23768));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8DCu; }
    }
    if (ctx->pc != 0x2BA8DCu) { return; }
    ctx->pc = 0x2BA8DCu;
label_2ba8dc:
    // 0x2ba8dc: 0x3c04003b
    ctx->pc = 0x2ba8dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba8e0:
    // 0x2ba8e0: 0x24845cf0
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23792));
label_2ba8e4:
    // 0x2ba8e4: 0xc0b4a34
label_2ba8e8:
    if (ctx->pc == 0x2BA8E8u) {
        ctx->pc = 0x2BA8E8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2BA8ECu;
        goto label_2ba8ec;
    }
    ctx->pc = 0x2BA8E4u;
    SET_GPR_U32(ctx, 31, 0x2BA8ECu);
    ctx->pc = 0x2BA8E8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8ECu; }
    }
    if (ctx->pc != 0x2BA8ECu) { return; }
    ctx->pc = 0x2BA8ECu;
label_2ba8ec:
    // 0x2ba8ec: 0xc6400014
    ctx->pc = 0x2ba8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ba8f0:
    // 0x2ba8f0: 0x46800020
    ctx->pc = 0x2ba8f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2ba8f4:
    // 0x2ba8f4: 0x3c013c00
    ctx->pc = 0x2ba8f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
label_2ba8f8:
    // 0x2ba8f8: 0x44816000
    ctx->pc = 0x2ba8f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2ba8fc:
    // 0x2ba8fc: 0xc0be862
label_2ba900:
    if (ctx->pc == 0x2BA900u) {
        ctx->pc = 0x2BA900u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x2BA904u;
        goto label_2ba904;
    }
    ctx->pc = 0x2BA8FCu;
    SET_GPR_U32(ctx, 31, 0x2BA904u);
    ctx->pc = 0x2BA900u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA904u; }
    }
    if (ctx->pc != 0x2BA904u) { return; }
    ctx->pc = 0x2BA904u;
label_2ba904:
    // 0x2ba904: 0x26045ca0
    ctx->pc = 0x2ba904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba908:
    // 0x2ba908: 0xc0b4a34
label_2ba90c:
    if (ctx->pc == 0x2BA90Cu) {
        ctx->pc = 0x2BA90Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA910u;
        goto label_2ba910;
    }
    ctx->pc = 0x2BA908u;
    SET_GPR_U32(ctx, 31, 0x2BA910u);
    ctx->pc = 0x2BA90Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA910u; }
    }
    if (ctx->pc != 0x2BA910u) { return; }
    ctx->pc = 0x2BA910u;
label_2ba910:
    // 0x2ba910: 0xc0be862
label_2ba914:
    if (ctx->pc == 0x2BA914u) {
        ctx->pc = 0x2BA914u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA918u;
        goto label_2ba918;
    }
    ctx->pc = 0x2BA910u;
    SET_GPR_U32(ctx, 31, 0x2BA918u);
    ctx->pc = 0x2BA914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA918u; }
    }
    if (ctx->pc != 0x2BA918u) { return; }
    ctx->pc = 0x2BA918u;
label_2ba918:
    // 0x2ba918: 0x3c04003b
    ctx->pc = 0x2ba918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba91c:
    // 0x2ba91c: 0x24845cc8
    ctx->pc = 0x2ba91cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23752));
label_2ba920:
    // 0x2ba920: 0xc0b4a34
label_2ba924:
    if (ctx->pc == 0x2BA924u) {
        ctx->pc = 0x2BA924u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA928u;
        goto label_2ba928;
    }
    ctx->pc = 0x2BA920u;
    SET_GPR_U32(ctx, 31, 0x2BA928u);
    ctx->pc = 0x2BA924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA928u; }
    }
    if (ctx->pc != 0x2BA928u) { return; }
    ctx->pc = 0x2BA928u;
label_2ba928:
    // 0x2ba928: 0x3c04003b
    ctx->pc = 0x2ba928u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba92c:
    // 0x2ba92c: 0x24845d08
    ctx->pc = 0x2ba92cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23816));
label_2ba930:
    // 0x2ba930: 0xc0b4a34
label_2ba934:
    if (ctx->pc == 0x2BA934u) {
        ctx->pc = 0x2BA934u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA938u;
        goto label_2ba938;
    }
    ctx->pc = 0x2BA930u;
    SET_GPR_U32(ctx, 31, 0x2BA938u);
    ctx->pc = 0x2BA934u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA938u; }
    }
    if (ctx->pc != 0x2BA938u) { return; }
    ctx->pc = 0x2BA938u;
label_2ba938:
    // 0x2ba938: 0x8e43001c
    ctx->pc = 0x2ba938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ba93c:
    // 0x2ba93c: 0x24020080
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2ba940:
    // 0x2ba940: 0x14620006
label_2ba944:
    if (ctx->pc == 0x2BA944u) {
        ctx->pc = 0x2BA944u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2BA948u;
        goto label_2ba948;
    }
    ctx->pc = 0x2BA940u;
    {
        const bool branch_taken_0x2ba940 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BA944u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2ba940) {
            ctx->pc = 0x2BA95Cu;
            goto label_2ba95c;
        }
    }
    ctx->pc = 0x2BA948u;
label_2ba948:
    // 0x2ba948: 0x3c04003b
    ctx->pc = 0x2ba948u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba94c:
    // 0x2ba94c: 0xc0b4a34
label_2ba950:
    if (ctx->pc == 0x2BA950u) {
        ctx->pc = 0x2BA950u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
        ctx->pc = 0x2BA954u;
        goto label_2ba954;
    }
    ctx->pc = 0x2BA94Cu;
    SET_GPR_U32(ctx, 31, 0x2BA954u);
    ctx->pc = 0x2BA950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA954u; }
    }
    if (ctx->pc != 0x2BA954u) { return; }
    ctx->pc = 0x2BA954u;
label_2ba954:
    // 0x2ba954: 0x1000001a
label_2ba958:
    if (ctx->pc == 0x2BA958u) {
        ctx->pc = 0x2BA958u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA95Cu;
        goto label_2ba95c;
    }
    ctx->pc = 0x2BA954u;
    {
        const bool branch_taken_0x2ba954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA958u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba954) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA95Cu;
label_2ba95c:
    // 0x2ba95c: 0x54620006
label_2ba960:
    if (ctx->pc == 0x2BA960u) {
        ctx->pc = 0x2BA960u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA964u;
        goto label_2ba964;
    }
    ctx->pc = 0x2BA95Cu;
    {
        const bool branch_taken_0x2ba95c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ba95c) {
            ctx->pc = 0x2BA960u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA964u;
label_2ba964:
    // 0x2ba964: 0x3c04003b
    ctx->pc = 0x2ba964u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba968:
    // 0x2ba968: 0xc0b4a34
label_2ba96c:
    if (ctx->pc == 0x2BA96Cu) {
        ctx->pc = 0x2BA96Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
        ctx->pc = 0x2BA970u;
        goto label_2ba970;
    }
    ctx->pc = 0x2BA968u;
    SET_GPR_U32(ctx, 31, 0x2BA970u);
    ctx->pc = 0x2BA96Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA970u; }
    }
    if (ctx->pc != 0x2BA970u) { return; }
    ctx->pc = 0x2BA970u;
label_2ba970:
    // 0x2ba970: 0x10000013
label_2ba974:
    if (ctx->pc == 0x2BA974u) {
        ctx->pc = 0x2BA974u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA978u;
        goto label_2ba978;
    }
    ctx->pc = 0x2BA970u;
    {
        const bool branch_taken_0x2ba970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA974u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba970) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA978u;
label_2ba978:
    // 0x2ba978: 0x54400006
label_2ba97c:
    if (ctx->pc == 0x2BA97Cu) {
        ctx->pc = 0x2BA97Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BA980u;
        goto label_2ba980;
    }
    ctx->pc = 0x2BA978u;
    {
        const bool branch_taken_0x2ba978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ba978) {
            ctx->pc = 0x2BA97Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BA994u;
            goto label_2ba994;
        }
    }
    ctx->pc = 0x2BA980u;
label_2ba980:
    // 0x2ba980: 0x3c04003b
    ctx->pc = 0x2ba980u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba984:
    // 0x2ba984: 0xc0b4a34
label_2ba988:
    if (ctx->pc == 0x2BA988u) {
        ctx->pc = 0x2BA988u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
        ctx->pc = 0x2BA98Cu;
        goto label_2ba98c;
    }
    ctx->pc = 0x2BA984u;
    SET_GPR_U32(ctx, 31, 0x2BA98Cu);
    ctx->pc = 0x2BA988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA98Cu; }
    }
    if (ctx->pc != 0x2BA98Cu) { return; }
    ctx->pc = 0x2BA98Cu;
label_2ba98c:
    // 0x2ba98c: 0x1000000c
label_2ba990:
    if (ctx->pc == 0x2BA990u) {
        ctx->pc = 0x2BA990u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA994u;
        goto label_2ba994;
    }
    ctx->pc = 0x2BA98Cu;
    {
        const bool branch_taken_0x2ba98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA990u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba98c) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA994u;
label_2ba994:
    // 0x2ba994: 0x24027fff
    ctx->pc = 0x2ba994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_2ba998:
    // 0x2ba998: 0x54620006
label_2ba99c:
    if (ctx->pc == 0x2BA99Cu) {
        ctx->pc = 0x2BA99Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA9A0u;
        goto label_2ba9a0;
    }
    ctx->pc = 0x2BA998u;
    {
        const bool branch_taken_0x2ba998 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ba998) {
            ctx->pc = 0x2BA99Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BA9B4u;
            goto label_2ba9b4;
        }
    }
    ctx->pc = 0x2BA9A0u;
label_2ba9a0:
    // 0x2ba9a0: 0x3c04003b
    ctx->pc = 0x2ba9a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba9a4:
    // 0x2ba9a4: 0xc0b4a34
label_2ba9a8:
    if (ctx->pc == 0x2BA9A8u) {
        ctx->pc = 0x2BA9A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
        ctx->pc = 0x2BA9ACu;
        goto label_2ba9ac;
    }
    ctx->pc = 0x2BA9A4u;
    SET_GPR_U32(ctx, 31, 0x2BA9ACu);
    ctx->pc = 0x2BA9A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9ACu; }
    }
    if (ctx->pc != 0x2BA9ACu) { return; }
    ctx->pc = 0x2BA9ACu;
label_2ba9ac:
    // 0x2ba9ac: 0x10000004
label_2ba9b0:
    if (ctx->pc == 0x2BA9B0u) {
        ctx->pc = 0x2BA9B0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        ctx->pc = 0x2BA9B4u;
        goto label_2ba9b4;
    }
    ctx->pc = 0x2BA9ACu;
    {
        const bool branch_taken_0x2ba9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BA9B0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2ba9ac) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA9B4u;
label_2ba9b4:
    // 0x2ba9b4: 0xc0b4a34
label_2ba9b8:
    if (ctx->pc == 0x2BA9B8u) {
        ctx->pc = 0x2BA9B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
        ctx->pc = 0x2BA9BCu;
        goto label_2ba9bc;
    }
    ctx->pc = 0x2BA9B4u;
    SET_GPR_U32(ctx, 31, 0x2BA9BCu);
    ctx->pc = 0x2BA9B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9BCu; }
    }
    if (ctx->pc != 0x2BA9BCu) { return; }
    ctx->pc = 0x2BA9BCu;
label_2ba9bc:
    // 0x2ba9bc: 0x3c11003b
    ctx->pc = 0x2ba9bcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_2ba9c0:
    // 0x2ba9c0: 0xc0b4a34
label_2ba9c4:
    if (ctx->pc == 0x2BA9C4u) {
        ctx->pc = 0x2BA9C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BA9C8u;
        goto label_2ba9c8;
    }
    ctx->pc = 0x2BA9C0u;
    SET_GPR_U32(ctx, 31, 0x2BA9C8u);
    ctx->pc = 0x2BA9C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9C8u; }
    }
    if (ctx->pc != 0x2BA9C8u) { return; }
    ctx->pc = 0x2BA9C8u;
label_2ba9c8:
    // 0x2ba9c8: 0x3c04003b
    ctx->pc = 0x2ba9c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2ba9cc:
    // 0x2ba9cc: 0xc0b4a34
label_2ba9d0:
    if (ctx->pc == 0x2BA9D0u) {
        ctx->pc = 0x2BA9D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
        ctx->pc = 0x2BA9D4u;
        goto label_2ba9d4;
    }
    ctx->pc = 0x2BA9CCu;
    SET_GPR_U32(ctx, 31, 0x2BA9D4u);
    ctx->pc = 0x2BA9D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23896));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9D4u; }
    }
    if (ctx->pc != 0x2BA9D4u) { return; }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0xc0be862
label_2ba9d8:
    if (ctx->pc == 0x2BA9D8u) {
        ctx->pc = 0x2BA9D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA9DCu;
        goto label_2ba9dc;
    }
    ctx->pc = 0x2BA9D4u;
    SET_GPR_U32(ctx, 31, 0x2BA9DCu);
    ctx->pc = 0x2BA9D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9DCu; }
    }
    if (ctx->pc != 0x2BA9DCu) { return; }
    ctx->pc = 0x2BA9DCu;
label_2ba9dc:
    // 0x2ba9dc: 0x3c10003b
    ctx->pc = 0x2ba9dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2ba9e0:
    // 0x2ba9e0: 0x26045ca0
    ctx->pc = 0x2ba9e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba9e4:
    // 0x2ba9e4: 0xc0b4a34
label_2ba9e8:
    if (ctx->pc == 0x2BA9E8u) {
        ctx->pc = 0x2BA9E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9ECu;
        goto label_2ba9ec;
    }
    ctx->pc = 0x2BA9E4u;
    SET_GPR_U32(ctx, 31, 0x2BA9ECu);
    ctx->pc = 0x2BA9E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9ECu; }
    }
    if (ctx->pc != 0x2BA9ECu) { return; }
    ctx->pc = 0x2BA9ECu;
label_2ba9ec:
    // 0x2ba9ec: 0xc0be862
label_2ba9f0:
    if (ctx->pc == 0x2BA9F0u) {
        ctx->pc = 0x2BA9F0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BA9F4u;
        goto label_2ba9f4;
    }
    ctx->pc = 0x2BA9ECu;
    SET_GPR_U32(ctx, 31, 0x2BA9F4u);
    ctx->pc = 0x2BA9F0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9F4u; }
    }
    if (ctx->pc != 0x2BA9F4u) { return; }
    ctx->pc = 0x2BA9F4u;
label_2ba9f4:
    // 0x2ba9f4: 0x26045ca0
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2ba9f8:
    // 0x2ba9f8: 0xc0b4a34
label_2ba9fc:
    if (ctx->pc == 0x2BA9FCu) {
        ctx->pc = 0x2BA9FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA00u;
        goto label_2baa00;
    }
    ctx->pc = 0x2BA9F8u;
    SET_GPR_U32(ctx, 31, 0x2BAA00u);
    ctx->pc = 0x2BA9FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA00u; }
    }
    if (ctx->pc != 0x2BAA00u) { return; }
    ctx->pc = 0x2BAA00u;
label_2baa00:
    // 0x2baa00: 0xc0be862
label_2baa04:
    if (ctx->pc == 0x2BAA04u) {
        ctx->pc = 0x2BAA04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA08u;
        goto label_2baa08;
    }
    ctx->pc = 0x2BAA00u;
    SET_GPR_U32(ctx, 31, 0x2BAA08u);
    ctx->pc = 0x2BAA04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA08u; }
    }
    if (ctx->pc != 0x2BAA08u) { return; }
    ctx->pc = 0x2BAA08u;
label_2baa08:
    // 0x2baa08: 0x26045ca0
    ctx->pc = 0x2baa08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa0c:
    // 0x2baa0c: 0xc0b4a34
label_2baa10:
    if (ctx->pc == 0x2BAA10u) {
        ctx->pc = 0x2BAA10u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA14u;
        goto label_2baa14;
    }
    ctx->pc = 0x2BAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA14u);
    ctx->pc = 0x2BAA10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA14u; }
    }
    if (ctx->pc != 0x2BAA14u) { return; }
    ctx->pc = 0x2BAA14u;
label_2baa14:
    // 0x2baa14: 0xc0be862
label_2baa18:
    if (ctx->pc == 0x2BAA18u) {
        ctx->pc = 0x2BAA18u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA1Cu;
        goto label_2baa1c;
    }
    ctx->pc = 0x2BAA14u;
    SET_GPR_U32(ctx, 31, 0x2BAA1Cu);
    ctx->pc = 0x2BAA18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA1Cu; }
    }
    if (ctx->pc != 0x2BAA1Cu) { return; }
    ctx->pc = 0x2BAA1Cu;
label_2baa1c:
    // 0x2baa1c: 0x26045ca0
    ctx->pc = 0x2baa1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa20:
    // 0x2baa20: 0xc0b4a34
label_2baa24:
    if (ctx->pc == 0x2BAA24u) {
        ctx->pc = 0x2BAA24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA28u;
        goto label_2baa28;
    }
    ctx->pc = 0x2BAA20u;
    SET_GPR_U32(ctx, 31, 0x2BAA28u);
    ctx->pc = 0x2BAA24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA28u; }
    }
    if (ctx->pc != 0x2BAA28u) { return; }
    ctx->pc = 0x2BAA28u;
label_2baa28:
    // 0x2baa28: 0x3c04003b
    ctx->pc = 0x2baa28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baa2c:
    // 0x2baa2c: 0xc0b4a34
label_2baa30:
    if (ctx->pc == 0x2BAA30u) {
        ctx->pc = 0x2BAA30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23960));
        ctx->pc = 0x2BAA34u;
        goto label_2baa34;
    }
    ctx->pc = 0x2BAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA34u);
    ctx->pc = 0x2BAA30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23960));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA34u; }
    }
    if (ctx->pc != 0x2BAA34u) { return; }
    ctx->pc = 0x2BAA34u;
label_2baa34:
    // 0x2baa34: 0xc0b4a34
label_2baa38:
    if (ctx->pc == 0x2BAA38u) {
        ctx->pc = 0x2BAA38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BAA3Cu;
        goto label_2baa3c;
    }
    ctx->pc = 0x2BAA34u;
    SET_GPR_U32(ctx, 31, 0x2BAA3Cu);
    ctx->pc = 0x2BAA38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA3Cu; }
    }
    if (ctx->pc != 0x2BAA3Cu) { return; }
    ctx->pc = 0x2BAA3Cu;
label_2baa3c:
    // 0x2baa3c: 0x3c04003b
    ctx->pc = 0x2baa3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baa40:
    // 0x2baa40: 0xc0b4a34
label_2baa44:
    if (ctx->pc == 0x2BAA44u) {
        ctx->pc = 0x2BAA44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
        ctx->pc = 0x2BAA48u;
        goto label_2baa48;
    }
    ctx->pc = 0x2BAA40u;
    SET_GPR_U32(ctx, 31, 0x2BAA48u);
    ctx->pc = 0x2BAA44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23984));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA48u; }
    }
    if (ctx->pc != 0x2BAA48u) { return; }
    ctx->pc = 0x2BAA48u;
label_2baa48:
    // 0x2baa48: 0xc0be862
label_2baa4c:
    if (ctx->pc == 0x2BAA4Cu) {
        ctx->pc = 0x2BAA4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA50u;
        goto label_2baa50;
    }
    ctx->pc = 0x2BAA48u;
    SET_GPR_U32(ctx, 31, 0x2BAA50u);
    ctx->pc = 0x2BAA4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA50u; }
    }
    if (ctx->pc != 0x2BAA50u) { return; }
    ctx->pc = 0x2BAA50u;
label_2baa50:
    // 0x2baa50: 0x26045ca0
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa54:
    // 0x2baa54: 0xc0b4a34
label_2baa58:
    if (ctx->pc == 0x2BAA58u) {
        ctx->pc = 0x2BAA58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA5Cu;
        goto label_2baa5c;
    }
    ctx->pc = 0x2BAA54u;
    SET_GPR_U32(ctx, 31, 0x2BAA5Cu);
    ctx->pc = 0x2BAA58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA5Cu; }
    }
    if (ctx->pc != 0x2BAA5Cu) { return; }
    ctx->pc = 0x2BAA5Cu;
label_2baa5c:
    // 0x2baa5c: 0xc0be862
label_2baa60:
    if (ctx->pc == 0x2BAA60u) {
        ctx->pc = 0x2BAA60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA64u;
        goto label_2baa64;
    }
    ctx->pc = 0x2BAA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA64u);
    ctx->pc = 0x2BAA60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA64u; }
    }
    if (ctx->pc != 0x2BAA64u) { return; }
    ctx->pc = 0x2BAA64u;
label_2baa64:
    // 0x2baa64: 0x26045ca0
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa68:
    // 0x2baa68: 0xc0b4a34
label_2baa6c:
    if (ctx->pc == 0x2BAA6Cu) {
        ctx->pc = 0x2BAA6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA70u;
        goto label_2baa70;
    }
    ctx->pc = 0x2BAA68u;
    SET_GPR_U32(ctx, 31, 0x2BAA70u);
    ctx->pc = 0x2BAA6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA70u; }
    }
    if (ctx->pc != 0x2BAA70u) { return; }
    ctx->pc = 0x2BAA70u;
label_2baa70:
    // 0x2baa70: 0xc0be862
label_2baa74:
    if (ctx->pc == 0x2BAA74u) {
        ctx->pc = 0x2BAA74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA78u;
        goto label_2baa78;
    }
    ctx->pc = 0x2BAA70u;
    SET_GPR_U32(ctx, 31, 0x2BAA78u);
    ctx->pc = 0x2BAA74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA78u; }
    }
    if (ctx->pc != 0x2BAA78u) { return; }
    ctx->pc = 0x2BAA78u;
label_2baa78:
    // 0x2baa78: 0x26045ca0
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa7c:
    // 0x2baa7c: 0xc0b4a34
label_2baa80:
    if (ctx->pc == 0x2BAA80u) {
        ctx->pc = 0x2BAA80u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA84u;
        goto label_2baa84;
    }
    ctx->pc = 0x2BAA7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA84u);
    ctx->pc = 0x2BAA80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA84u; }
    }
    if (ctx->pc != 0x2BAA84u) { return; }
    ctx->pc = 0x2BAA84u;
label_2baa84:
    // 0x2baa84: 0xc0be862
label_2baa88:
    if (ctx->pc == 0x2BAA88u) {
        ctx->pc = 0x2BAA88u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAA8Cu;
        goto label_2baa8c;
    }
    ctx->pc = 0x2BAA84u;
    SET_GPR_U32(ctx, 31, 0x2BAA8Cu);
    ctx->pc = 0x2BAA88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA8Cu; }
    }
    if (ctx->pc != 0x2BAA8Cu) { return; }
    ctx->pc = 0x2BAA8Cu;
label_2baa8c:
    // 0x2baa8c: 0x26045ca0
    ctx->pc = 0x2baa8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2baa90:
    // 0x2baa90: 0xc0b4a34
label_2baa94:
    if (ctx->pc == 0x2BAA94u) {
        ctx->pc = 0x2BAA94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA98u;
        goto label_2baa98;
    }
    ctx->pc = 0x2BAA90u;
    SET_GPR_U32(ctx, 31, 0x2BAA98u);
    ctx->pc = 0x2BAA94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA98u; }
    }
    if (ctx->pc != 0x2BAA98u) { return; }
    ctx->pc = 0x2BAA98u;
label_2baa98:
    // 0x2baa98: 0x8e530010
    ctx->pc = 0x2baa98u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2baa9c:
    // 0x2baa9c: 0x3c04003b
    ctx->pc = 0x2baa9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baaa0:
    // 0x2baaa0: 0xc0b4a34
label_2baaa4:
    if (ctx->pc == 0x2BAAA4u) {
        ctx->pc = 0x2BAAA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24008));
        ctx->pc = 0x2BAAA8u;
        goto label_2baaa8;
    }
    ctx->pc = 0x2BAAA0u;
    SET_GPR_U32(ctx, 31, 0x2BAAA8u);
    ctx->pc = 0x2BAAA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24008));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAA8u; }
    }
    if (ctx->pc != 0x2BAAA8u) { return; }
    ctx->pc = 0x2BAAA8u;
label_2baaa8:
    // 0x2baaa8: 0x132942
    ctx->pc = 0x2baaa8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 5));
label_2baaac:
    // 0x2baaac: 0x3c10003b
    ctx->pc = 0x2baaacu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2baab0:
    // 0x2baab0: 0x26045dd0
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2baab4:
    // 0x2baab4: 0xc0b4a34
label_2baab8:
    if (ctx->pc == 0x2BAAB8u) {
        ctx->pc = 0x2BAAB8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BAABCu;
        goto label_2baabc;
    }
    ctx->pc = 0x2BAAB4u;
    SET_GPR_U32(ctx, 31, 0x2BAABCu);
    ctx->pc = 0x2BAAB8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAABCu; }
    }
    if (ctx->pc != 0x2BAABCu) { return; }
    ctx->pc = 0x2BAABCu;
label_2baabc:
    // 0x2baabc: 0x132902
    ctx->pc = 0x2baabcu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 4));
label_2baac0:
    // 0x2baac0: 0x26045dd0
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2baac4:
    // 0x2baac4: 0xc0b4a34
label_2baac8:
    if (ctx->pc == 0x2BAAC8u) {
        ctx->pc = 0x2BAAC8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BAACCu;
        goto label_2baacc;
    }
    ctx->pc = 0x2BAAC4u;
    SET_GPR_U32(ctx, 31, 0x2BAACCu);
    ctx->pc = 0x2BAAC8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAACCu; }
    }
    if (ctx->pc != 0x2BAACCu) { return; }
    ctx->pc = 0x2BAACCu;
label_2baacc:
    // 0x2baacc: 0x1328c2
    ctx->pc = 0x2baaccu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 3));
label_2baad0:
    // 0x2baad0: 0x26045dd0
    ctx->pc = 0x2baad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2baad4:
    // 0x2baad4: 0xc0b4a34
label_2baad8:
    if (ctx->pc == 0x2BAAD8u) {
        ctx->pc = 0x2BAAD8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BAADCu;
        goto label_2baadc;
    }
    ctx->pc = 0x2BAAD4u;
    SET_GPR_U32(ctx, 31, 0x2BAADCu);
    ctx->pc = 0x2BAAD8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAADCu; }
    }
    if (ctx->pc != 0x2BAADCu) { return; }
    ctx->pc = 0x2BAADCu;
label_2baadc:
    // 0x2baadc: 0x132882
    ctx->pc = 0x2baadcu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 2));
label_2baae0:
    // 0x2baae0: 0x26045dd0
    ctx->pc = 0x2baae0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2baae4:
    // 0x2baae4: 0xc0b4a34
label_2baae8:
    if (ctx->pc == 0x2BAAE8u) {
        ctx->pc = 0x2BAAE8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BAAECu;
        goto label_2baaec;
    }
    ctx->pc = 0x2BAAE4u;
    SET_GPR_U32(ctx, 31, 0x2BAAECu);
    ctx->pc = 0x2BAAE8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAECu; }
    }
    if (ctx->pc != 0x2BAAECu) { return; }
    ctx->pc = 0x2BAAECu;
label_2baaec:
    // 0x2baaec: 0x132842
    ctx->pc = 0x2baaecu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 19), 1));
label_2baaf0:
    // 0x2baaf0: 0x26045dd0
    ctx->pc = 0x2baaf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24016));
label_2baaf4:
    // 0x2baaf4: 0xc0b4a34
label_2baaf8:
    if (ctx->pc == 0x2BAAF8u) {
        ctx->pc = 0x2BAAF8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2BAAFCu;
        goto label_2baafc;
    }
    ctx->pc = 0x2BAAF4u;
    SET_GPR_U32(ctx, 31, 0x2BAAFCu);
    ctx->pc = 0x2BAAF8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAFCu; }
    }
    if (ctx->pc != 0x2BAAFCu) { return; }
    ctx->pc = 0x2BAAFCu;
label_2baafc:
    // 0x2baafc: 0x3c04003b
    ctx->pc = 0x2baafcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bab00:
    // 0x2bab00: 0x24845dd8
    ctx->pc = 0x2bab00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24024));
label_2bab04:
    // 0x2bab04: 0xc0b4a34
label_2bab08:
    if (ctx->pc == 0x2BAB08u) {
        ctx->pc = 0x2BAB08u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2BAB0Cu;
        goto label_2bab0c;
    }
    ctx->pc = 0x2BAB04u;
    SET_GPR_U32(ctx, 31, 0x2BAB0Cu);
    ctx->pc = 0x2BAB08u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB0Cu; }
    }
    if (ctx->pc != 0x2BAB0Cu) { return; }
    ctx->pc = 0x2BAB0Cu;
label_2bab0c:
    // 0x2bab0c: 0x10000050
label_2bab10:
    if (ctx->pc == 0x2BAB10u) {
        ctx->pc = 0x2BAB10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        ctx->pc = 0x2BAB14u;
        goto label_2bab14;
    }
    ctx->pc = 0x2BAB0Cu;
    {
        const bool branch_taken_0x2bab0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAB10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18040));
        if (branch_taken_0x2bab0c) {
            ctx->pc = 0x2BAC50u;
            goto label_2bac50;
        }
    }
    ctx->pc = 0x2BAB14u;
label_2bab14:
    // 0x2bab14: 0x3c04003b
    ctx->pc = 0x2bab14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bab18:
    // 0x2bab18: 0x24845de0
    ctx->pc = 0x2bab18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24032));
label_2bab1c:
    // 0x2bab1c: 0xc0b4a34
label_2bab20:
    if (ctx->pc == 0x2BAB20u) {
        ctx->pc = 0x2BAB20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB24u;
        goto label_2bab24;
    }
    ctx->pc = 0x2BAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB24u);
    ctx->pc = 0x2BAB20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB24u; }
    }
    if (ctx->pc != 0x2BAB24u) { return; }
    ctx->pc = 0x2BAB24u;
label_2bab24:
    // 0x2bab24: 0xc641000c
    ctx->pc = 0x2bab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bab28:
    // 0x2bab28: 0x44800000
    ctx->pc = 0x2bab28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2bab2c:
    // 0x2bab2c: 0x46000832
    ctx->pc = 0x2bab2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bab30:
    // 0x2bab30: 0x0
    ctx->pc = 0x2bab30u;
    // NOP
label_2bab34:
    // 0x2bab34: 0x45000005
label_2bab38:
    if (ctx->pc == 0x2BAB38u) {
        ctx->pc = 0x2BAB38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAB3Cu;
        goto label_2bab3c;
    }
    ctx->pc = 0x2BAB34u;
    {
        const bool branch_taken_0x2bab34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAB38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bab34) {
            ctx->pc = 0x2BAB4Cu;
            goto label_2bab4c;
        }
    }
    ctx->pc = 0x2BAB3Cu;
label_2bab3c:
    // 0x2bab3c: 0xc0b4a34
label_2bab40:
    if (ctx->pc == 0x2BAB40u) {
        ctx->pc = 0x2BAB40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
        ctx->pc = 0x2BAB44u;
        goto label_2bab44;
    }
    ctx->pc = 0x2BAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB44u);
    ctx->pc = 0x2BAB40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24056));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB44u; }
    }
    if (ctx->pc != 0x2BAB44u) { return; }
    ctx->pc = 0x2BAB44u;
label_2bab44:
    // 0x2bab44: 0x10000017
label_2bab48:
    if (ctx->pc == 0x2BAB48u) {
        ctx->pc = 0x2BAB48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2BAB4Cu;
        goto label_2bab4c;
    }
    ctx->pc = 0x2BAB44u;
    {
        const bool branch_taken_0x2bab44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAB48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        if (branch_taken_0x2bab44) {
            ctx->pc = 0x2BABA4u;
            goto label_2baba4;
        }
    }
    ctx->pc = 0x2BAB4Cu;
label_2bab4c:
    // 0x2bab4c: 0xc0be862
label_2bab50:
    if (ctx->pc == 0x2BAB50u) {
        ctx->pc = 0x2BAB50u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAB54u;
        goto label_2bab54;
    }
    ctx->pc = 0x2BAB4Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB54u);
    ctx->pc = 0x2BAB50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB54u; }
    }
    if (ctx->pc != 0x2BAB54u) { return; }
    ctx->pc = 0x2BAB54u;
label_2bab54:
    // 0x2bab54: 0x3c10003b
    ctx->pc = 0x2bab54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2bab58:
    // 0x2bab58: 0x26045e08
    ctx->pc = 0x2bab58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2bab5c:
    // 0x2bab5c: 0xc0b4a34
label_2bab60:
    if (ctx->pc == 0x2BAB60u) {
        ctx->pc = 0x2BAB60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB64u;
        goto label_2bab64;
    }
    ctx->pc = 0x2BAB5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB64u);
    ctx->pc = 0x2BAB60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB64u; }
    }
    if (ctx->pc != 0x2BAB64u) { return; }
    ctx->pc = 0x2BAB64u;
label_2bab64:
    // 0x2bab64: 0xc0be862
label_2bab68:
    if (ctx->pc == 0x2BAB68u) {
        ctx->pc = 0x2BAB68u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAB6Cu;
        goto label_2bab6c;
    }
    ctx->pc = 0x2BAB64u;
    SET_GPR_U32(ctx, 31, 0x2BAB6Cu);
    ctx->pc = 0x2BAB68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB6Cu; }
    }
    if (ctx->pc != 0x2BAB6Cu) { return; }
    ctx->pc = 0x2BAB6Cu;
label_2bab6c:
    // 0x2bab6c: 0x26045e08
    ctx->pc = 0x2bab6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2bab70:
    // 0x2bab70: 0xc0b4a34
label_2bab74:
    if (ctx->pc == 0x2BAB74u) {
        ctx->pc = 0x2BAB74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB78u;
        goto label_2bab78;
    }
    ctx->pc = 0x2BAB70u;
    SET_GPR_U32(ctx, 31, 0x2BAB78u);
    ctx->pc = 0x2BAB74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB78u; }
    }
    if (ctx->pc != 0x2BAB78u) { return; }
    ctx->pc = 0x2BAB78u;
label_2bab78:
    // 0x2bab78: 0xc0be862
label_2bab7c:
    if (ctx->pc == 0x2BAB7Cu) {
        ctx->pc = 0x2BAB7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAB80u;
        goto label_2bab80;
    }
    ctx->pc = 0x2BAB78u;
    SET_GPR_U32(ctx, 31, 0x2BAB80u);
    ctx->pc = 0x2BAB7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB80u; }
    }
    if (ctx->pc != 0x2BAB80u) { return; }
    ctx->pc = 0x2BAB80u;
label_2bab80:
    // 0x2bab80: 0x26045e08
    ctx->pc = 0x2bab80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2bab84:
    // 0x2bab84: 0xc0b4a34
label_2bab88:
    if (ctx->pc == 0x2BAB88u) {
        ctx->pc = 0x2BAB88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB8Cu;
        goto label_2bab8c;
    }
    ctx->pc = 0x2BAB84u;
    SET_GPR_U32(ctx, 31, 0x2BAB8Cu);
    ctx->pc = 0x2BAB88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB8Cu; }
    }
    if (ctx->pc != 0x2BAB8Cu) { return; }
    ctx->pc = 0x2BAB8Cu;
label_2bab8c:
    // 0x2bab8c: 0xc0be862
label_2bab90:
    if (ctx->pc == 0x2BAB90u) {
        ctx->pc = 0x2BAB90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAB94u;
        goto label_2bab94;
    }
    ctx->pc = 0x2BAB8Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB94u);
    ctx->pc = 0x2BAB90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB94u; }
    }
    if (ctx->pc != 0x2BAB94u) { return; }
    ctx->pc = 0x2BAB94u;
label_2bab94:
    // 0x2bab94: 0x26045e08
    ctx->pc = 0x2bab94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24072));
label_2bab98:
    // 0x2bab98: 0xc0b4a34
label_2bab9c:
    if (ctx->pc == 0x2BAB9Cu) {
        ctx->pc = 0x2BAB9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BABA0u;
        goto label_2baba0;
    }
    ctx->pc = 0x2BAB98u;
    SET_GPR_U32(ctx, 31, 0x2BABA0u);
    ctx->pc = 0x2BAB9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABA0u; }
    }
    if (ctx->pc != 0x2BABA0u) { return; }
    ctx->pc = 0x2BABA0u;
label_2baba0:
    // 0x2baba0: 0x8e450010
    ctx->pc = 0x2baba0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2baba4:
    // 0x2baba4: 0x3c04003b
    ctx->pc = 0x2baba4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baba8:
    // 0x2baba8: 0x24845e18
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24088));
label_2babac:
    // 0x2babac: 0xc0b4a34
label_2babb0:
    if (ctx->pc == 0x2BABB0u) {
        ctx->pc = 0x2BABB0u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x2BABB4u;
        goto label_2babb4;
    }
    ctx->pc = 0x2BABACu;
    SET_GPR_U32(ctx, 31, 0x2BABB4u);
    ctx->pc = 0x2BABB0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABB4u; }
    }
    if (ctx->pc != 0x2BABB4u) { return; }
    ctx->pc = 0x2BABB4u;
label_2babb4:
    // 0x2babb4: 0x3c04003b
    ctx->pc = 0x2babb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2babb8:
    // 0x2babb8: 0x24845e28
    ctx->pc = 0x2babb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24104));
label_2babbc:
    // 0x2babbc: 0xc0b4a34
label_2babc0:
    if (ctx->pc == 0x2BABC0u) {
        ctx->pc = 0x2BABC0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BABC4u;
        goto label_2babc4;
    }
    ctx->pc = 0x2BABBCu;
    SET_GPR_U32(ctx, 31, 0x2BABC4u);
    ctx->pc = 0x2BABC0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABC4u; }
    }
    if (ctx->pc != 0x2BABC4u) { return; }
    ctx->pc = 0x2BABC4u;
label_2babc4:
    // 0x2babc4: 0x8e43001c
    ctx->pc = 0x2babc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2babc8:
    // 0x2babc8: 0x24020080
    ctx->pc = 0x2babc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2babcc:
    // 0x2babcc: 0x14620006
label_2babd0:
    if (ctx->pc == 0x2BABD0u) {
        ctx->pc = 0x2BABD0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        ctx->pc = 0x2BABD4u;
        goto label_2babd4;
    }
    ctx->pc = 0x2BABCCu;
    {
        const bool branch_taken_0x2babcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BABD0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x2babcc) {
            ctx->pc = 0x2BABE8u;
            goto label_2babe8;
        }
    }
    ctx->pc = 0x2BABD4u;
label_2babd4:
    // 0x2babd4: 0x3c04003b
    ctx->pc = 0x2babd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2babd8:
    // 0x2babd8: 0xc0b4a34
label_2babdc:
    if (ctx->pc == 0x2BABDCu) {
        ctx->pc = 0x2BABDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
        ctx->pc = 0x2BABE0u;
        goto label_2babe0;
    }
    ctx->pc = 0x2BABD8u;
    SET_GPR_U32(ctx, 31, 0x2BABE0u);
    ctx->pc = 0x2BABDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23840));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABE0u; }
    }
    if (ctx->pc != 0x2BABE0u) { return; }
    ctx->pc = 0x2BABE0u;
label_2babe0:
    // 0x2babe0: 0x1000001a
label_2babe4:
    if (ctx->pc == 0x2BABE4u) {
        ctx->pc = 0x2BABE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BABE8u;
        goto label_2babe8;
    }
    ctx->pc = 0x2BABE0u;
    {
        const bool branch_taken_0x2babe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BABE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2babe0) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BABE8u;
label_2babe8:
    // 0x2babe8: 0x54620006
label_2babec:
    if (ctx->pc == 0x2BABECu) {
        ctx->pc = 0x2BABECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BABF0u;
        goto label_2babf0;
    }
    ctx->pc = 0x2BABE8u;
    {
        const bool branch_taken_0x2babe8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2babe8) {
            ctx->pc = 0x2BABECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BAC04u;
            goto label_2bac04;
        }
    }
    ctx->pc = 0x2BABF0u;
label_2babf0:
    // 0x2babf0: 0x3c04003b
    ctx->pc = 0x2babf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2babf4:
    // 0x2babf4: 0xc0b4a34
label_2babf8:
    if (ctx->pc == 0x2BABF8u) {
        ctx->pc = 0x2BABF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
        ctx->pc = 0x2BABFCu;
        goto label_2babfc;
    }
    ctx->pc = 0x2BABF4u;
    SET_GPR_U32(ctx, 31, 0x2BABFCu);
    ctx->pc = 0x2BABF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23856));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BABFCu; }
    }
    if (ctx->pc != 0x2BABFCu) { return; }
    ctx->pc = 0x2BABFCu;
label_2babfc:
    // 0x2babfc: 0x10000013
label_2bac00:
    if (ctx->pc == 0x2BAC00u) {
        ctx->pc = 0x2BAC00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAC04u;
        goto label_2bac04;
    }
    ctx->pc = 0x2BABFCu;
    {
        const bool branch_taken_0x2babfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAC00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2babfc) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BAC04u;
label_2bac04:
    // 0x2bac04: 0x54400006
label_2bac08:
    if (ctx->pc == 0x2BAC08u) {
        ctx->pc = 0x2BAC08u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BAC0Cu;
        goto label_2bac0c;
    }
    ctx->pc = 0x2BAC04u;
    {
        const bool branch_taken_0x2bac04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bac04) {
            ctx->pc = 0x2BAC08u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2BAC20u;
            goto label_2bac20;
        }
    }
    ctx->pc = 0x2BAC0Cu;
label_2bac0c:
    // 0x2bac0c: 0x3c04003b
    ctx->pc = 0x2bac0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bac10:
    // 0x2bac10: 0xc0b4a34
label_2bac14:
    if (ctx->pc == 0x2BAC14u) {
        ctx->pc = 0x2BAC14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
        ctx->pc = 0x2BAC18u;
        goto label_2bac18;
    }
    ctx->pc = 0x2BAC10u;
    SET_GPR_U32(ctx, 31, 0x2BAC18u);
    ctx->pc = 0x2BAC14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23864));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC18u; }
    }
    if (ctx->pc != 0x2BAC18u) { return; }
    ctx->pc = 0x2BAC18u;
label_2bac18:
    // 0x2bac18: 0x1000000c
label_2bac1c:
    if (ctx->pc == 0x2BAC1Cu) {
        ctx->pc = 0x2BAC1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAC20u;
        goto label_2bac20;
    }
    ctx->pc = 0x2BAC18u;
    {
        const bool branch_taken_0x2bac18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAC1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bac18) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BAC20u;
label_2bac20:
    // 0x2bac20: 0x24027fff
    ctx->pc = 0x2bac20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_2bac24:
    // 0x2bac24: 0x54620006
label_2bac28:
    if (ctx->pc == 0x2BAC28u) {
        ctx->pc = 0x2BAC28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAC2Cu;
        goto label_2bac2c;
    }
    ctx->pc = 0x2BAC24u;
    {
        const bool branch_taken_0x2bac24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bac24) {
            ctx->pc = 0x2BAC28u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BAC40u;
            goto label_2bac40;
        }
    }
    ctx->pc = 0x2BAC2Cu;
label_2bac2c:
    // 0x2bac2c: 0x3c04003b
    ctx->pc = 0x2bac2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bac30:
    // 0x2bac30: 0xc0b4a34
label_2bac34:
    if (ctx->pc == 0x2BAC34u) {
        ctx->pc = 0x2BAC34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
        ctx->pc = 0x2BAC38u;
        goto label_2bac38;
    }
    ctx->pc = 0x2BAC30u;
    SET_GPR_U32(ctx, 31, 0x2BAC38u);
    ctx->pc = 0x2BAC34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC38u; }
    }
    if (ctx->pc != 0x2BAC38u) { return; }
    ctx->pc = 0x2BAC38u;
label_2bac38:
    // 0x2bac38: 0x10000004
label_2bac3c:
    if (ctx->pc == 0x2BAC3Cu) {
        ctx->pc = 0x2BAC3Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAC40u;
        goto label_2bac40;
    }
    ctx->pc = 0x2BAC38u;
    {
        const bool branch_taken_0x2bac38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAC3Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bac38) {
            ctx->pc = 0x2BAC4Cu;
            goto label_2bac4c;
        }
    }
    ctx->pc = 0x2BAC40u;
label_2bac40:
    // 0x2bac40: 0xc0b4a34
label_2bac44:
    if (ctx->pc == 0x2BAC44u) {
        ctx->pc = 0x2BAC44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
        ctx->pc = 0x2BAC48u;
        goto label_2bac48;
    }
    ctx->pc = 0x2BAC40u;
    SET_GPR_U32(ctx, 31, 0x2BAC48u);
    ctx->pc = 0x2BAC44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23888));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC48u; }
    }
    if (ctx->pc != 0x2BAC48u) { return; }
    ctx->pc = 0x2BAC48u;
label_2bac48:
    // 0x2bac48: 0x3c04003b
    ctx->pc = 0x2bac48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bac4c:
    // 0x2bac4c: 0x24844678
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
label_2bac50:
    // 0x2bac50: 0xc0b4a34
label_2bac54:
    if (ctx->pc == 0x2BAC54u) {
        ctx->pc = 0x2BAC54u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x2BAC58u;
        goto label_2bac58;
    }
    ctx->pc = 0x2BAC50u;
    SET_GPR_U32(ctx, 31, 0x2BAC58u);
    ctx->pc = 0x2BAC54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC58u; }
    }
    if (ctx->pc != 0x2BAC58u) { return; }
    ctx->pc = 0x2BAC58u;
label_2bac58:
    // 0x2bac58: 0x100000b8
label_2bac5c:
    if (ctx->pc == 0x2BAC5Cu) {
        ctx->pc = 0x2BAC5Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 6));
        ctx->pc = 0x2BAC60u;
        goto label_2bac60;
    }
    ctx->pc = 0x2BAC58u;
    {
        const bool branch_taken_0x2bac58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAC5Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 6));
        if (branch_taken_0x2bac58) {
            ctx->pc = 0x2BAF3Cu;
            goto label_2baf3c;
        }
    }
    ctx->pc = 0x2BAC60u;
label_2bac60:
    // 0x2bac60: 0x3c04003b
    ctx->pc = 0x2bac60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bac64:
    // 0x2bac64: 0x24845e80
    ctx->pc = 0x2bac64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24192));
label_2bac68:
    // 0x2bac68: 0xc0b4a34
label_2bac6c:
    if (ctx->pc == 0x2BAC6Cu) {
        ctx->pc = 0x2BAC6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC70u;
        goto label_2bac70;
    }
    ctx->pc = 0x2BAC68u;
    SET_GPR_U32(ctx, 31, 0x2BAC70u);
    ctx->pc = 0x2BAC6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC70u; }
    }
    if (ctx->pc != 0x2BAC70u) { return; }
    ctx->pc = 0x2BAC70u;
label_2bac70:
    // 0x2bac70: 0xc0be862
label_2bac74:
    if (ctx->pc == 0x2BAC74u) {
        ctx->pc = 0x2BAC74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAC78u;
        goto label_2bac78;
    }
    ctx->pc = 0x2BAC70u;
    SET_GPR_U32(ctx, 31, 0x2BAC78u);
    ctx->pc = 0x2BAC74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC78u; }
    }
    if (ctx->pc != 0x2BAC78u) { return; }
    ctx->pc = 0x2BAC78u;
label_2bac78:
    // 0x2bac78: 0x3c04003b
    ctx->pc = 0x2bac78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bac7c:
    // 0x2bac7c: 0x24845e98
    ctx->pc = 0x2bac7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24216));
label_2bac80:
    // 0x2bac80: 0xc0b4a34
label_2bac84:
    if (ctx->pc == 0x2BAC84u) {
        ctx->pc = 0x2BAC84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC88u;
        goto label_2bac88;
    }
    ctx->pc = 0x2BAC80u;
    SET_GPR_U32(ctx, 31, 0x2BAC88u);
    ctx->pc = 0x2BAC84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC88u; }
    }
    if (ctx->pc != 0x2BAC88u) { return; }
    ctx->pc = 0x2BAC88u;
label_2bac88:
    // 0x2bac88: 0xc0be862
label_2bac8c:
    if (ctx->pc == 0x2BAC8Cu) {
        ctx->pc = 0x2BAC8Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BAC90u;
        goto label_2bac90;
    }
    ctx->pc = 0x2BAC88u;
    SET_GPR_U32(ctx, 31, 0x2BAC90u);
    ctx->pc = 0x2BAC8Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAC90u; }
    }
    if (ctx->pc != 0x2BAC90u) { return; }
    ctx->pc = 0x2BAC90u;
label_2bac90:
    // 0x2bac90: 0x3c10003b
    ctx->pc = 0x2bac90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_2bac94:
    // 0x2bac94: 0x26045ca0
    ctx->pc = 0x2bac94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2bac98:
    // 0x2bac98: 0xc0b4a34
label_2bac9c:
    if (ctx->pc == 0x2BAC9Cu) {
        ctx->pc = 0x2BAC9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BACA0u;
        goto label_2baca0;
    }
    ctx->pc = 0x2BAC98u;
    SET_GPR_U32(ctx, 31, 0x2BACA0u);
    ctx->pc = 0x2BAC9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACA0u; }
    }
    if (ctx->pc != 0x2BACA0u) { return; }
    ctx->pc = 0x2BACA0u;
label_2baca0:
    // 0x2baca0: 0xc0be862
label_2baca4:
    if (ctx->pc == 0x2BACA4u) {
        ctx->pc = 0x2BACA4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2BACA8u;
        goto label_2baca8;
    }
    ctx->pc = 0x2BACA0u;
    SET_GPR_U32(ctx, 31, 0x2BACA8u);
    ctx->pc = 0x2BACA4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACA8u; }
    }
    if (ctx->pc != 0x2BACA8u) { return; }
    ctx->pc = 0x2BACA8u;
label_2baca8:
    // 0x2baca8: 0x26045ca0
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 23712));
label_2bacac:
    // 0x2bacac: 0xc0b4a34
label_2bacb0:
    if (ctx->pc == 0x2BACB0u) {
        ctx->pc = 0x2BACB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BACB4u;
        goto label_2bacb4;
    }
    ctx->pc = 0x2BACACu;
    SET_GPR_U32(ctx, 31, 0x2BACB4u);
    ctx->pc = 0x2BACB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACB4u; }
    }
    if (ctx->pc != 0x2BACB4u) { return; }
    ctx->pc = 0x2BACB4u;
label_2bacb4:
    // 0x2bacb4: 0xc6410008
    ctx->pc = 0x2bacb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bacb8:
    // 0x2bacb8: 0x44800000
    ctx->pc = 0x2bacb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2bacbc:
    // 0x2bacbc: 0x46000832
    ctx->pc = 0x2bacbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bacc0:
    // 0x2bacc0: 0x0
    ctx->pc = 0x2bacc0u;
    // NOP
label_2bacc4:
    // 0x2bacc4: 0x45030014
label_2bacc8:
    if (ctx->pc == 0x2BACC8u) {
        ctx->pc = 0x2BACC8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BACCCu;
        goto label_2baccc;
    }
    ctx->pc = 0x2BACC4u;
    {
        const bool branch_taken_0x2bacc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bacc4) {
            ctx->pc = 0x2BACC8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BAD18u;
            goto label_2bad18;
        }
    }
    ctx->pc = 0x2BACCCu;
label_2baccc:
    // 0x2baccc: 0xc64c0000
    ctx->pc = 0x2bacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bacd0:
    // 0x2bacd0: 0x0
    ctx->pc = 0x2bacd0u;
    // NOP
label_2bacd4:
    // 0x2bacd4: 0x0
    ctx->pc = 0x2bacd4u;
    // NOP
label_2bacd8:
    // 0x2bacd8: 0x46016303
    ctx->pc = 0x2bacd8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
label_2bacdc:
    // 0x2bacdc: 0xc0be862
label_2bace0:
    if (ctx->pc == 0x2BACE0u) {
        ctx->pc = 0x2BACE4u;
        goto label_2bace4;
    }
    ctx->pc = 0x2BACDCu;
    SET_GPR_U32(ctx, 31, 0x2BACE4u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BACE4u; }
    }
    if (ctx->pc != 0x2BACE4u) { return; }
    ctx->pc = 0x2BACE4u;
label_2bace4:
    // 0x2bace4: 0xc6400004
    ctx->pc = 0x2bace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bace8:
    // 0x2bace8: 0xc64c0008
    ctx->pc = 0x2bace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bacec:
    // 0x2bacec: 0x0
    ctx->pc = 0x2bacecu;
    // NOP
label_2bacf0:
    // 0x2bacf0: 0x0
    ctx->pc = 0x2bacf0u;
    // NOP
label_2bacf4:
    // 0x2bacf4: 0x460c0303
    ctx->pc = 0x2bacf4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2bacf8:
    // 0x2bacf8: 0xc0be862
label_2bacfc:
    if (ctx->pc == 0x2BACFCu) {
        ctx->pc = 0x2BACFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD00u;
        goto label_2bad00;
    }
    ctx->pc = 0x2BACF8u;
    SET_GPR_U32(ctx, 31, 0x2BAD00u);
    ctx->pc = 0x2BACFCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD00u; }
    }
    if (ctx->pc != 0x2BAD00u) { return; }
    ctx->pc = 0x2BAD00u;
label_2bad00:
    // 0x2bad00: 0x3c04003b
    ctx->pc = 0x2bad00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad04:
    // 0x2bad04: 0x24845ea8
    ctx->pc = 0x2bad04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24232));
label_2bad08:
    // 0x2bad08: 0x200282d
    ctx->pc = 0x2bad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bad0c:
    // 0x2bad0c: 0xc0b4a34
label_2bad10:
    if (ctx->pc == 0x2BAD10u) {
        ctx->pc = 0x2BAD10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD14u;
        goto label_2bad14;
    }
    ctx->pc = 0x2BAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAD14u);
    ctx->pc = 0x2BAD10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD14u; }
    }
    if (ctx->pc != 0x2BAD14u) { return; }
    ctx->pc = 0x2BAD14u;
label_2bad14:
    // 0x2bad14: 0x3c04003b
    ctx->pc = 0x2bad14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad18:
    // 0x2bad18: 0xc0b4a34
label_2bad1c:
    if (ctx->pc == 0x2BAD1Cu) {
        ctx->pc = 0x2BAD1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BAD20u;
        goto label_2bad20;
    }
    ctx->pc = 0x2BAD18u;
    SET_GPR_U32(ctx, 31, 0x2BAD20u);
    ctx->pc = 0x2BAD1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD20u; }
    }
    if (ctx->pc != 0x2BAD20u) { return; }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x8e450010
    ctx->pc = 0x2bad20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2bad24:
    // 0x2bad24: 0x8e460014
    ctx->pc = 0x2bad24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2bad28:
    // 0x2bad28: 0xa61025
    ctx->pc = 0x2bad28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2bad2c:
    // 0x2bad2c: 0x8e470018
    ctx->pc = 0x2bad2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2bad30:
    // 0x2bad30: 0x471025
    ctx->pc = 0x2bad30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2bad34:
    // 0x2bad34: 0x8e48001c
    ctx->pc = 0x2bad34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2bad38:
    // 0x2bad38: 0x481025
    ctx->pc = 0x2bad38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2bad3c:
    // 0x2bad3c: 0x3c03ffff
    ctx->pc = 0x2bad3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2bad40:
    // 0x2bad40: 0x3463ff00
    ctx->pc = 0x2bad40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
label_2bad44:
    // 0x2bad44: 0x431024
    ctx->pc = 0x2bad44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bad48:
    // 0x2bad48: 0x50400006
label_2bad4c:
    if (ctx->pc == 0x2BAD4Cu) {
        ctx->pc = 0x2BAD4Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAD50u;
        goto label_2bad50;
    }
    ctx->pc = 0x2BAD48u;
    {
        const bool branch_taken_0x2bad48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bad48) {
            ctx->pc = 0x2BAD4Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BAD64u;
            goto label_2bad64;
        }
    }
    ctx->pc = 0x2BAD50u;
label_2bad50:
    // 0x2bad50: 0x3c04003b
    ctx->pc = 0x2bad50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad54:
    // 0x2bad54: 0xc0b4a34
label_2bad58:
    if (ctx->pc == 0x2BAD58u) {
        ctx->pc = 0x2BAD58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24256));
        ctx->pc = 0x2BAD5Cu;
        goto label_2bad5c;
    }
    ctx->pc = 0x2BAD54u;
    SET_GPR_U32(ctx, 31, 0x2BAD5Cu);
    ctx->pc = 0x2BAD58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24256));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD5Cu; }
    }
    if (ctx->pc != 0x2BAD5Cu) { return; }
    ctx->pc = 0x2BAD5Cu;
label_2bad5c:
    // 0x2bad5c: 0x10000008
label_2bad60:
    if (ctx->pc == 0x2BAD60u) {
        ctx->pc = 0x2BAD60u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAD64u;
        goto label_2bad64;
    }
    ctx->pc = 0x2BAD5Cu;
    {
        const bool branch_taken_0x2bad5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAD60u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bad5c) {
            ctx->pc = 0x2BAD80u;
            goto label_2bad80;
        }
    }
    ctx->pc = 0x2BAD64u;
label_2bad64:
    // 0x2bad64: 0x24845ef8
    ctx->pc = 0x2bad64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24312));
label_2bad68:
    // 0x2bad68: 0x8e450010
    ctx->pc = 0x2bad68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2bad6c:
    // 0x2bad6c: 0x8e460014
    ctx->pc = 0x2bad6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2bad70:
    // 0x2bad70: 0x8e470018
    ctx->pc = 0x2bad70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2bad74:
    // 0x2bad74: 0xc0b4a34
label_2bad78:
    if (ctx->pc == 0x2BAD78u) {
        ctx->pc = 0x2BAD78u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2BAD7Cu;
        goto label_2bad7c;
    }
    ctx->pc = 0x2BAD74u;
    SET_GPR_U32(ctx, 31, 0x2BAD7Cu);
    ctx->pc = 0x2BAD78u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD7Cu; }
    }
    if (ctx->pc != 0x2BAD7Cu) { return; }
    ctx->pc = 0x2BAD7Cu;
label_2bad7c:
    // 0x2bad7c: 0x3c04003b
    ctx->pc = 0x2bad7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad80:
    // 0x2bad80: 0xc0b4a34
label_2bad84:
    if (ctx->pc == 0x2BAD84u) {
        ctx->pc = 0x2BAD84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BAD88u;
        goto label_2bad88;
    }
    ctx->pc = 0x2BAD80u;
    SET_GPR_U32(ctx, 31, 0x2BAD88u);
    ctx->pc = 0x2BAD84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD88u; }
    }
    if (ctx->pc != 0x2BAD88u) { return; }
    ctx->pc = 0x2BAD88u;
label_2bad88:
    // 0x2bad88: 0x3c04003b
    ctx->pc = 0x2bad88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad8c:
    // 0x2bad8c: 0xc0b4a34
label_2bad90:
    if (ctx->pc == 0x2BAD90u) {
        ctx->pc = 0x2BAD90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24360));
        ctx->pc = 0x2BAD94u;
        goto label_2bad94;
    }
    ctx->pc = 0x2BAD8Cu;
    SET_GPR_U32(ctx, 31, 0x2BAD94u);
    ctx->pc = 0x2BAD90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24360));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAD94u; }
    }
    if (ctx->pc != 0x2BAD94u) { return; }
    ctx->pc = 0x2BAD94u;
label_2bad94:
    // 0x2bad94: 0x3c04003b
    ctx->pc = 0x2bad94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bad98:
    // 0x2bad98: 0x24845f40
    ctx->pc = 0x2bad98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24384));
label_2bad9c:
    // 0x2bad9c: 0x8e450020
    ctx->pc = 0x2bad9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2bada0:
    // 0x2bada0: 0x8e460024
    ctx->pc = 0x2bada0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2bada4:
    // 0x2bada4: 0xc0b4a34
label_2bada8:
    if (ctx->pc == 0x2BADA8u) {
        ctx->pc = 0x2BADA8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x2BADACu;
        goto label_2badac;
    }
    ctx->pc = 0x2BADA4u;
    SET_GPR_U32(ctx, 31, 0x2BADACu);
    ctx->pc = 0x2BADA8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADACu; }
    }
    if (ctx->pc != 0x2BADACu) { return; }
    ctx->pc = 0x2BADACu;
label_2badac:
    // 0x2badac: 0xc6410020
    ctx->pc = 0x2badacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2badb0:
    // 0x2badb0: 0x46800860
    ctx->pc = 0x2badb0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2badb4:
    // 0x2badb4: 0x3c013d80
    ctx->pc = 0x2badb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15744 << 16));
label_2badb8:
    // 0x2badb8: 0x4481a800
    ctx->pc = 0x2badb8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_2badbc:
    // 0x2badbc: 0x46150842
    ctx->pc = 0x2badbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2badc0:
    // 0x2badc0: 0x8ee20010
    ctx->pc = 0x2badc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2badc4:
    // 0x2badc4: 0xc4400020
    ctx->pc = 0x2badc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2badc8:
    // 0x2badc8: 0x46800020
    ctx->pc = 0x2badc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2badcc:
    // 0x2badcc: 0x3c013f00
    ctx->pc = 0x2badccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2badd0:
    // 0x2badd0: 0x4481a000
    ctx->pc = 0x2badd0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2badd4:
    // 0x2badd4: 0x46140002
    ctx->pc = 0x2badd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2badd8:
    // 0x2badd8: 0x46000840
    ctx->pc = 0x2badd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2baddc:
    // 0x2baddc: 0xc44c0038
    ctx->pc = 0x2baddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bade0:
    // 0x2bade0: 0xc0be862
label_2bade4:
    if (ctx->pc == 0x2BADE4u) {
        ctx->pc = 0x2BADE4u;
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->pc = 0x2BADE8u;
        goto label_2bade8;
    }
    ctx->pc = 0x2BADE0u;
    SET_GPR_U32(ctx, 31, 0x2BADE8u);
    ctx->pc = 0x2BADE4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADE8u; }
    }
    if (ctx->pc != 0x2BADE8u) { return; }
    ctx->pc = 0x2BADE8u;
label_2bade8:
    // 0x2bade8: 0x3c04003b
    ctx->pc = 0x2bade8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2badec:
    // 0x2badec: 0x24845f58
    ctx->pc = 0x2badecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24408));
label_2badf0:
    // 0x2badf0: 0xc0b4a34
label_2badf4:
    if (ctx->pc == 0x2BADF4u) {
        ctx->pc = 0x2BADF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BADF8u;
        goto label_2badf8;
    }
    ctx->pc = 0x2BADF0u;
    SET_GPR_U32(ctx, 31, 0x2BADF8u);
    ctx->pc = 0x2BADF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BADF8u; }
    }
    if (ctx->pc != 0x2BADF8u) { return; }
    ctx->pc = 0x2BADF8u;
label_2badf8:
    // 0x2badf8: 0xc6410024
    ctx->pc = 0x2badf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2badfc:
    // 0x2badfc: 0x46800860
    ctx->pc = 0x2badfcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2bae00:
    // 0x2bae00: 0x46150842
    ctx->pc = 0x2bae00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2bae04:
    // 0x2bae04: 0x8ee20010
    ctx->pc = 0x2bae04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2bae08:
    // 0x2bae08: 0xc4400020
    ctx->pc = 0x2bae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bae0c:
    // 0x2bae0c: 0x46800020
    ctx->pc = 0x2bae0cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2bae10:
    // 0x2bae10: 0x46140002
    ctx->pc = 0x2bae10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2bae14:
    // 0x2bae14: 0x46000840
    ctx->pc = 0x2bae14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bae18:
    // 0x2bae18: 0xc44c0038
    ctx->pc = 0x2bae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bae1c:
    // 0x2bae1c: 0xc0be862
label_2bae20:
    if (ctx->pc == 0x2BAE20u) {
        ctx->pc = 0x2BAE20u;
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->pc = 0x2BAE24u;
        goto label_2bae24;
    }
    ctx->pc = 0x2BAE1Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE24u);
    ctx->pc = 0x2BAE20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE24u; }
    }
    if (ctx->pc != 0x2BAE24u) { return; }
    ctx->pc = 0x2BAE24u;
label_2bae24:
    // 0x2bae24: 0x3c04003b
    ctx->pc = 0x2bae24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bae28:
    // 0x2bae28: 0x24845f68
    ctx->pc = 0x2bae28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24424));
label_2bae2c:
    // 0x2bae2c: 0xc0b4a34
label_2bae30:
    if (ctx->pc == 0x2BAE30u) {
        ctx->pc = 0x2BAE30u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE34u;
        goto label_2bae34;
    }
    ctx->pc = 0x2BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE34u);
    ctx->pc = 0x2BAE30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE34u; }
    }
    if (ctx->pc != 0x2BAE34u) { return; }
    ctx->pc = 0x2BAE34u;
label_2bae34:
    // 0x2bae34: 0xc6410028
    ctx->pc = 0x2bae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bae38:
    // 0x2bae38: 0x46800860
    ctx->pc = 0x2bae38u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2bae3c:
    // 0x2bae3c: 0x8ee20010
    ctx->pc = 0x2bae3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2bae40:
    // 0x2bae40: 0xc4400034
    ctx->pc = 0x2bae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bae44:
    // 0x2bae44: 0x46800020
    ctx->pc = 0x2bae44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2bae48:
    // 0x2bae48: 0x3c013f80
    ctx->pc = 0x2bae48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2bae4c:
    // 0x2bae4c: 0x44816000
    ctx->pc = 0x2bae4cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2bae50:
    // 0x2bae50: 0x0
    ctx->pc = 0x2bae50u;
    // NOP
label_2bae54:
    // 0x2bae54: 0x0
    ctx->pc = 0x2bae54u;
    // NOP
label_2bae58:
    // 0x2bae58: 0x46006303
    ctx->pc = 0x2bae58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
label_2bae5c:
    // 0x2bae5c: 0xc0be862
label_2bae60:
    if (ctx->pc == 0x2BAE60u) {
        ctx->pc = 0x2BAE60u;
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->pc = 0x2BAE64u;
        goto label_2bae64;
    }
    ctx->pc = 0x2BAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE64u);
    ctx->pc = 0x2BAE60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE64u; }
    }
    if (ctx->pc != 0x2BAE64u) { return; }
    ctx->pc = 0x2BAE64u;
label_2bae64:
    // 0x2bae64: 0x3c04003b
    ctx->pc = 0x2bae64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bae68:
    // 0x2bae68: 0x24845f78
    ctx->pc = 0x2bae68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24440));
label_2bae6c:
    // 0x2bae6c: 0xc0b4a34
label_2bae70:
    if (ctx->pc == 0x2BAE70u) {
        ctx->pc = 0x2BAE70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE74u;
        goto label_2bae74;
    }
    ctx->pc = 0x2BAE6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE74u);
    ctx->pc = 0x2BAE70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE74u; }
    }
    if (ctx->pc != 0x2BAE74u) { return; }
    ctx->pc = 0x2BAE74u;
label_2bae74:
    // 0x2bae74: 0x3c04003b
    ctx->pc = 0x2bae74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bae78:
    // 0x2bae78: 0x24845f88
    ctx->pc = 0x2bae78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24456));
label_2bae7c:
    // 0x2bae7c: 0xc0b4a34
label_2bae80:
    if (ctx->pc == 0x2BAE80u) {
        ctx->pc = 0x2BAE80u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x2BAE84u;
        goto label_2bae84;
    }
    ctx->pc = 0x2BAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE84u);
    ctx->pc = 0x2BAE80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE84u; }
    }
    if (ctx->pc != 0x2BAE84u) { return; }
    ctx->pc = 0x2BAE84u;
label_2bae84:
    // 0x2bae84: 0x8e42002c
    ctx->pc = 0x2bae84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2bae88:
    // 0x2bae88: 0x30428000
    ctx->pc = 0x2bae88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_2bae8c:
    // 0x2bae8c: 0x54400020
label_2bae90:
    if (ctx->pc == 0x2BAE90u) {
        ctx->pc = 0x2BAE90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAE94u;
        goto label_2bae94;
    }
    ctx->pc = 0x2BAE8Cu;
    {
        const bool branch_taken_0x2bae8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bae8c) {
            ctx->pc = 0x2BAE90u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BAF10u;
            goto label_2baf10;
        }
    }
    ctx->pc = 0x2BAE94u;
label_2bae94:
    // 0x2bae94: 0x10000022
label_2bae98:
    if (ctx->pc == 0x2BAE98u) {
        ctx->pc = 0x2BAE98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAE9Cu;
        goto label_2bae9c;
    }
    ctx->pc = 0x2BAE94u;
    {
        const bool branch_taken_0x2bae94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAE98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bae94) {
            ctx->pc = 0x2BAF20u;
            goto label_2baf20;
        }
    }
    ctx->pc = 0x2BAE9Cu;
label_2bae9c:
    // 0x2bae9c: 0x3c04003b
    ctx->pc = 0x2bae9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baea0:
    // 0x2baea0: 0x24845e80
    ctx->pc = 0x2baea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24192));
label_2baea4:
    // 0x2baea4: 0xc0b4a34
label_2baea8:
    if (ctx->pc == 0x2BAEA8u) {
        ctx->pc = 0x2BAEA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEACu;
        goto label_2baeac;
    }
    ctx->pc = 0x2BAEA4u;
    SET_GPR_U32(ctx, 31, 0x2BAEACu);
    ctx->pc = 0x2BAEA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEACu; }
    }
    if (ctx->pc != 0x2BAEACu) { return; }
    ctx->pc = 0x2BAEACu;
label_2baeac:
    // 0x2baeac: 0x8e460020
    ctx->pc = 0x2baeacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2baeb0:
    // 0x2baeb0: 0x3c028000
    ctx->pc = 0x2baeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_2baeb4:
    // 0x2baeb4: 0xc24824
    ctx->pc = 0x2baeb4u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2baeb8:
    // 0x2baeb8: 0x24050020
    ctx->pc = 0x2baeb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2baebc:
    // 0x2baebc: 0x24070020
    ctx->pc = 0x2baebcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
label_2baec0:
    // 0x2baec0: 0x2403002d
    ctx->pc = 0x2baec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
label_2baec4:
    // 0x2baec4: 0x8e480024
    ctx->pc = 0x2baec4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2baec8:
    // 0x2baec8: 0x1021024
    ctx->pc = 0x2baec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2baecc:
    // 0x2baecc: 0x3c04003b
    ctx->pc = 0x2baeccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baed0:
    // 0x2baed0: 0x24845fb0
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24496));
label_2baed4:
    // 0x2baed4: 0x69280b
    ctx->pc = 0x2baed4u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2baed8:
    // 0x2baed8: 0x30c6ffff
    ctx->pc = 0x2baed8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
label_2baedc:
    // 0x2baedc: 0x62380b
    ctx->pc = 0x2baedcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
label_2baee0:
    // 0x2baee0: 0x3108ffff
    ctx->pc = 0x2baee0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 65535));
label_2baee4:
    // 0x2baee4: 0xc0b4a34
label_2baee8:
    if (ctx->pc == 0x2BAEE8u) {
        ctx->pc = 0x2BAEE8u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x2BAEECu;
        goto label_2baeec;
    }
    ctx->pc = 0x2BAEE4u;
    SET_GPR_U32(ctx, 31, 0x2BAEECu);
    ctx->pc = 0x2BAEE8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEECu; }
    }
    if (ctx->pc != 0x2BAEECu) { return; }
    ctx->pc = 0x2BAEECu;
label_2baeec:
    // 0x2baeec: 0x3c04003b
    ctx->pc = 0x2baeecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baef0:
    // 0x2baef0: 0x24845f88
    ctx->pc = 0x2baef0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24456));
label_2baef4:
    // 0x2baef4: 0xc0b4a34
label_2baef8:
    if (ctx->pc == 0x2BAEF8u) {
        ctx->pc = 0x2BAEF8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x2BAEFCu;
        goto label_2baefc;
    }
    ctx->pc = 0x2BAEF4u;
    SET_GPR_U32(ctx, 31, 0x2BAEFCu);
    ctx->pc = 0x2BAEF8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEFCu; }
    }
    if (ctx->pc != 0x2BAEFCu) { return; }
    ctx->pc = 0x2BAEFCu;
label_2baefc:
    // 0x2baefc: 0x8e42002c
    ctx->pc = 0x2baefcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2baf00:
    // 0x2baf00: 0x30428000
    ctx->pc = 0x2baf00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_2baf04:
    // 0x2baf04: 0x10400006
label_2baf08:
    if (ctx->pc == 0x2BAF08u) {
        ctx->pc = 0x2BAF08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAF0Cu;
        goto label_2baf0c;
    }
    ctx->pc = 0x2BAF04u;
    {
        const bool branch_taken_0x2baf04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAF08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2baf04) {
            ctx->pc = 0x2BAF20u;
            goto label_2baf20;
        }
    }
    ctx->pc = 0x2BAF0Cu;
label_2baf0c:
    // 0x2baf0c: 0x3c04003b
    ctx->pc = 0x2baf0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baf10:
    // 0x2baf10: 0xc0b4a34
label_2baf14:
    if (ctx->pc == 0x2BAF14u) {
        ctx->pc = 0x2BAF14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24472));
        ctx->pc = 0x2BAF18u;
        goto label_2baf18;
    }
    ctx->pc = 0x2BAF10u;
    SET_GPR_U32(ctx, 31, 0x2BAF18u);
    ctx->pc = 0x2BAF14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24472));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF18u; }
    }
    if (ctx->pc != 0x2BAF18u) { return; }
    ctx->pc = 0x2BAF18u;
label_2baf18:
    // 0x2baf18: 0x10000004
label_2baf1c:
    if (ctx->pc == 0x2BAF1Cu) {
        ctx->pc = 0x2BAF1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2BAF20u;
        goto label_2baf20;
    }
    ctx->pc = 0x2BAF18u;
    {
        const bool branch_taken_0x2baf18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAF1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2baf18) {
            ctx->pc = 0x2BAF2Cu;
            goto label_2baf2c;
        }
    }
    ctx->pc = 0x2BAF20u;
label_2baf20:
    // 0x2baf20: 0xc0b4a34
label_2baf24:
    if (ctx->pc == 0x2BAF24u) {
        ctx->pc = 0x2BAF24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24488));
        ctx->pc = 0x2BAF28u;
        goto label_2baf28;
    }
    ctx->pc = 0x2BAF20u;
    SET_GPR_U32(ctx, 31, 0x2BAF28u);
    ctx->pc = 0x2BAF24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24488));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF28u; }
    }
    if (ctx->pc != 0x2BAF28u) { return; }
    ctx->pc = 0x2BAF28u;
label_2baf28:
    // 0x2baf28: 0x3c04003b
    ctx->pc = 0x2baf28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baf2c:
    // 0x2baf2c: 0xc0b4a34
label_2baf30:
    if (ctx->pc == 0x2BAF30u) {
        ctx->pc = 0x2BAF30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2BAF34u;
        goto label_2baf34;
    }
    ctx->pc = 0x2BAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF34u);
    ctx->pc = 0x2BAF30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF34u; }
    }
    if (ctx->pc != 0x2BAF34u) { return; }
    ctx->pc = 0x2BAF34u;
label_2baf34:
    // 0x2baf34: 0x26520030
    ctx->pc = 0x2baf34u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 48));
label_2baf38:
    // 0x2baf38: 0x2ac20006
    ctx->pc = 0x2baf38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 6));
label_2baf3c:
    // 0x2baf3c: 0x50400005
label_2baf40:
    if (ctx->pc == 0x2BAF40u) {
        ctx->pc = 0x2BAF40u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x2BAF44u;
        goto label_2baf44;
    }
    ctx->pc = 0x2BAF3Cu;
    {
        const bool branch_taken_0x2baf3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2baf3c) {
            ctx->pc = 0x2BAF40u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x2BAF54u;
            goto label_2baf54;
        }
    }
    ctx->pc = 0x2BAF44u;
label_2baf44:
    // 0x2baf44: 0x3c04003b
    ctx->pc = 0x2baf44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baf48:
    // 0x2baf48: 0xc0b4a34
label_2baf4c:
    if (ctx->pc == 0x2BAF4Cu) {
        ctx->pc = 0x2BAF4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24528));
        ctx->pc = 0x2BAF50u;
        goto label_2baf50;
    }
    ctx->pc = 0x2BAF48u;
    SET_GPR_U32(ctx, 31, 0x2BAF50u);
    ctx->pc = 0x2BAF4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24528));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF50u; }
    }
    if (ctx->pc != 0x2BAF50u) { return; }
    ctx->pc = 0x2BAF50u;
label_2baf50:
    // 0x2baf50: 0x26b5ffff
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2baf54:
    // 0x2baf54: 0x16a0fb3a
label_2baf58:
    if (ctx->pc == 0x2BAF58u) {
        ctx->pc = 0x2BAF58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->pc = 0x2BAF5Cu;
        goto label_2baf5c;
    }
    ctx->pc = 0x2BAF54u;
    {
        const bool branch_taken_0x2baf54 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BAF58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967294));
        if (branch_taken_0x2baf54) {
            ctx->pc = 0x2B9C40u;
            goto label_2b9c40;
        }
    }
    ctx->pc = 0x2BAF5Cu;
label_2baf5c:
    // 0x2baf5c: 0x13c0fae2
label_2baf60:
    if (ctx->pc == 0x2BAF60u) {
        ctx->pc = 0x2BAF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BAF64u;
        goto label_2baf64;
    }
    ctx->pc = 0x2BAF5Cu;
    {
        const bool branch_taken_0x2baf5c = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BAF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2baf5c) {
            ctx->pc = 0x2B9AE8u;
            goto label_2b9ae8;
        }
    }
    ctx->pc = 0x2BAF64u;
label_2baf64:
    // 0x2baf64: 0x34028000
    ctx->pc = 0x2baf64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_2baf68:
    // 0x2baf68: 0x17c20005
label_2baf6c:
    if (ctx->pc == 0x2BAF6Cu) {
        ctx->pc = 0x2BAF6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2BAF70u;
        goto label_2baf70;
    }
    ctx->pc = 0x2BAF68u;
    {
        const bool branch_taken_0x2baf68 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BAF6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2baf68) {
            ctx->pc = 0x2BAF80u;
            goto label_2baf80;
        }
    }
    ctx->pc = 0x2BAF70u;
label_2baf70:
    // 0x2baf70: 0x3c04003b
    ctx->pc = 0x2baf70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2baf74:
    // 0x2baf74: 0xc0b4a34
label_2baf78:
    if (ctx->pc == 0x2BAF78u) {
        ctx->pc = 0x2BAF78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24592));
        ctx->pc = 0x2BAF7Cu;
        goto label_2baf7c;
    }
    ctx->pc = 0x2BAF74u;
    SET_GPR_U32(ctx, 31, 0x2BAF7Cu);
    ctx->pc = 0x2BAF78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24592));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF7Cu; }
    }
    if (ctx->pc != 0x2BAF7Cu) { return; }
    ctx->pc = 0x2BAF7Cu;
label_2baf7c:
    // 0x2baf7c: 0xdfbf0090
    ctx->pc = 0x2baf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2baf80:
    // 0x2baf80: 0xdfbe0080
    ctx->pc = 0x2baf80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2baf84:
    // 0x2baf84: 0xdfb70070
    ctx->pc = 0x2baf84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2baf88:
    // 0x2baf88: 0xdfb60060
    ctx->pc = 0x2baf88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2baf8c:
    // 0x2baf8c: 0xdfb50050
    ctx->pc = 0x2baf8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2baf90:
    // 0x2baf90: 0xdfb40040
    ctx->pc = 0x2baf90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2baf94:
    // 0x2baf94: 0xdfb30030
    ctx->pc = 0x2baf94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2baf98:
    // 0x2baf98: 0xdfb20020
    ctx->pc = 0x2baf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2baf9c:
    // 0x2baf9c: 0xdfb10010
    ctx->pc = 0x2baf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bafa0:
    // 0x2bafa0: 0xdfb00000
    ctx->pc = 0x2bafa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bafa4:
    // 0x2bafa4: 0xc7b500a8
    ctx->pc = 0x2bafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bafa8:
    // 0x2bafa8: 0xc7b400a0
    ctx->pc = 0x2bafa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bafac:
    // 0x2bafac: 0x3e00008
label_2bafb0:
    if (ctx->pc == 0x2BAFB0u) {
        ctx->pc = 0x2BAFB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2BAFB4u;
        goto label_fallthrough_0x2bafac;
    }
    ctx->pc = 0x2BAFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B99F8u: goto label_2b99f8;
            case 0x2B99FCu: goto label_2b99fc;
            case 0x2B9A00u: goto label_2b9a00;
            case 0x2B9A04u: goto label_2b9a04;
            case 0x2B9A08u: goto label_2b9a08;
            case 0x2B9A0Cu: goto label_2b9a0c;
            case 0x2B9A10u: goto label_2b9a10;
            case 0x2B9A14u: goto label_2b9a14;
            case 0x2B9A18u: goto label_2b9a18;
            case 0x2B9A1Cu: goto label_2b9a1c;
            case 0x2B9A20u: goto label_2b9a20;
            case 0x2B9A24u: goto label_2b9a24;
            case 0x2B9A28u: goto label_2b9a28;
            case 0x2B9A2Cu: goto label_2b9a2c;
            case 0x2B9A30u: goto label_2b9a30;
            case 0x2B9A34u: goto label_2b9a34;
            case 0x2B9A38u: goto label_2b9a38;
            case 0x2B9A3Cu: goto label_2b9a3c;
            case 0x2B9A40u: goto label_2b9a40;
            case 0x2B9A44u: goto label_2b9a44;
            case 0x2B9A48u: goto label_2b9a48;
            case 0x2B9A4Cu: goto label_2b9a4c;
            case 0x2B9A50u: goto label_2b9a50;
            case 0x2B9A54u: goto label_2b9a54;
            case 0x2B9A58u: goto label_2b9a58;
            case 0x2B9A5Cu: goto label_2b9a5c;
            case 0x2B9A60u: goto label_2b9a60;
            case 0x2B9A64u: goto label_2b9a64;
            case 0x2B9A68u: goto label_2b9a68;
            case 0x2B9A6Cu: goto label_2b9a6c;
            case 0x2B9A70u: goto label_2b9a70;
            case 0x2B9A74u: goto label_2b9a74;
            case 0x2B9A78u: goto label_2b9a78;
            case 0x2B9A7Cu: goto label_2b9a7c;
            case 0x2B9A80u: goto label_2b9a80;
            case 0x2B9A84u: goto label_2b9a84;
            case 0x2B9A88u: goto label_2b9a88;
            case 0x2B9A8Cu: goto label_2b9a8c;
            case 0x2B9A90u: goto label_2b9a90;
            case 0x2B9A94u: goto label_2b9a94;
            case 0x2B9A98u: goto label_2b9a98;
            case 0x2B9A9Cu: goto label_2b9a9c;
            case 0x2B9AA0u: goto label_2b9aa0;
            case 0x2B9AA4u: goto label_2b9aa4;
            case 0x2B9AA8u: goto label_2b9aa8;
            case 0x2B9AACu: goto label_2b9aac;
            case 0x2B9AB0u: goto label_2b9ab0;
            case 0x2B9AB4u: goto label_2b9ab4;
            case 0x2B9AB8u: goto label_2b9ab8;
            case 0x2B9ABCu: goto label_2b9abc;
            case 0x2B9AC0u: goto label_2b9ac0;
            case 0x2B9AC4u: goto label_2b9ac4;
            case 0x2B9AC8u: goto label_2b9ac8;
            case 0x2B9ACCu: goto label_2b9acc;
            case 0x2B9AD0u: goto label_2b9ad0;
            case 0x2B9AD4u: goto label_2b9ad4;
            case 0x2B9AD8u: goto label_2b9ad8;
            case 0x2B9ADCu: goto label_2b9adc;
            case 0x2B9AE0u: goto label_2b9ae0;
            case 0x2B9AE4u: goto label_2b9ae4;
            case 0x2B9AE8u: goto label_2b9ae8;
            case 0x2B9AECu: goto label_2b9aec;
            case 0x2B9AF0u: goto label_2b9af0;
            case 0x2B9AF4u: goto label_2b9af4;
            case 0x2B9AF8u: goto label_2b9af8;
            case 0x2B9AFCu: goto label_2b9afc;
            case 0x2B9B00u: goto label_2b9b00;
            case 0x2B9B04u: goto label_2b9b04;
            case 0x2B9B08u: goto label_2b9b08;
            case 0x2B9B0Cu: goto label_2b9b0c;
            case 0x2B9B10u: goto label_2b9b10;
            case 0x2B9B14u: goto label_2b9b14;
            case 0x2B9B18u: goto label_2b9b18;
            case 0x2B9B1Cu: goto label_2b9b1c;
            case 0x2B9B20u: goto label_2b9b20;
            case 0x2B9B24u: goto label_2b9b24;
            case 0x2B9B28u: goto label_2b9b28;
            case 0x2B9B2Cu: goto label_2b9b2c;
            case 0x2B9B30u: goto label_2b9b30;
            case 0x2B9B34u: goto label_2b9b34;
            case 0x2B9B38u: goto label_2b9b38;
            case 0x2B9B3Cu: goto label_2b9b3c;
            case 0x2B9B40u: goto label_2b9b40;
            case 0x2B9B44u: goto label_2b9b44;
            case 0x2B9B48u: goto label_2b9b48;
            case 0x2B9B4Cu: goto label_2b9b4c;
            case 0x2B9B50u: goto label_2b9b50;
            case 0x2B9B54u: goto label_2b9b54;
            case 0x2B9B58u: goto label_2b9b58;
            case 0x2B9B5Cu: goto label_2b9b5c;
            case 0x2B9B60u: goto label_2b9b60;
            case 0x2B9B64u: goto label_2b9b64;
            case 0x2B9B68u: goto label_2b9b68;
            case 0x2B9B6Cu: goto label_2b9b6c;
            case 0x2B9B70u: goto label_2b9b70;
            case 0x2B9B74u: goto label_2b9b74;
            case 0x2B9B78u: goto label_2b9b78;
            case 0x2B9B7Cu: goto label_2b9b7c;
            case 0x2B9B80u: goto label_2b9b80;
            case 0x2B9B84u: goto label_2b9b84;
            case 0x2B9B88u: goto label_2b9b88;
            case 0x2B9B8Cu: goto label_2b9b8c;
            case 0x2B9B90u: goto label_2b9b90;
            case 0x2B9B94u: goto label_2b9b94;
            case 0x2B9B98u: goto label_2b9b98;
            case 0x2B9B9Cu: goto label_2b9b9c;
            case 0x2B9BA0u: goto label_2b9ba0;
            case 0x2B9BA4u: goto label_2b9ba4;
            case 0x2B9BA8u: goto label_2b9ba8;
            case 0x2B9BACu: goto label_2b9bac;
            case 0x2B9BB0u: goto label_2b9bb0;
            case 0x2B9BB4u: goto label_2b9bb4;
            case 0x2B9BB8u: goto label_2b9bb8;
            case 0x2B9BBCu: goto label_2b9bbc;
            case 0x2B9BC0u: goto label_2b9bc0;
            case 0x2B9BC4u: goto label_2b9bc4;
            case 0x2B9BC8u: goto label_2b9bc8;
            case 0x2B9BCCu: goto label_2b9bcc;
            case 0x2B9BD0u: goto label_2b9bd0;
            case 0x2B9BD4u: goto label_2b9bd4;
            case 0x2B9BD8u: goto label_2b9bd8;
            case 0x2B9BDCu: goto label_2b9bdc;
            case 0x2B9BE0u: goto label_2b9be0;
            case 0x2B9BE4u: goto label_2b9be4;
            case 0x2B9BE8u: goto label_2b9be8;
            case 0x2B9BECu: goto label_2b9bec;
            case 0x2B9BF0u: goto label_2b9bf0;
            case 0x2B9BF4u: goto label_2b9bf4;
            case 0x2B9BF8u: goto label_2b9bf8;
            case 0x2B9BFCu: goto label_2b9bfc;
            case 0x2B9C00u: goto label_2b9c00;
            case 0x2B9C04u: goto label_2b9c04;
            case 0x2B9C08u: goto label_2b9c08;
            case 0x2B9C0Cu: goto label_2b9c0c;
            case 0x2B9C10u: goto label_2b9c10;
            case 0x2B9C14u: goto label_2b9c14;
            case 0x2B9C18u: goto label_2b9c18;
            case 0x2B9C1Cu: goto label_2b9c1c;
            case 0x2B9C20u: goto label_2b9c20;
            case 0x2B9C24u: goto label_2b9c24;
            case 0x2B9C28u: goto label_2b9c28;
            case 0x2B9C2Cu: goto label_2b9c2c;
            case 0x2B9C30u: goto label_2b9c30;
            case 0x2B9C34u: goto label_2b9c34;
            case 0x2B9C38u: goto label_2b9c38;
            case 0x2B9C3Cu: goto label_2b9c3c;
            case 0x2B9C40u: goto label_2b9c40;
            case 0x2B9C44u: goto label_2b9c44;
            case 0x2B9C48u: goto label_2b9c48;
            case 0x2B9C4Cu: goto label_2b9c4c;
            case 0x2B9C50u: goto label_2b9c50;
            case 0x2B9C54u: goto label_2b9c54;
            case 0x2B9C58u: goto label_2b9c58;
            case 0x2B9C5Cu: goto label_2b9c5c;
            case 0x2B9C60u: goto label_2b9c60;
            case 0x2B9C64u: goto label_2b9c64;
            case 0x2B9C68u: goto label_2b9c68;
            case 0x2B9C6Cu: goto label_2b9c6c;
            case 0x2B9C70u: goto label_2b9c70;
            case 0x2B9C74u: goto label_2b9c74;
            case 0x2B9C78u: goto label_2b9c78;
            case 0x2B9C7Cu: goto label_2b9c7c;
            case 0x2B9C80u: goto label_2b9c80;
            case 0x2B9C84u: goto label_2b9c84;
            case 0x2B9C88u: goto label_2b9c88;
            case 0x2B9C8Cu: goto label_2b9c8c;
            case 0x2B9C90u: goto label_2b9c90;
            case 0x2B9C94u: goto label_2b9c94;
            case 0x2B9C98u: goto label_2b9c98;
            case 0x2B9C9Cu: goto label_2b9c9c;
            case 0x2B9CA0u: goto label_2b9ca0;
            case 0x2B9CA4u: goto label_2b9ca4;
            case 0x2B9CA8u: goto label_2b9ca8;
            case 0x2B9CACu: goto label_2b9cac;
            case 0x2B9CB0u: goto label_2b9cb0;
            case 0x2B9CB4u: goto label_2b9cb4;
            case 0x2B9CB8u: goto label_2b9cb8;
            case 0x2B9CBCu: goto label_2b9cbc;
            case 0x2B9CC0u: goto label_2b9cc0;
            case 0x2B9CC4u: goto label_2b9cc4;
            case 0x2B9CC8u: goto label_2b9cc8;
            case 0x2B9CCCu: goto label_2b9ccc;
            case 0x2B9CD0u: goto label_2b9cd0;
            case 0x2B9CD4u: goto label_2b9cd4;
            case 0x2B9CD8u: goto label_2b9cd8;
            case 0x2B9CDCu: goto label_2b9cdc;
            case 0x2B9CE0u: goto label_2b9ce0;
            case 0x2B9CE4u: goto label_2b9ce4;
            case 0x2B9CE8u: goto label_2b9ce8;
            case 0x2B9CECu: goto label_2b9cec;
            case 0x2B9CF0u: goto label_2b9cf0;
            case 0x2B9CF4u: goto label_2b9cf4;
            case 0x2B9CF8u: goto label_2b9cf8;
            case 0x2B9CFCu: goto label_2b9cfc;
            case 0x2B9D00u: goto label_2b9d00;
            case 0x2B9D04u: goto label_2b9d04;
            case 0x2B9D08u: goto label_2b9d08;
            case 0x2B9D0Cu: goto label_2b9d0c;
            case 0x2B9D10u: goto label_2b9d10;
            case 0x2B9D14u: goto label_2b9d14;
            case 0x2B9D18u: goto label_2b9d18;
            case 0x2B9D1Cu: goto label_2b9d1c;
            case 0x2B9D20u: goto label_2b9d20;
            case 0x2B9D24u: goto label_2b9d24;
            case 0x2B9D28u: goto label_2b9d28;
            case 0x2B9D2Cu: goto label_2b9d2c;
            case 0x2B9D30u: goto label_2b9d30;
            case 0x2B9D34u: goto label_2b9d34;
            case 0x2B9D38u: goto label_2b9d38;
            case 0x2B9D3Cu: goto label_2b9d3c;
            case 0x2B9D40u: goto label_2b9d40;
            case 0x2B9D44u: goto label_2b9d44;
            case 0x2B9D48u: goto label_2b9d48;
            case 0x2B9D4Cu: goto label_2b9d4c;
            case 0x2B9D50u: goto label_2b9d50;
            case 0x2B9D54u: goto label_2b9d54;
            case 0x2B9D58u: goto label_2b9d58;
            case 0x2B9D5Cu: goto label_2b9d5c;
            case 0x2B9D60u: goto label_2b9d60;
            case 0x2B9D64u: goto label_2b9d64;
            case 0x2B9D68u: goto label_2b9d68;
            case 0x2B9D6Cu: goto label_2b9d6c;
            case 0x2B9D70u: goto label_2b9d70;
            case 0x2B9D74u: goto label_2b9d74;
            case 0x2B9D78u: goto label_2b9d78;
            case 0x2B9D7Cu: goto label_2b9d7c;
            case 0x2B9D80u: goto label_2b9d80;
            case 0x2B9D84u: goto label_2b9d84;
            case 0x2B9D88u: goto label_2b9d88;
            case 0x2B9D8Cu: goto label_2b9d8c;
            case 0x2B9D90u: goto label_2b9d90;
            case 0x2B9D94u: goto label_2b9d94;
            case 0x2B9D98u: goto label_2b9d98;
            case 0x2B9D9Cu: goto label_2b9d9c;
            case 0x2B9DA0u: goto label_2b9da0;
            case 0x2B9DA4u: goto label_2b9da4;
            case 0x2B9DA8u: goto label_2b9da8;
            case 0x2B9DACu: goto label_2b9dac;
            case 0x2B9DB0u: goto label_2b9db0;
            case 0x2B9DB4u: goto label_2b9db4;
            case 0x2B9DB8u: goto label_2b9db8;
            case 0x2B9DBCu: goto label_2b9dbc;
            case 0x2B9DC0u: goto label_2b9dc0;
            case 0x2B9DC4u: goto label_2b9dc4;
            case 0x2B9DC8u: goto label_2b9dc8;
            case 0x2B9DCCu: goto label_2b9dcc;
            case 0x2B9DD0u: goto label_2b9dd0;
            case 0x2B9DD4u: goto label_2b9dd4;
            case 0x2B9DD8u: goto label_2b9dd8;
            case 0x2B9DDCu: goto label_2b9ddc;
            case 0x2B9DE0u: goto label_2b9de0;
            case 0x2B9DE4u: goto label_2b9de4;
            case 0x2B9DE8u: goto label_2b9de8;
            case 0x2B9DECu: goto label_2b9dec;
            case 0x2B9DF0u: goto label_2b9df0;
            case 0x2B9DF4u: goto label_2b9df4;
            case 0x2B9DF8u: goto label_2b9df8;
            case 0x2B9DFCu: goto label_2b9dfc;
            case 0x2B9E00u: goto label_2b9e00;
            case 0x2B9E04u: goto label_2b9e04;
            case 0x2B9E08u: goto label_2b9e08;
            case 0x2B9E0Cu: goto label_2b9e0c;
            case 0x2B9E10u: goto label_2b9e10;
            case 0x2B9E14u: goto label_2b9e14;
            case 0x2B9E18u: goto label_2b9e18;
            case 0x2B9E1Cu: goto label_2b9e1c;
            case 0x2B9E20u: goto label_2b9e20;
            case 0x2B9E24u: goto label_2b9e24;
            case 0x2B9E28u: goto label_2b9e28;
            case 0x2B9E2Cu: goto label_2b9e2c;
            case 0x2B9E30u: goto label_2b9e30;
            case 0x2B9E34u: goto label_2b9e34;
            case 0x2B9E38u: goto label_2b9e38;
            case 0x2B9E3Cu: goto label_2b9e3c;
            case 0x2B9E40u: goto label_2b9e40;
            case 0x2B9E44u: goto label_2b9e44;
            case 0x2B9E48u: goto label_2b9e48;
            case 0x2B9E4Cu: goto label_2b9e4c;
            case 0x2B9E50u: goto label_2b9e50;
            case 0x2B9E54u: goto label_2b9e54;
            case 0x2B9E58u: goto label_2b9e58;
            case 0x2B9E5Cu: goto label_2b9e5c;
            case 0x2B9E60u: goto label_2b9e60;
            case 0x2B9E64u: goto label_2b9e64;
            case 0x2B9E68u: goto label_2b9e68;
            case 0x2B9E6Cu: goto label_2b9e6c;
            case 0x2B9E70u: goto label_2b9e70;
            case 0x2B9E74u: goto label_2b9e74;
            case 0x2B9E78u: goto label_2b9e78;
            case 0x2B9E7Cu: goto label_2b9e7c;
            case 0x2B9E80u: goto label_2b9e80;
            case 0x2B9E84u: goto label_2b9e84;
            case 0x2B9E88u: goto label_2b9e88;
            case 0x2B9E8Cu: goto label_2b9e8c;
            case 0x2B9E90u: goto label_2b9e90;
            case 0x2B9E94u: goto label_2b9e94;
            case 0x2B9E98u: goto label_2b9e98;
            case 0x2B9E9Cu: goto label_2b9e9c;
            case 0x2B9EA0u: goto label_2b9ea0;
            case 0x2B9EA4u: goto label_2b9ea4;
            case 0x2B9EA8u: goto label_2b9ea8;
            case 0x2B9EACu: goto label_2b9eac;
            case 0x2B9EB0u: goto label_2b9eb0;
            case 0x2B9EB4u: goto label_2b9eb4;
            case 0x2B9EB8u: goto label_2b9eb8;
            case 0x2B9EBCu: goto label_2b9ebc;
            case 0x2B9EC0u: goto label_2b9ec0;
            case 0x2B9EC4u: goto label_2b9ec4;
            case 0x2B9EC8u: goto label_2b9ec8;
            case 0x2B9ECCu: goto label_2b9ecc;
            case 0x2B9ED0u: goto label_2b9ed0;
            case 0x2B9ED4u: goto label_2b9ed4;
            case 0x2B9ED8u: goto label_2b9ed8;
            case 0x2B9EDCu: goto label_2b9edc;
            case 0x2B9EE0u: goto label_2b9ee0;
            case 0x2B9EE4u: goto label_2b9ee4;
            case 0x2B9EE8u: goto label_2b9ee8;
            case 0x2B9EECu: goto label_2b9eec;
            case 0x2B9EF0u: goto label_2b9ef0;
            case 0x2B9EF4u: goto label_2b9ef4;
            case 0x2B9EF8u: goto label_2b9ef8;
            case 0x2B9EFCu: goto label_2b9efc;
            case 0x2B9F00u: goto label_2b9f00;
            case 0x2B9F04u: goto label_2b9f04;
            case 0x2B9F08u: goto label_2b9f08;
            case 0x2B9F0Cu: goto label_2b9f0c;
            case 0x2B9F10u: goto label_2b9f10;
            case 0x2B9F14u: goto label_2b9f14;
            case 0x2B9F18u: goto label_2b9f18;
            case 0x2B9F1Cu: goto label_2b9f1c;
            case 0x2B9F20u: goto label_2b9f20;
            case 0x2B9F24u: goto label_2b9f24;
            case 0x2B9F28u: goto label_2b9f28;
            case 0x2B9F2Cu: goto label_2b9f2c;
            case 0x2B9F30u: goto label_2b9f30;
            case 0x2B9F34u: goto label_2b9f34;
            case 0x2B9F38u: goto label_2b9f38;
            case 0x2B9F3Cu: goto label_2b9f3c;
            case 0x2B9F40u: goto label_2b9f40;
            case 0x2B9F44u: goto label_2b9f44;
            case 0x2B9F48u: goto label_2b9f48;
            case 0x2B9F4Cu: goto label_2b9f4c;
            case 0x2B9F50u: goto label_2b9f50;
            case 0x2B9F54u: goto label_2b9f54;
            case 0x2B9F58u: goto label_2b9f58;
            case 0x2B9F5Cu: goto label_2b9f5c;
            case 0x2B9F60u: goto label_2b9f60;
            case 0x2B9F64u: goto label_2b9f64;
            case 0x2B9F68u: goto label_2b9f68;
            case 0x2B9F6Cu: goto label_2b9f6c;
            case 0x2B9F70u: goto label_2b9f70;
            case 0x2B9F74u: goto label_2b9f74;
            case 0x2B9F78u: goto label_2b9f78;
            case 0x2B9F7Cu: goto label_2b9f7c;
            case 0x2B9F80u: goto label_2b9f80;
            case 0x2B9F84u: goto label_2b9f84;
            case 0x2B9F88u: goto label_2b9f88;
            case 0x2B9F8Cu: goto label_2b9f8c;
            case 0x2B9F90u: goto label_2b9f90;
            case 0x2B9F94u: goto label_2b9f94;
            case 0x2B9F98u: goto label_2b9f98;
            case 0x2B9F9Cu: goto label_2b9f9c;
            case 0x2B9FA0u: goto label_2b9fa0;
            case 0x2B9FA4u: goto label_2b9fa4;
            case 0x2B9FA8u: goto label_2b9fa8;
            case 0x2B9FACu: goto label_2b9fac;
            case 0x2B9FB0u: goto label_2b9fb0;
            case 0x2B9FB4u: goto label_2b9fb4;
            case 0x2B9FB8u: goto label_2b9fb8;
            case 0x2B9FBCu: goto label_2b9fbc;
            case 0x2B9FC0u: goto label_2b9fc0;
            case 0x2B9FC4u: goto label_2b9fc4;
            case 0x2B9FC8u: goto label_2b9fc8;
            case 0x2B9FCCu: goto label_2b9fcc;
            case 0x2B9FD0u: goto label_2b9fd0;
            case 0x2B9FD4u: goto label_2b9fd4;
            case 0x2B9FD8u: goto label_2b9fd8;
            case 0x2B9FDCu: goto label_2b9fdc;
            case 0x2B9FE0u: goto label_2b9fe0;
            case 0x2B9FE4u: goto label_2b9fe4;
            case 0x2B9FE8u: goto label_2b9fe8;
            case 0x2B9FECu: goto label_2b9fec;
            case 0x2B9FF0u: goto label_2b9ff0;
            case 0x2B9FF4u: goto label_2b9ff4;
            case 0x2B9FF8u: goto label_2b9ff8;
            case 0x2B9FFCu: goto label_2b9ffc;
            case 0x2BA000u: goto label_2ba000;
            case 0x2BA004u: goto label_2ba004;
            case 0x2BA008u: goto label_2ba008;
            case 0x2BA00Cu: goto label_2ba00c;
            case 0x2BA010u: goto label_2ba010;
            case 0x2BA014u: goto label_2ba014;
            case 0x2BA018u: goto label_2ba018;
            case 0x2BA01Cu: goto label_2ba01c;
            case 0x2BA020u: goto label_2ba020;
            case 0x2BA024u: goto label_2ba024;
            case 0x2BA028u: goto label_2ba028;
            case 0x2BA02Cu: goto label_2ba02c;
            case 0x2BA030u: goto label_2ba030;
            case 0x2BA034u: goto label_2ba034;
            case 0x2BA038u: goto label_2ba038;
            case 0x2BA03Cu: goto label_2ba03c;
            case 0x2BA040u: goto label_2ba040;
            case 0x2BA044u: goto label_2ba044;
            case 0x2BA048u: goto label_2ba048;
            case 0x2BA04Cu: goto label_2ba04c;
            case 0x2BA050u: goto label_2ba050;
            case 0x2BA054u: goto label_2ba054;
            case 0x2BA058u: goto label_2ba058;
            case 0x2BA05Cu: goto label_2ba05c;
            case 0x2BA060u: goto label_2ba060;
            case 0x2BA064u: goto label_2ba064;
            case 0x2BA068u: goto label_2ba068;
            case 0x2BA06Cu: goto label_2ba06c;
            case 0x2BA070u: goto label_2ba070;
            case 0x2BA074u: goto label_2ba074;
            case 0x2BA078u: goto label_2ba078;
            case 0x2BA07Cu: goto label_2ba07c;
            case 0x2BA080u: goto label_2ba080;
            case 0x2BA084u: goto label_2ba084;
            case 0x2BA088u: goto label_2ba088;
            case 0x2BA08Cu: goto label_2ba08c;
            case 0x2BA090u: goto label_2ba090;
            case 0x2BA094u: goto label_2ba094;
            case 0x2BA098u: goto label_2ba098;
            case 0x2BA09Cu: goto label_2ba09c;
            case 0x2BA0A0u: goto label_2ba0a0;
            case 0x2BA0A4u: goto label_2ba0a4;
            case 0x2BA0A8u: goto label_2ba0a8;
            case 0x2BA0ACu: goto label_2ba0ac;
            case 0x2BA0B0u: goto label_2ba0b0;
            case 0x2BA0B4u: goto label_2ba0b4;
            case 0x2BA0B8u: goto label_2ba0b8;
            case 0x2BA0BCu: goto label_2ba0bc;
            case 0x2BA0C0u: goto label_2ba0c0;
            case 0x2BA0C4u: goto label_2ba0c4;
            case 0x2BA0C8u: goto label_2ba0c8;
            case 0x2BA0CCu: goto label_2ba0cc;
            case 0x2BA0D0u: goto label_2ba0d0;
            case 0x2BA0D4u: goto label_2ba0d4;
            case 0x2BA0D8u: goto label_2ba0d8;
            case 0x2BA0DCu: goto label_2ba0dc;
            case 0x2BA0E0u: goto label_2ba0e0;
            case 0x2BA0E4u: goto label_2ba0e4;
            case 0x2BA0E8u: goto label_2ba0e8;
            case 0x2BA0ECu: goto label_2ba0ec;
            case 0x2BA0F0u: goto label_2ba0f0;
            case 0x2BA0F4u: goto label_2ba0f4;
            case 0x2BA0F8u: goto label_2ba0f8;
            case 0x2BA0FCu: goto label_2ba0fc;
            case 0x2BA100u: goto label_2ba100;
            case 0x2BA104u: goto label_2ba104;
            case 0x2BA108u: goto label_2ba108;
            case 0x2BA10Cu: goto label_2ba10c;
            case 0x2BA110u: goto label_2ba110;
            case 0x2BA114u: goto label_2ba114;
            case 0x2BA118u: goto label_2ba118;
            case 0x2BA11Cu: goto label_2ba11c;
            case 0x2BA120u: goto label_2ba120;
            case 0x2BA124u: goto label_2ba124;
            case 0x2BA128u: goto label_2ba128;
            case 0x2BA12Cu: goto label_2ba12c;
            case 0x2BA130u: goto label_2ba130;
            case 0x2BA134u: goto label_2ba134;
            case 0x2BA138u: goto label_2ba138;
            case 0x2BA13Cu: goto label_2ba13c;
            case 0x2BA140u: goto label_2ba140;
            case 0x2BA144u: goto label_2ba144;
            case 0x2BA148u: goto label_2ba148;
            case 0x2BA14Cu: goto label_2ba14c;
            case 0x2BA150u: goto label_2ba150;
            case 0x2BA154u: goto label_2ba154;
            case 0x2BA158u: goto label_2ba158;
            case 0x2BA15Cu: goto label_2ba15c;
            case 0x2BA160u: goto label_2ba160;
            case 0x2BA164u: goto label_2ba164;
            case 0x2BA168u: goto label_2ba168;
            case 0x2BA16Cu: goto label_2ba16c;
            case 0x2BA170u: goto label_2ba170;
            case 0x2BA174u: goto label_2ba174;
            case 0x2BA178u: goto label_2ba178;
            case 0x2BA17Cu: goto label_2ba17c;
            case 0x2BA180u: goto label_2ba180;
            case 0x2BA184u: goto label_2ba184;
            case 0x2BA188u: goto label_2ba188;
            case 0x2BA18Cu: goto label_2ba18c;
            case 0x2BA190u: goto label_2ba190;
            case 0x2BA194u: goto label_2ba194;
            case 0x2BA198u: goto label_2ba198;
            case 0x2BA19Cu: goto label_2ba19c;
            case 0x2BA1A0u: goto label_2ba1a0;
            case 0x2BA1A4u: goto label_2ba1a4;
            case 0x2BA1A8u: goto label_2ba1a8;
            case 0x2BA1ACu: goto label_2ba1ac;
            case 0x2BA1B0u: goto label_2ba1b0;
            case 0x2BA1B4u: goto label_2ba1b4;
            case 0x2BA1B8u: goto label_2ba1b8;
            case 0x2BA1BCu: goto label_2ba1bc;
            case 0x2BA1C0u: goto label_2ba1c0;
            case 0x2BA1C4u: goto label_2ba1c4;
            case 0x2BA1C8u: goto label_2ba1c8;
            case 0x2BA1CCu: goto label_2ba1cc;
            case 0x2BA1D0u: goto label_2ba1d0;
            case 0x2BA1D4u: goto label_2ba1d4;
            case 0x2BA1D8u: goto label_2ba1d8;
            case 0x2BA1DCu: goto label_2ba1dc;
            case 0x2BA1E0u: goto label_2ba1e0;
            case 0x2BA1E4u: goto label_2ba1e4;
            case 0x2BA1E8u: goto label_2ba1e8;
            case 0x2BA1ECu: goto label_2ba1ec;
            case 0x2BA1F0u: goto label_2ba1f0;
            case 0x2BA1F4u: goto label_2ba1f4;
            case 0x2BA1F8u: goto label_2ba1f8;
            case 0x2BA1FCu: goto label_2ba1fc;
            case 0x2BA200u: goto label_2ba200;
            case 0x2BA204u: goto label_2ba204;
            case 0x2BA208u: goto label_2ba208;
            case 0x2BA20Cu: goto label_2ba20c;
            case 0x2BA210u: goto label_2ba210;
            case 0x2BA214u: goto label_2ba214;
            case 0x2BA218u: goto label_2ba218;
            case 0x2BA21Cu: goto label_2ba21c;
            case 0x2BA220u: goto label_2ba220;
            case 0x2BA224u: goto label_2ba224;
            case 0x2BA228u: goto label_2ba228;
            case 0x2BA22Cu: goto label_2ba22c;
            case 0x2BA230u: goto label_2ba230;
            case 0x2BA234u: goto label_2ba234;
            case 0x2BA238u: goto label_2ba238;
            case 0x2BA23Cu: goto label_2ba23c;
            case 0x2BA240u: goto label_2ba240;
            case 0x2BA244u: goto label_2ba244;
            case 0x2BA248u: goto label_2ba248;
            case 0x2BA24Cu: goto label_2ba24c;
            case 0x2BA250u: goto label_2ba250;
            case 0x2BA254u: goto label_2ba254;
            case 0x2BA258u: goto label_2ba258;
            case 0x2BA25Cu: goto label_2ba25c;
            case 0x2BA260u: goto label_2ba260;
            case 0x2BA264u: goto label_2ba264;
            case 0x2BA268u: goto label_2ba268;
            case 0x2BA26Cu: goto label_2ba26c;
            case 0x2BA270u: goto label_2ba270;
            case 0x2BA274u: goto label_2ba274;
            case 0x2BA278u: goto label_2ba278;
            case 0x2BA27Cu: goto label_2ba27c;
            case 0x2BA280u: goto label_2ba280;
            case 0x2BA284u: goto label_2ba284;
            case 0x2BA288u: goto label_2ba288;
            case 0x2BA28Cu: goto label_2ba28c;
            case 0x2BA290u: goto label_2ba290;
            case 0x2BA294u: goto label_2ba294;
            case 0x2BA298u: goto label_2ba298;
            case 0x2BA29Cu: goto label_2ba29c;
            case 0x2BA2A0u: goto label_2ba2a0;
            case 0x2BA2A4u: goto label_2ba2a4;
            case 0x2BA2A8u: goto label_2ba2a8;
            case 0x2BA2ACu: goto label_2ba2ac;
            case 0x2BA2B0u: goto label_2ba2b0;
            case 0x2BA2B4u: goto label_2ba2b4;
            case 0x2BA2B8u: goto label_2ba2b8;
            case 0x2BA2BCu: goto label_2ba2bc;
            case 0x2BA2C0u: goto label_2ba2c0;
            case 0x2BA2C4u: goto label_2ba2c4;
            case 0x2BA2C8u: goto label_2ba2c8;
            case 0x2BA2CCu: goto label_2ba2cc;
            case 0x2BA2D0u: goto label_2ba2d0;
            case 0x2BA2D4u: goto label_2ba2d4;
            case 0x2BA2D8u: goto label_2ba2d8;
            case 0x2BA2DCu: goto label_2ba2dc;
            case 0x2BA2E0u: goto label_2ba2e0;
            case 0x2BA2E4u: goto label_2ba2e4;
            case 0x2BA2E8u: goto label_2ba2e8;
            case 0x2BA2ECu: goto label_2ba2ec;
            case 0x2BA2F0u: goto label_2ba2f0;
            case 0x2BA2F4u: goto label_2ba2f4;
            case 0x2BA2F8u: goto label_2ba2f8;
            case 0x2BA2FCu: goto label_2ba2fc;
            case 0x2BA300u: goto label_2ba300;
            case 0x2BA304u: goto label_2ba304;
            case 0x2BA308u: goto label_2ba308;
            case 0x2BA30Cu: goto label_2ba30c;
            case 0x2BA310u: goto label_2ba310;
            case 0x2BA314u: goto label_2ba314;
            case 0x2BA318u: goto label_2ba318;
            case 0x2BA31Cu: goto label_2ba31c;
            case 0x2BA320u: goto label_2ba320;
            case 0x2BA324u: goto label_2ba324;
            case 0x2BA328u: goto label_2ba328;
            case 0x2BA32Cu: goto label_2ba32c;
            case 0x2BA330u: goto label_2ba330;
            case 0x2BA334u: goto label_2ba334;
            case 0x2BA338u: goto label_2ba338;
            case 0x2BA33Cu: goto label_2ba33c;
            case 0x2BA340u: goto label_2ba340;
            case 0x2BA344u: goto label_2ba344;
            case 0x2BA348u: goto label_2ba348;
            case 0x2BA34Cu: goto label_2ba34c;
            case 0x2BA350u: goto label_2ba350;
            case 0x2BA354u: goto label_2ba354;
            case 0x2BA358u: goto label_2ba358;
            case 0x2BA35Cu: goto label_2ba35c;
            case 0x2BA360u: goto label_2ba360;
            case 0x2BA364u: goto label_2ba364;
            case 0x2BA368u: goto label_2ba368;
            case 0x2BA36Cu: goto label_2ba36c;
            case 0x2BA370u: goto label_2ba370;
            case 0x2BA374u: goto label_2ba374;
            case 0x2BA378u: goto label_2ba378;
            case 0x2BA37Cu: goto label_2ba37c;
            case 0x2BA380u: goto label_2ba380;
            case 0x2BA384u: goto label_2ba384;
            case 0x2BA388u: goto label_2ba388;
            case 0x2BA38Cu: goto label_2ba38c;
            case 0x2BA390u: goto label_2ba390;
            case 0x2BA394u: goto label_2ba394;
            case 0x2BA398u: goto label_2ba398;
            case 0x2BA39Cu: goto label_2ba39c;
            case 0x2BA3A0u: goto label_2ba3a0;
            case 0x2BA3A4u: goto label_2ba3a4;
            case 0x2BA3A8u: goto label_2ba3a8;
            case 0x2BA3ACu: goto label_2ba3ac;
            case 0x2BA3B0u: goto label_2ba3b0;
            case 0x2BA3B4u: goto label_2ba3b4;
            case 0x2BA3B8u: goto label_2ba3b8;
            case 0x2BA3BCu: goto label_2ba3bc;
            case 0x2BA3C0u: goto label_2ba3c0;
            case 0x2BA3C4u: goto label_2ba3c4;
            case 0x2BA3C8u: goto label_2ba3c8;
            case 0x2BA3CCu: goto label_2ba3cc;
            case 0x2BA3D0u: goto label_2ba3d0;
            case 0x2BA3D4u: goto label_2ba3d4;
            case 0x2BA3D8u: goto label_2ba3d8;
            case 0x2BA3DCu: goto label_2ba3dc;
            case 0x2BA3E0u: goto label_2ba3e0;
            case 0x2BA3E4u: goto label_2ba3e4;
            case 0x2BA3E8u: goto label_2ba3e8;
            case 0x2BA3ECu: goto label_2ba3ec;
            case 0x2BA3F0u: goto label_2ba3f0;
            case 0x2BA3F4u: goto label_2ba3f4;
            case 0x2BA3F8u: goto label_2ba3f8;
            case 0x2BA3FCu: goto label_2ba3fc;
            case 0x2BA400u: goto label_2ba400;
            case 0x2BA404u: goto label_2ba404;
            case 0x2BA408u: goto label_2ba408;
            case 0x2BA40Cu: goto label_2ba40c;
            case 0x2BA410u: goto label_2ba410;
            case 0x2BA414u: goto label_2ba414;
            case 0x2BA418u: goto label_2ba418;
            case 0x2BA41Cu: goto label_2ba41c;
            case 0x2BA420u: goto label_2ba420;
            case 0x2BA424u: goto label_2ba424;
            case 0x2BA428u: goto label_2ba428;
            case 0x2BA42Cu: goto label_2ba42c;
            case 0x2BA430u: goto label_2ba430;
            case 0x2BA434u: goto label_2ba434;
            case 0x2BA438u: goto label_2ba438;
            case 0x2BA43Cu: goto label_2ba43c;
            case 0x2BA440u: goto label_2ba440;
            case 0x2BA444u: goto label_2ba444;
            case 0x2BA448u: goto label_2ba448;
            case 0x2BA44Cu: goto label_2ba44c;
            case 0x2BA450u: goto label_2ba450;
            case 0x2BA454u: goto label_2ba454;
            case 0x2BA458u: goto label_2ba458;
            case 0x2BA45Cu: goto label_2ba45c;
            case 0x2BA460u: goto label_2ba460;
            case 0x2BA464u: goto label_2ba464;
            case 0x2BA468u: goto label_2ba468;
            case 0x2BA46Cu: goto label_2ba46c;
            case 0x2BA470u: goto label_2ba470;
            case 0x2BA474u: goto label_2ba474;
            case 0x2BA478u: goto label_2ba478;
            case 0x2BA47Cu: goto label_2ba47c;
            case 0x2BA480u: goto label_2ba480;
            case 0x2BA484u: goto label_2ba484;
            case 0x2BA488u: goto label_2ba488;
            case 0x2BA48Cu: goto label_2ba48c;
            case 0x2BA490u: goto label_2ba490;
            case 0x2BA494u: goto label_2ba494;
            case 0x2BA498u: goto label_2ba498;
            case 0x2BA49Cu: goto label_2ba49c;
            case 0x2BA4A0u: goto label_2ba4a0;
            case 0x2BA4A4u: goto label_2ba4a4;
            case 0x2BA4A8u: goto label_2ba4a8;
            case 0x2BA4ACu: goto label_2ba4ac;
            case 0x2BA4B0u: goto label_2ba4b0;
            case 0x2BA4B4u: goto label_2ba4b4;
            case 0x2BA4B8u: goto label_2ba4b8;
            case 0x2BA4BCu: goto label_2ba4bc;
            case 0x2BA4C0u: goto label_2ba4c0;
            case 0x2BA4C4u: goto label_2ba4c4;
            case 0x2BA4C8u: goto label_2ba4c8;
            case 0x2BA4CCu: goto label_2ba4cc;
            case 0x2BA4D0u: goto label_2ba4d0;
            case 0x2BA4D4u: goto label_2ba4d4;
            case 0x2BA4D8u: goto label_2ba4d8;
            case 0x2BA4DCu: goto label_2ba4dc;
            case 0x2BA4E0u: goto label_2ba4e0;
            case 0x2BA4E4u: goto label_2ba4e4;
            case 0x2BA4E8u: goto label_2ba4e8;
            case 0x2BA4ECu: goto label_2ba4ec;
            case 0x2BA4F0u: goto label_2ba4f0;
            case 0x2BA4F4u: goto label_2ba4f4;
            case 0x2BA4F8u: goto label_2ba4f8;
            case 0x2BA4FCu: goto label_2ba4fc;
            case 0x2BA500u: goto label_2ba500;
            case 0x2BA504u: goto label_2ba504;
            case 0x2BA508u: goto label_2ba508;
            case 0x2BA50Cu: goto label_2ba50c;
            case 0x2BA510u: goto label_2ba510;
            case 0x2BA514u: goto label_2ba514;
            case 0x2BA518u: goto label_2ba518;
            case 0x2BA51Cu: goto label_2ba51c;
            case 0x2BA520u: goto label_2ba520;
            case 0x2BA524u: goto label_2ba524;
            case 0x2BA528u: goto label_2ba528;
            case 0x2BA52Cu: goto label_2ba52c;
            case 0x2BA530u: goto label_2ba530;
            case 0x2BA534u: goto label_2ba534;
            case 0x2BA538u: goto label_2ba538;
            case 0x2BA53Cu: goto label_2ba53c;
            case 0x2BA540u: goto label_2ba540;
            case 0x2BA544u: goto label_2ba544;
            case 0x2BA548u: goto label_2ba548;
            case 0x2BA54Cu: goto label_2ba54c;
            case 0x2BA550u: goto label_2ba550;
            case 0x2BA554u: goto label_2ba554;
            case 0x2BA558u: goto label_2ba558;
            case 0x2BA55Cu: goto label_2ba55c;
            case 0x2BA560u: goto label_2ba560;
            case 0x2BA564u: goto label_2ba564;
            case 0x2BA568u: goto label_2ba568;
            case 0x2BA56Cu: goto label_2ba56c;
            case 0x2BA570u: goto label_2ba570;
            case 0x2BA574u: goto label_2ba574;
            case 0x2BA578u: goto label_2ba578;
            case 0x2BA57Cu: goto label_2ba57c;
            case 0x2BA580u: goto label_2ba580;
            case 0x2BA584u: goto label_2ba584;
            case 0x2BA588u: goto label_2ba588;
            case 0x2BA58Cu: goto label_2ba58c;
            case 0x2BA590u: goto label_2ba590;
            case 0x2BA594u: goto label_2ba594;
            case 0x2BA598u: goto label_2ba598;
            case 0x2BA59Cu: goto label_2ba59c;
            case 0x2BA5A0u: goto label_2ba5a0;
            case 0x2BA5A4u: goto label_2ba5a4;
            case 0x2BA5A8u: goto label_2ba5a8;
            case 0x2BA5ACu: goto label_2ba5ac;
            case 0x2BA5B0u: goto label_2ba5b0;
            case 0x2BA5B4u: goto label_2ba5b4;
            case 0x2BA5B8u: goto label_2ba5b8;
            case 0x2BA5BCu: goto label_2ba5bc;
            case 0x2BA5C0u: goto label_2ba5c0;
            case 0x2BA5C4u: goto label_2ba5c4;
            case 0x2BA5C8u: goto label_2ba5c8;
            case 0x2BA5CCu: goto label_2ba5cc;
            case 0x2BA5D0u: goto label_2ba5d0;
            case 0x2BA5D4u: goto label_2ba5d4;
            case 0x2BA5D8u: goto label_2ba5d8;
            case 0x2BA5DCu: goto label_2ba5dc;
            case 0x2BA5E0u: goto label_2ba5e0;
            case 0x2BA5E4u: goto label_2ba5e4;
            case 0x2BA5E8u: goto label_2ba5e8;
            case 0x2BA5ECu: goto label_2ba5ec;
            case 0x2BA5F0u: goto label_2ba5f0;
            case 0x2BA5F4u: goto label_2ba5f4;
            case 0x2BA5F8u: goto label_2ba5f8;
            case 0x2BA5FCu: goto label_2ba5fc;
            case 0x2BA600u: goto label_2ba600;
            case 0x2BA604u: goto label_2ba604;
            case 0x2BA608u: goto label_2ba608;
            case 0x2BA60Cu: goto label_2ba60c;
            case 0x2BA610u: goto label_2ba610;
            case 0x2BA614u: goto label_2ba614;
            case 0x2BA618u: goto label_2ba618;
            case 0x2BA61Cu: goto label_2ba61c;
            case 0x2BA620u: goto label_2ba620;
            case 0x2BA624u: goto label_2ba624;
            case 0x2BA628u: goto label_2ba628;
            case 0x2BA62Cu: goto label_2ba62c;
            case 0x2BA630u: goto label_2ba630;
            case 0x2BA634u: goto label_2ba634;
            case 0x2BA638u: goto label_2ba638;
            case 0x2BA63Cu: goto label_2ba63c;
            case 0x2BA640u: goto label_2ba640;
            case 0x2BA644u: goto label_2ba644;
            case 0x2BA648u: goto label_2ba648;
            case 0x2BA64Cu: goto label_2ba64c;
            case 0x2BA650u: goto label_2ba650;
            case 0x2BA654u: goto label_2ba654;
            case 0x2BA658u: goto label_2ba658;
            case 0x2BA65Cu: goto label_2ba65c;
            case 0x2BA660u: goto label_2ba660;
            case 0x2BA664u: goto label_2ba664;
            case 0x2BA668u: goto label_2ba668;
            case 0x2BA66Cu: goto label_2ba66c;
            case 0x2BA670u: goto label_2ba670;
            case 0x2BA674u: goto label_2ba674;
            case 0x2BA678u: goto label_2ba678;
            case 0x2BA67Cu: goto label_2ba67c;
            case 0x2BA680u: goto label_2ba680;
            case 0x2BA684u: goto label_2ba684;
            case 0x2BA688u: goto label_2ba688;
            case 0x2BA68Cu: goto label_2ba68c;
            case 0x2BA690u: goto label_2ba690;
            case 0x2BA694u: goto label_2ba694;
            case 0x2BA698u: goto label_2ba698;
            case 0x2BA69Cu: goto label_2ba69c;
            case 0x2BA6A0u: goto label_2ba6a0;
            case 0x2BA6A4u: goto label_2ba6a4;
            case 0x2BA6A8u: goto label_2ba6a8;
            case 0x2BA6ACu: goto label_2ba6ac;
            case 0x2BA6B0u: goto label_2ba6b0;
            case 0x2BA6B4u: goto label_2ba6b4;
            case 0x2BA6B8u: goto label_2ba6b8;
            case 0x2BA6BCu: goto label_2ba6bc;
            case 0x2BA6C0u: goto label_2ba6c0;
            case 0x2BA6C4u: goto label_2ba6c4;
            case 0x2BA6C8u: goto label_2ba6c8;
            case 0x2BA6CCu: goto label_2ba6cc;
            case 0x2BA6D0u: goto label_2ba6d0;
            case 0x2BA6D4u: goto label_2ba6d4;
            case 0x2BA6D8u: goto label_2ba6d8;
            case 0x2BA6DCu: goto label_2ba6dc;
            case 0x2BA6E0u: goto label_2ba6e0;
            case 0x2BA6E4u: goto label_2ba6e4;
            case 0x2BA6E8u: goto label_2ba6e8;
            case 0x2BA6ECu: goto label_2ba6ec;
            case 0x2BA6F0u: goto label_2ba6f0;
            case 0x2BA6F4u: goto label_2ba6f4;
            case 0x2BA6F8u: goto label_2ba6f8;
            case 0x2BA6FCu: goto label_2ba6fc;
            case 0x2BA700u: goto label_2ba700;
            case 0x2BA704u: goto label_2ba704;
            case 0x2BA708u: goto label_2ba708;
            case 0x2BA70Cu: goto label_2ba70c;
            case 0x2BA710u: goto label_2ba710;
            case 0x2BA714u: goto label_2ba714;
            case 0x2BA718u: goto label_2ba718;
            case 0x2BA71Cu: goto label_2ba71c;
            case 0x2BA720u: goto label_2ba720;
            case 0x2BA724u: goto label_2ba724;
            case 0x2BA728u: goto label_2ba728;
            case 0x2BA72Cu: goto label_2ba72c;
            case 0x2BA730u: goto label_2ba730;
            case 0x2BA734u: goto label_2ba734;
            case 0x2BA738u: goto label_2ba738;
            case 0x2BA73Cu: goto label_2ba73c;
            case 0x2BA740u: goto label_2ba740;
            case 0x2BA744u: goto label_2ba744;
            case 0x2BA748u: goto label_2ba748;
            case 0x2BA74Cu: goto label_2ba74c;
            case 0x2BA750u: goto label_2ba750;
            case 0x2BA754u: goto label_2ba754;
            case 0x2BA758u: goto label_2ba758;
            case 0x2BA75Cu: goto label_2ba75c;
            case 0x2BA760u: goto label_2ba760;
            case 0x2BA764u: goto label_2ba764;
            case 0x2BA768u: goto label_2ba768;
            case 0x2BA76Cu: goto label_2ba76c;
            case 0x2BA770u: goto label_2ba770;
            case 0x2BA774u: goto label_2ba774;
            case 0x2BA778u: goto label_2ba778;
            case 0x2BA77Cu: goto label_2ba77c;
            case 0x2BA780u: goto label_2ba780;
            case 0x2BA784u: goto label_2ba784;
            case 0x2BA788u: goto label_2ba788;
            case 0x2BA78Cu: goto label_2ba78c;
            case 0x2BA790u: goto label_2ba790;
            case 0x2BA794u: goto label_2ba794;
            case 0x2BA798u: goto label_2ba798;
            case 0x2BA79Cu: goto label_2ba79c;
            case 0x2BA7A0u: goto label_2ba7a0;
            case 0x2BA7A4u: goto label_2ba7a4;
            case 0x2BA7A8u: goto label_2ba7a8;
            case 0x2BA7ACu: goto label_2ba7ac;
            case 0x2BA7B0u: goto label_2ba7b0;
            case 0x2BA7B4u: goto label_2ba7b4;
            case 0x2BA7B8u: goto label_2ba7b8;
            case 0x2BA7BCu: goto label_2ba7bc;
            case 0x2BA7C0u: goto label_2ba7c0;
            case 0x2BA7C4u: goto label_2ba7c4;
            case 0x2BA7C8u: goto label_2ba7c8;
            case 0x2BA7CCu: goto label_2ba7cc;
            case 0x2BA7D0u: goto label_2ba7d0;
            case 0x2BA7D4u: goto label_2ba7d4;
            case 0x2BA7D8u: goto label_2ba7d8;
            case 0x2BA7DCu: goto label_2ba7dc;
            case 0x2BA7E0u: goto label_2ba7e0;
            case 0x2BA7E4u: goto label_2ba7e4;
            case 0x2BA7E8u: goto label_2ba7e8;
            case 0x2BA7ECu: goto label_2ba7ec;
            case 0x2BA7F0u: goto label_2ba7f0;
            case 0x2BA7F4u: goto label_2ba7f4;
            case 0x2BA7F8u: goto label_2ba7f8;
            case 0x2BA7FCu: goto label_2ba7fc;
            case 0x2BA800u: goto label_2ba800;
            case 0x2BA804u: goto label_2ba804;
            case 0x2BA808u: goto label_2ba808;
            case 0x2BA80Cu: goto label_2ba80c;
            case 0x2BA810u: goto label_2ba810;
            case 0x2BA814u: goto label_2ba814;
            case 0x2BA818u: goto label_2ba818;
            case 0x2BA81Cu: goto label_2ba81c;
            case 0x2BA820u: goto label_2ba820;
            case 0x2BA824u: goto label_2ba824;
            case 0x2BA828u: goto label_2ba828;
            case 0x2BA82Cu: goto label_2ba82c;
            case 0x2BA830u: goto label_2ba830;
            case 0x2BA834u: goto label_2ba834;
            case 0x2BA838u: goto label_2ba838;
            case 0x2BA83Cu: goto label_2ba83c;
            case 0x2BA840u: goto label_2ba840;
            case 0x2BA844u: goto label_2ba844;
            case 0x2BA848u: goto label_2ba848;
            case 0x2BA84Cu: goto label_2ba84c;
            case 0x2BA850u: goto label_2ba850;
            case 0x2BA854u: goto label_2ba854;
            case 0x2BA858u: goto label_2ba858;
            case 0x2BA85Cu: goto label_2ba85c;
            case 0x2BA860u: goto label_2ba860;
            case 0x2BA864u: goto label_2ba864;
            case 0x2BA868u: goto label_2ba868;
            case 0x2BA86Cu: goto label_2ba86c;
            case 0x2BA870u: goto label_2ba870;
            case 0x2BA874u: goto label_2ba874;
            case 0x2BA878u: goto label_2ba878;
            case 0x2BA87Cu: goto label_2ba87c;
            case 0x2BA880u: goto label_2ba880;
            case 0x2BA884u: goto label_2ba884;
            case 0x2BA888u: goto label_2ba888;
            case 0x2BA88Cu: goto label_2ba88c;
            case 0x2BA890u: goto label_2ba890;
            case 0x2BA894u: goto label_2ba894;
            case 0x2BA898u: goto label_2ba898;
            case 0x2BA89Cu: goto label_2ba89c;
            case 0x2BA8A0u: goto label_2ba8a0;
            case 0x2BA8A4u: goto label_2ba8a4;
            case 0x2BA8A8u: goto label_2ba8a8;
            case 0x2BA8ACu: goto label_2ba8ac;
            case 0x2BA8B0u: goto label_2ba8b0;
            case 0x2BA8B4u: goto label_2ba8b4;
            case 0x2BA8B8u: goto label_2ba8b8;
            case 0x2BA8BCu: goto label_2ba8bc;
            case 0x2BA8C0u: goto label_2ba8c0;
            case 0x2BA8C4u: goto label_2ba8c4;
            case 0x2BA8C8u: goto label_2ba8c8;
            case 0x2BA8CCu: goto label_2ba8cc;
            case 0x2BA8D0u: goto label_2ba8d0;
            case 0x2BA8D4u: goto label_2ba8d4;
            case 0x2BA8D8u: goto label_2ba8d8;
            case 0x2BA8DCu: goto label_2ba8dc;
            case 0x2BA8E0u: goto label_2ba8e0;
            case 0x2BA8E4u: goto label_2ba8e4;
            case 0x2BA8E8u: goto label_2ba8e8;
            case 0x2BA8ECu: goto label_2ba8ec;
            case 0x2BA8F0u: goto label_2ba8f0;
            case 0x2BA8F4u: goto label_2ba8f4;
            case 0x2BA8F8u: goto label_2ba8f8;
            case 0x2BA8FCu: goto label_2ba8fc;
            case 0x2BA900u: goto label_2ba900;
            case 0x2BA904u: goto label_2ba904;
            case 0x2BA908u: goto label_2ba908;
            case 0x2BA90Cu: goto label_2ba90c;
            case 0x2BA910u: goto label_2ba910;
            case 0x2BA914u: goto label_2ba914;
            case 0x2BA918u: goto label_2ba918;
            case 0x2BA91Cu: goto label_2ba91c;
            case 0x2BA920u: goto label_2ba920;
            case 0x2BA924u: goto label_2ba924;
            case 0x2BA928u: goto label_2ba928;
            case 0x2BA92Cu: goto label_2ba92c;
            case 0x2BA930u: goto label_2ba930;
            case 0x2BA934u: goto label_2ba934;
            case 0x2BA938u: goto label_2ba938;
            case 0x2BA93Cu: goto label_2ba93c;
            case 0x2BA940u: goto label_2ba940;
            case 0x2BA944u: goto label_2ba944;
            case 0x2BA948u: goto label_2ba948;
            case 0x2BA94Cu: goto label_2ba94c;
            case 0x2BA950u: goto label_2ba950;
            case 0x2BA954u: goto label_2ba954;
            case 0x2BA958u: goto label_2ba958;
            case 0x2BA95Cu: goto label_2ba95c;
            case 0x2BA960u: goto label_2ba960;
            case 0x2BA964u: goto label_2ba964;
            case 0x2BA968u: goto label_2ba968;
            case 0x2BA96Cu: goto label_2ba96c;
            case 0x2BA970u: goto label_2ba970;
            case 0x2BA974u: goto label_2ba974;
            case 0x2BA978u: goto label_2ba978;
            case 0x2BA97Cu: goto label_2ba97c;
            case 0x2BA980u: goto label_2ba980;
            case 0x2BA984u: goto label_2ba984;
            case 0x2BA988u: goto label_2ba988;
            case 0x2BA98Cu: goto label_2ba98c;
            case 0x2BA990u: goto label_2ba990;
            case 0x2BA994u: goto label_2ba994;
            case 0x2BA998u: goto label_2ba998;
            case 0x2BA99Cu: goto label_2ba99c;
            case 0x2BA9A0u: goto label_2ba9a0;
            case 0x2BA9A4u: goto label_2ba9a4;
            case 0x2BA9A8u: goto label_2ba9a8;
            case 0x2BA9ACu: goto label_2ba9ac;
            case 0x2BA9B0u: goto label_2ba9b0;
            case 0x2BA9B4u: goto label_2ba9b4;
            case 0x2BA9B8u: goto label_2ba9b8;
            case 0x2BA9BCu: goto label_2ba9bc;
            case 0x2BA9C0u: goto label_2ba9c0;
            case 0x2BA9C4u: goto label_2ba9c4;
            case 0x2BA9C8u: goto label_2ba9c8;
            case 0x2BA9CCu: goto label_2ba9cc;
            case 0x2BA9D0u: goto label_2ba9d0;
            case 0x2BA9D4u: goto label_2ba9d4;
            case 0x2BA9D8u: goto label_2ba9d8;
            case 0x2BA9DCu: goto label_2ba9dc;
            case 0x2BA9E0u: goto label_2ba9e0;
            case 0x2BA9E4u: goto label_2ba9e4;
            case 0x2BA9E8u: goto label_2ba9e8;
            case 0x2BA9ECu: goto label_2ba9ec;
            case 0x2BA9F0u: goto label_2ba9f0;
            case 0x2BA9F4u: goto label_2ba9f4;
            case 0x2BA9F8u: goto label_2ba9f8;
            case 0x2BA9FCu: goto label_2ba9fc;
            case 0x2BAA00u: goto label_2baa00;
            case 0x2BAA04u: goto label_2baa04;
            case 0x2BAA08u: goto label_2baa08;
            case 0x2BAA0Cu: goto label_2baa0c;
            case 0x2BAA10u: goto label_2baa10;
            case 0x2BAA14u: goto label_2baa14;
            case 0x2BAA18u: goto label_2baa18;
            case 0x2BAA1Cu: goto label_2baa1c;
            case 0x2BAA20u: goto label_2baa20;
            case 0x2BAA24u: goto label_2baa24;
            case 0x2BAA28u: goto label_2baa28;
            case 0x2BAA2Cu: goto label_2baa2c;
            case 0x2BAA30u: goto label_2baa30;
            case 0x2BAA34u: goto label_2baa34;
            case 0x2BAA38u: goto label_2baa38;
            case 0x2BAA3Cu: goto label_2baa3c;
            case 0x2BAA40u: goto label_2baa40;
            case 0x2BAA44u: goto label_2baa44;
            case 0x2BAA48u: goto label_2baa48;
            case 0x2BAA4Cu: goto label_2baa4c;
            case 0x2BAA50u: goto label_2baa50;
            case 0x2BAA54u: goto label_2baa54;
            case 0x2BAA58u: goto label_2baa58;
            case 0x2BAA5Cu: goto label_2baa5c;
            case 0x2BAA60u: goto label_2baa60;
            case 0x2BAA64u: goto label_2baa64;
            case 0x2BAA68u: goto label_2baa68;
            case 0x2BAA6Cu: goto label_2baa6c;
            case 0x2BAA70u: goto label_2baa70;
            case 0x2BAA74u: goto label_2baa74;
            case 0x2BAA78u: goto label_2baa78;
            case 0x2BAA7Cu: goto label_2baa7c;
            case 0x2BAA80u: goto label_2baa80;
            case 0x2BAA84u: goto label_2baa84;
            case 0x2BAA88u: goto label_2baa88;
            case 0x2BAA8Cu: goto label_2baa8c;
            case 0x2BAA90u: goto label_2baa90;
            case 0x2BAA94u: goto label_2baa94;
            case 0x2BAA98u: goto label_2baa98;
            case 0x2BAA9Cu: goto label_2baa9c;
            case 0x2BAAA0u: goto label_2baaa0;
            case 0x2BAAA4u: goto label_2baaa4;
            case 0x2BAAA8u: goto label_2baaa8;
            case 0x2BAAACu: goto label_2baaac;
            case 0x2BAAB0u: goto label_2baab0;
            case 0x2BAAB4u: goto label_2baab4;
            case 0x2BAAB8u: goto label_2baab8;
            case 0x2BAABCu: goto label_2baabc;
            case 0x2BAAC0u: goto label_2baac0;
            case 0x2BAAC4u: goto label_2baac4;
            case 0x2BAAC8u: goto label_2baac8;
            case 0x2BAACCu: goto label_2baacc;
            case 0x2BAAD0u: goto label_2baad0;
            case 0x2BAAD4u: goto label_2baad4;
            case 0x2BAAD8u: goto label_2baad8;
            case 0x2BAADCu: goto label_2baadc;
            case 0x2BAAE0u: goto label_2baae0;
            case 0x2BAAE4u: goto label_2baae4;
            case 0x2BAAE8u: goto label_2baae8;
            case 0x2BAAECu: goto label_2baaec;
            case 0x2BAAF0u: goto label_2baaf0;
            case 0x2BAAF4u: goto label_2baaf4;
            case 0x2BAAF8u: goto label_2baaf8;
            case 0x2BAAFCu: goto label_2baafc;
            case 0x2BAB00u: goto label_2bab00;
            case 0x2BAB04u: goto label_2bab04;
            case 0x2BAB08u: goto label_2bab08;
            case 0x2BAB0Cu: goto label_2bab0c;
            case 0x2BAB10u: goto label_2bab10;
            case 0x2BAB14u: goto label_2bab14;
            case 0x2BAB18u: goto label_2bab18;
            case 0x2BAB1Cu: goto label_2bab1c;
            case 0x2BAB20u: goto label_2bab20;
            case 0x2BAB24u: goto label_2bab24;
            case 0x2BAB28u: goto label_2bab28;
            case 0x2BAB2Cu: goto label_2bab2c;
            case 0x2BAB30u: goto label_2bab30;
            case 0x2BAB34u: goto label_2bab34;
            case 0x2BAB38u: goto label_2bab38;
            case 0x2BAB3Cu: goto label_2bab3c;
            case 0x2BAB40u: goto label_2bab40;
            case 0x2BAB44u: goto label_2bab44;
            case 0x2BAB48u: goto label_2bab48;
            case 0x2BAB4Cu: goto label_2bab4c;
            case 0x2BAB50u: goto label_2bab50;
            case 0x2BAB54u: goto label_2bab54;
            case 0x2BAB58u: goto label_2bab58;
            case 0x2BAB5Cu: goto label_2bab5c;
            case 0x2BAB60u: goto label_2bab60;
            case 0x2BAB64u: goto label_2bab64;
            case 0x2BAB68u: goto label_2bab68;
            case 0x2BAB6Cu: goto label_2bab6c;
            case 0x2BAB70u: goto label_2bab70;
            case 0x2BAB74u: goto label_2bab74;
            case 0x2BAB78u: goto label_2bab78;
            case 0x2BAB7Cu: goto label_2bab7c;
            case 0x2BAB80u: goto label_2bab80;
            case 0x2BAB84u: goto label_2bab84;
            case 0x2BAB88u: goto label_2bab88;
            case 0x2BAB8Cu: goto label_2bab8c;
            case 0x2BAB90u: goto label_2bab90;
            case 0x2BAB94u: goto label_2bab94;
            case 0x2BAB98u: goto label_2bab98;
            case 0x2BAB9Cu: goto label_2bab9c;
            case 0x2BABA0u: goto label_2baba0;
            case 0x2BABA4u: goto label_2baba4;
            case 0x2BABA8u: goto label_2baba8;
            case 0x2BABACu: goto label_2babac;
            case 0x2BABB0u: goto label_2babb0;
            case 0x2BABB4u: goto label_2babb4;
            case 0x2BABB8u: goto label_2babb8;
            case 0x2BABBCu: goto label_2babbc;
            case 0x2BABC0u: goto label_2babc0;
            case 0x2BABC4u: goto label_2babc4;
            case 0x2BABC8u: goto label_2babc8;
            case 0x2BABCCu: goto label_2babcc;
            case 0x2BABD0u: goto label_2babd0;
            case 0x2BABD4u: goto label_2babd4;
            case 0x2BABD8u: goto label_2babd8;
            case 0x2BABDCu: goto label_2babdc;
            case 0x2BABE0u: goto label_2babe0;
            case 0x2BABE4u: goto label_2babe4;
            case 0x2BABE8u: goto label_2babe8;
            case 0x2BABECu: goto label_2babec;
            case 0x2BABF0u: goto label_2babf0;
            case 0x2BABF4u: goto label_2babf4;
            case 0x2BABF8u: goto label_2babf8;
            case 0x2BABFCu: goto label_2babfc;
            case 0x2BAC00u: goto label_2bac00;
            case 0x2BAC04u: goto label_2bac04;
            case 0x2BAC08u: goto label_2bac08;
            case 0x2BAC0Cu: goto label_2bac0c;
            case 0x2BAC10u: goto label_2bac10;
            case 0x2BAC14u: goto label_2bac14;
            case 0x2BAC18u: goto label_2bac18;
            case 0x2BAC1Cu: goto label_2bac1c;
            case 0x2BAC20u: goto label_2bac20;
            case 0x2BAC24u: goto label_2bac24;
            case 0x2BAC28u: goto label_2bac28;
            case 0x2BAC2Cu: goto label_2bac2c;
            case 0x2BAC30u: goto label_2bac30;
            case 0x2BAC34u: goto label_2bac34;
            case 0x2BAC38u: goto label_2bac38;
            case 0x2BAC3Cu: goto label_2bac3c;
            case 0x2BAC40u: goto label_2bac40;
            case 0x2BAC44u: goto label_2bac44;
            case 0x2BAC48u: goto label_2bac48;
            case 0x2BAC4Cu: goto label_2bac4c;
            case 0x2BAC50u: goto label_2bac50;
            case 0x2BAC54u: goto label_2bac54;
            case 0x2BAC58u: goto label_2bac58;
            case 0x2BAC5Cu: goto label_2bac5c;
            case 0x2BAC60u: goto label_2bac60;
            case 0x2BAC64u: goto label_2bac64;
            case 0x2BAC68u: goto label_2bac68;
            case 0x2BAC6Cu: goto label_2bac6c;
            case 0x2BAC70u: goto label_2bac70;
            case 0x2BAC74u: goto label_2bac74;
            case 0x2BAC78u: goto label_2bac78;
            case 0x2BAC7Cu: goto label_2bac7c;
            case 0x2BAC80u: goto label_2bac80;
            case 0x2BAC84u: goto label_2bac84;
            case 0x2BAC88u: goto label_2bac88;
            case 0x2BAC8Cu: goto label_2bac8c;
            case 0x2BAC90u: goto label_2bac90;
            case 0x2BAC94u: goto label_2bac94;
            case 0x2BAC98u: goto label_2bac98;
            case 0x2BAC9Cu: goto label_2bac9c;
            case 0x2BACA0u: goto label_2baca0;
            case 0x2BACA4u: goto label_2baca4;
            case 0x2BACA8u: goto label_2baca8;
            case 0x2BACACu: goto label_2bacac;
            case 0x2BACB0u: goto label_2bacb0;
            case 0x2BACB4u: goto label_2bacb4;
            case 0x2BACB8u: goto label_2bacb8;
            case 0x2BACBCu: goto label_2bacbc;
            case 0x2BACC0u: goto label_2bacc0;
            case 0x2BACC4u: goto label_2bacc4;
            case 0x2BACC8u: goto label_2bacc8;
            case 0x2BACCCu: goto label_2baccc;
            case 0x2BACD0u: goto label_2bacd0;
            case 0x2BACD4u: goto label_2bacd4;
            case 0x2BACD8u: goto label_2bacd8;
            case 0x2BACDCu: goto label_2bacdc;
            case 0x2BACE0u: goto label_2bace0;
            case 0x2BACE4u: goto label_2bace4;
            case 0x2BACE8u: goto label_2bace8;
            case 0x2BACECu: goto label_2bacec;
            case 0x2BACF0u: goto label_2bacf0;
            case 0x2BACF4u: goto label_2bacf4;
            case 0x2BACF8u: goto label_2bacf8;
            case 0x2BACFCu: goto label_2bacfc;
            case 0x2BAD00u: goto label_2bad00;
            case 0x2BAD04u: goto label_2bad04;
            case 0x2BAD08u: goto label_2bad08;
            case 0x2BAD0Cu: goto label_2bad0c;
            case 0x2BAD10u: goto label_2bad10;
            case 0x2BAD14u: goto label_2bad14;
            case 0x2BAD18u: goto label_2bad18;
            case 0x2BAD1Cu: goto label_2bad1c;
            case 0x2BAD20u: goto label_2bad20;
            case 0x2BAD24u: goto label_2bad24;
            case 0x2BAD28u: goto label_2bad28;
            case 0x2BAD2Cu: goto label_2bad2c;
            case 0x2BAD30u: goto label_2bad30;
            case 0x2BAD34u: goto label_2bad34;
            case 0x2BAD38u: goto label_2bad38;
            case 0x2BAD3Cu: goto label_2bad3c;
            case 0x2BAD40u: goto label_2bad40;
            case 0x2BAD44u: goto label_2bad44;
            case 0x2BAD48u: goto label_2bad48;
            case 0x2BAD4Cu: goto label_2bad4c;
            case 0x2BAD50u: goto label_2bad50;
            case 0x2BAD54u: goto label_2bad54;
            case 0x2BAD58u: goto label_2bad58;
            case 0x2BAD5Cu: goto label_2bad5c;
            case 0x2BAD60u: goto label_2bad60;
            case 0x2BAD64u: goto label_2bad64;
            case 0x2BAD68u: goto label_2bad68;
            case 0x2BAD6Cu: goto label_2bad6c;
            case 0x2BAD70u: goto label_2bad70;
            case 0x2BAD74u: goto label_2bad74;
            case 0x2BAD78u: goto label_2bad78;
            case 0x2BAD7Cu: goto label_2bad7c;
            case 0x2BAD80u: goto label_2bad80;
            case 0x2BAD84u: goto label_2bad84;
            case 0x2BAD88u: goto label_2bad88;
            case 0x2BAD8Cu: goto label_2bad8c;
            case 0x2BAD90u: goto label_2bad90;
            case 0x2BAD94u: goto label_2bad94;
            case 0x2BAD98u: goto label_2bad98;
            case 0x2BAD9Cu: goto label_2bad9c;
            case 0x2BADA0u: goto label_2bada0;
            case 0x2BADA4u: goto label_2bada4;
            case 0x2BADA8u: goto label_2bada8;
            case 0x2BADACu: goto label_2badac;
            case 0x2BADB0u: goto label_2badb0;
            case 0x2BADB4u: goto label_2badb4;
            case 0x2BADB8u: goto label_2badb8;
            case 0x2BADBCu: goto label_2badbc;
            case 0x2BADC0u: goto label_2badc0;
            case 0x2BADC4u: goto label_2badc4;
            case 0x2BADC8u: goto label_2badc8;
            case 0x2BADCCu: goto label_2badcc;
            case 0x2BADD0u: goto label_2badd0;
            case 0x2BADD4u: goto label_2badd4;
            case 0x2BADD8u: goto label_2badd8;
            case 0x2BADDCu: goto label_2baddc;
            case 0x2BADE0u: goto label_2bade0;
            case 0x2BADE4u: goto label_2bade4;
            case 0x2BADE8u: goto label_2bade8;
            case 0x2BADECu: goto label_2badec;
            case 0x2BADF0u: goto label_2badf0;
            case 0x2BADF4u: goto label_2badf4;
            case 0x2BADF8u: goto label_2badf8;
            case 0x2BADFCu: goto label_2badfc;
            case 0x2BAE00u: goto label_2bae00;
            case 0x2BAE04u: goto label_2bae04;
            case 0x2BAE08u: goto label_2bae08;
            case 0x2BAE0Cu: goto label_2bae0c;
            case 0x2BAE10u: goto label_2bae10;
            case 0x2BAE14u: goto label_2bae14;
            case 0x2BAE18u: goto label_2bae18;
            case 0x2BAE1Cu: goto label_2bae1c;
            case 0x2BAE20u: goto label_2bae20;
            case 0x2BAE24u: goto label_2bae24;
            case 0x2BAE28u: goto label_2bae28;
            case 0x2BAE2Cu: goto label_2bae2c;
            case 0x2BAE30u: goto label_2bae30;
            case 0x2BAE34u: goto label_2bae34;
            case 0x2BAE38u: goto label_2bae38;
            case 0x2BAE3Cu: goto label_2bae3c;
            case 0x2BAE40u: goto label_2bae40;
            case 0x2BAE44u: goto label_2bae44;
            case 0x2BAE48u: goto label_2bae48;
            case 0x2BAE4Cu: goto label_2bae4c;
            case 0x2BAE50u: goto label_2bae50;
            case 0x2BAE54u: goto label_2bae54;
            case 0x2BAE58u: goto label_2bae58;
            case 0x2BAE5Cu: goto label_2bae5c;
            case 0x2BAE60u: goto label_2bae60;
            case 0x2BAE64u: goto label_2bae64;
            case 0x2BAE68u: goto label_2bae68;
            case 0x2BAE6Cu: goto label_2bae6c;
            case 0x2BAE70u: goto label_2bae70;
            case 0x2BAE74u: goto label_2bae74;
            case 0x2BAE78u: goto label_2bae78;
            case 0x2BAE7Cu: goto label_2bae7c;
            case 0x2BAE80u: goto label_2bae80;
            case 0x2BAE84u: goto label_2bae84;
            case 0x2BAE88u: goto label_2bae88;
            case 0x2BAE8Cu: goto label_2bae8c;
            case 0x2BAE90u: goto label_2bae90;
            case 0x2BAE94u: goto label_2bae94;
            case 0x2BAE98u: goto label_2bae98;
            case 0x2BAE9Cu: goto label_2bae9c;
            case 0x2BAEA0u: goto label_2baea0;
            case 0x2BAEA4u: goto label_2baea4;
            case 0x2BAEA8u: goto label_2baea8;
            case 0x2BAEACu: goto label_2baeac;
            case 0x2BAEB0u: goto label_2baeb0;
            case 0x2BAEB4u: goto label_2baeb4;
            case 0x2BAEB8u: goto label_2baeb8;
            case 0x2BAEBCu: goto label_2baebc;
            case 0x2BAEC0u: goto label_2baec0;
            case 0x2BAEC4u: goto label_2baec4;
            case 0x2BAEC8u: goto label_2baec8;
            case 0x2BAECCu: goto label_2baecc;
            case 0x2BAED0u: goto label_2baed0;
            case 0x2BAED4u: goto label_2baed4;
            case 0x2BAED8u: goto label_2baed8;
            case 0x2BAEDCu: goto label_2baedc;
            case 0x2BAEE0u: goto label_2baee0;
            case 0x2BAEE4u: goto label_2baee4;
            case 0x2BAEE8u: goto label_2baee8;
            case 0x2BAEECu: goto label_2baeec;
            case 0x2BAEF0u: goto label_2baef0;
            case 0x2BAEF4u: goto label_2baef4;
            case 0x2BAEF8u: goto label_2baef8;
            case 0x2BAEFCu: goto label_2baefc;
            case 0x2BAF00u: goto label_2baf00;
            case 0x2BAF04u: goto label_2baf04;
            case 0x2BAF08u: goto label_2baf08;
            case 0x2BAF0Cu: goto label_2baf0c;
            case 0x2BAF10u: goto label_2baf10;
            case 0x2BAF14u: goto label_2baf14;
            case 0x2BAF18u: goto label_2baf18;
            case 0x2BAF1Cu: goto label_2baf1c;
            case 0x2BAF20u: goto label_2baf20;
            case 0x2BAF24u: goto label_2baf24;
            case 0x2BAF28u: goto label_2baf28;
            case 0x2BAF2Cu: goto label_2baf2c;
            case 0x2BAF30u: goto label_2baf30;
            case 0x2BAF34u: goto label_2baf34;
            case 0x2BAF38u: goto label_2baf38;
            case 0x2BAF3Cu: goto label_2baf3c;
            case 0x2BAF40u: goto label_2baf40;
            case 0x2BAF44u: goto label_2baf44;
            case 0x2BAF48u: goto label_2baf48;
            case 0x2BAF4Cu: goto label_2baf4c;
            case 0x2BAF50u: goto label_2baf50;
            case 0x2BAF54u: goto label_2baf54;
            case 0x2BAF58u: goto label_2baf58;
            case 0x2BAF5Cu: goto label_2baf5c;
            case 0x2BAF60u: goto label_2baf60;
            case 0x2BAF64u: goto label_2baf64;
            case 0x2BAF68u: goto label_2baf68;
            case 0x2BAF6Cu: goto label_2baf6c;
            case 0x2BAF70u: goto label_2baf70;
            case 0x2BAF74u: goto label_2baf74;
            case 0x2BAF78u: goto label_2baf78;
            case 0x2BAF7Cu: goto label_2baf7c;
            case 0x2BAF80u: goto label_2baf80;
            case 0x2BAF84u: goto label_2baf84;
            case 0x2BAF88u: goto label_2baf88;
            case 0x2BAF8Cu: goto label_2baf8c;
            case 0x2BAF90u: goto label_2baf90;
            case 0x2BAF94u: goto label_2baf94;
            case 0x2BAF98u: goto label_2baf98;
            case 0x2BAF9Cu: goto label_2baf9c;
            case 0x2BAFA0u: goto label_2bafa0;
            case 0x2BAFA4u: goto label_2bafa4;
            case 0x2BAFA8u: goto label_2bafa8;
            case 0x2BAFACu: goto label_2bafac;
            case 0x2BAFB0u: goto label_2bafb0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2bafac:
    ctx->pc = 0x2BAFB4u;
}
