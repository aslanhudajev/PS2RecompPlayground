#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpmul
// Address: 0x2f9a80 - 0x2f9c74
void fpmul_0x2f9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9a80u;

    // 0x2f9a80: 0x27bdffa0
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f9a84: 0xffb00040
    ctx->pc = 0x2f9a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2f9a88: 0x27a40030
    ctx->pc = 0x2f9a88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f9a8c: 0xffbf0050
    ctx->pc = 0x2f9a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f9a90: 0x3a0282d
    ctx->pc = 0x2f9a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a94: 0xe7ac0030
    ctx->pc = 0x2f9a94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f9a98: 0xc0be5be
    ctx->pc = 0x2F9A98u;
    SET_GPR_U32(ctx, 31, 0x2F9AA0u);
    ctx->pc = 0x2F9A9Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AA0u; }
    }
    if (ctx->pc != 0x2F9AA0u) { return; }
    ctx->pc = 0x2F9AA0u;
    // 0x2f9aa0: 0x27b00010
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f9aa4: 0x27a40034
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x2f9aa8: 0xc0be5be
    ctx->pc = 0x2F9AA8u;
    SET_GPR_U32(ctx, 31, 0x2F9AB0u);
    ctx->pc = 0x2F9AACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AB0u; }
    }
    if (ctx->pc != 0x2F9AB0u) { return; }
    ctx->pc = 0x2F9AB0u;
    // 0x2f9ab0: 0x8fa40000
    ctx->pc = 0x2f9ab0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9ab4: 0x2c820002
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x2f9ab8: 0x14400016
    ctx->pc = 0x2F9AB8u;
    {
        const bool branch_taken_0x2f9ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9ABCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2f9ab8) {
            ctx->pc = 0x2F9B14u;
            goto label_2f9b14;
        }
    }
    ctx->pc = 0x2F9AC0u;
    // 0x2f9ac0: 0x8fa30010
    ctx->pc = 0x2f9ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9ac4: 0x2c620002
    ctx->pc = 0x2f9ac4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2f9ac8: 0x5440001c
    ctx->pc = 0x2F9AC8u;
    {
        const bool branch_taken_0x2f9ac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f9ac8) {
            ctx->pc = 0x2F9ACCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->pc = 0x2F9B3Cu;
            goto label_2f9b3c;
        }
    }
    ctx->pc = 0x2F9AD0u;
    // 0x2f9ad0: 0x38820004
    ctx->pc = 0x2f9ad0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x2f9ad4: 0x14400006
    ctx->pc = 0x2F9AD4u;
    {
        const bool branch_taken_0x2f9ad4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9AD8u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2f9ad4) {
            ctx->pc = 0x2F9AF0u;
            goto label_2f9af0;
        }
    }
    ctx->pc = 0x2F9ADCu;
    // 0x2f9adc: 0x38620002
    ctx->pc = 0x2f9adcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2f9ae0: 0x10400007
    ctx->pc = 0x2F9AE0u;
    {
        const bool branch_taken_0x2f9ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9AE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2f9ae0) {
            ctx->pc = 0x2F9B00u;
            goto label_2f9b00;
        }
    }
    ctx->pc = 0x2F9AE8u;
    // 0x2f9ae8: 0x1000000c
    ctx->pc = 0x2F9AE8u;
    {
        const bool branch_taken_0x2f9ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9AECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ae8) {
            ctx->pc = 0x2F9B1Cu;
            goto label_2f9b1c;
        }
    }
    ctx->pc = 0x2F9AF0u;
label_2f9af0:
    // 0x2f9af0: 0x14400006
    ctx->pc = 0x2F9AF0u;
    {
        const bool branch_taken_0x2f9af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9AF4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2f9af0) {
            ctx->pc = 0x2F9B0Cu;
            goto label_2f9b0c;
        }
    }
    ctx->pc = 0x2F9AF8u;
    // 0x2f9af8: 0x14400010
    ctx->pc = 0x2F9AF8u;
    {
        const bool branch_taken_0x2f9af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9AFCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x2f9af8) {
            ctx->pc = 0x2F9B3Cu;
            goto label_2f9b3c;
        }
    }
    ctx->pc = 0x2F9B00u;
label_2f9b00:
    // 0x2f9b00: 0x3c02003e
    ctx->pc = 0x2f9b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f9b04: 0x10000055
    ctx->pc = 0x2F9B04u;
    {
        const bool branch_taken_0x2f9b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9B08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15888));
        if (branch_taken_0x2f9b04) {
            ctx->pc = 0x2F9C5Cu;
            goto label_2f9c5c;
        }
    }
    ctx->pc = 0x2F9B0Cu;
label_2f9b0c:
    // 0x2f9b0c: 0x14400008
    ctx->pc = 0x2F9B0Cu;
    {
        const bool branch_taken_0x2f9b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9B10u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f9b0c) {
            ctx->pc = 0x2F9B30u;
            goto label_2f9b30;
        }
    }
    ctx->pc = 0x2F9B14u;
label_2f9b14:
    // 0x2f9b14: 0x8fa20004
    ctx->pc = 0x2f9b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9b18: 0x3a0202d
    ctx->pc = 0x2f9b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b1c:
    // 0x2f9b1c: 0x8fa30014
    ctx->pc = 0x2f9b1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f9b20: 0x431026
    ctx->pc = 0x2f9b20u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9b24: 0x2102b
    ctx->pc = 0x2f9b24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9b28: 0x1000004c
    ctx->pc = 0x2F9B28u;
    {
        const bool branch_taken_0x2f9b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9b28) {
            ctx->pc = 0x2F9C5Cu;
            goto label_2f9c5c;
        }
    }
    ctx->pc = 0x2F9B30u;
label_2f9b30:
    // 0x2f9b30: 0x14400008
    ctx->pc = 0x2F9B30u;
    {
        const bool branch_taken_0x2f9b30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9B34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x2f9b30) {
            ctx->pc = 0x2F9B54u;
            goto label_2f9b54;
        }
    }
    ctx->pc = 0x2F9B38u;
    // 0x2f9b38: 0x8fa30014
    ctx->pc = 0x2f9b38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f9b3c:
    // 0x2f9b3c: 0x200202d
    ctx->pc = 0x2f9b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b40: 0x8fa20004
    ctx->pc = 0x2f9b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9b44: 0x431026
    ctx->pc = 0x2f9b44u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9b48: 0x2102b
    ctx->pc = 0x2f9b48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9b4c: 0x10000043
    ctx->pc = 0x2F9B4Cu;
    {
        const bool branch_taken_0x2f9b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9B50u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9b4c) {
            ctx->pc = 0x2F9C5Cu;
            goto label_2f9c5c;
        }
    }
    ctx->pc = 0x2F9B54u;
label_2f9b54:
    // 0x2f9b54: 0x8fa2001c
    ctx->pc = 0x2f9b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2f9b58: 0x8fa30008
    ctx->pc = 0x2f9b58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9b5c: 0x820019
    ctx->pc = 0x2f9b5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f9b60: 0x8fa60014
    ctx->pc = 0x2f9b60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f9b64: 0x8fa20004
    ctx->pc = 0x2f9b64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9b68: 0x461026
    ctx->pc = 0x2f9b68u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f9b6c: 0x2812
    ctx->pc = 0x2f9b6cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x2f9b70: 0x2010
    ctx->pc = 0x2f9b70u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x2f9b74: 0x5283c
    ctx->pc = 0x2f9b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f9b78: 0x4203c
    ctx->pc = 0x2f9b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9b7c: 0x5283e
    ctx->pc = 0x2f9b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9b80: 0x2102b
    ctx->pc = 0x2f9b80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9b84: 0x852025
    ctx->pc = 0x2f9b84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f9b88: 0xafa20024
    ctx->pc = 0x2f9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2f9b8c: 0x8fa50018
    ctx->pc = 0x2f9b8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f9b90: 0x651821
    ctx->pc = 0x2f9b90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f9b94: 0x24630002
    ctx->pc = 0x2f9b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f9b98: 0x4283c
    ctx->pc = 0x2f9b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9b9c: 0x5283f
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f9ba0: 0x4203f
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f9ba4: 0x481000c
    ctx->pc = 0x2F9BA4u;
    {
        const bool branch_taken_0x2f9ba4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F9BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x2f9ba4) {
            ctx->pc = 0x2F9BD8u;
            goto label_2f9bd8;
        }
    }
    ctx->pc = 0x2F9BACu;
    // 0x2f9bac: 0x3c068000
    ctx->pc = 0x2f9bacu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x2f9bb0: 0x30820001
    ctx->pc = 0x2f9bb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x2f9bb4: 0x0
    ctx->pc = 0x2f9bb4u;
    // NOP
label_2f9bb8:
    // 0x2f9bb8: 0x10400003
    ctx->pc = 0x2F9BB8u;
    {
        const bool branch_taken_0x2f9bb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9BBCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2f9bb8) {
            ctx->pc = 0x2F9BC8u;
            goto label_2f9bc8;
        }
    }
    ctx->pc = 0x2F9BC0u;
    // 0x2f9bc0: 0x52842
    ctx->pc = 0x2f9bc0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2f9bc4: 0xa62825
    ctx->pc = 0x2f9bc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f9bc8:
    // 0x2f9bc8: 0x42042
    ctx->pc = 0x2f9bc8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x2f9bcc: 0x480fffa
    ctx->pc = 0x2F9BCCu;
    {
        const bool branch_taken_0x2f9bcc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F9BD0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2f9bcc) {
            ctx->pc = 0x2F9BB8u;
            goto label_2f9bb8;
        }
    }
    ctx->pc = 0x2F9BD4u;
    // 0x2f9bd4: 0xafa30028
    ctx->pc = 0x2f9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_2f9bd8:
    // 0x2f9bd8: 0x3c023fff
    ctx->pc = 0x2f9bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2f9bdc: 0x3442ffff
    ctx->pc = 0x2f9bdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f9be0: 0x44102b
    ctx->pc = 0x2f9be0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9be4: 0x14400010
    ctx->pc = 0x2F9BE4u;
    {
        const bool branch_taken_0x2f9be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9BE8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 127));
        if (branch_taken_0x2f9be4) {
            ctx->pc = 0x2F9C28u;
            goto label_2f9c28;
        }
    }
    ctx->pc = 0x2F9BECu;
    // 0x2f9bec: 0x3c073fff
    ctx->pc = 0x2f9becu;
    SET_GPR_U32(ctx, 7, ((uint32_t)16383 << 16));
    // 0x2f9bf0: 0x8fa60028
    ctx->pc = 0x2f9bf0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9bf4: 0x3c088000
    ctx->pc = 0x2f9bf4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
    // 0x2f9bf8: 0x34e7ffff
    ctx->pc = 0x2f9bf8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2f9bfc: 0x0
    ctx->pc = 0x2f9bfcu;
    // NOP
label_2f9c00:
    // 0x2f9c00: 0x42040
    ctx->pc = 0x2f9c00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2f9c04: 0xa81824
    ctx->pc = 0x2f9c04u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2f9c08: 0x34820001
    ctx->pc = 0x2f9c08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 1));
    // 0x2f9c0c: 0x24c6ffff
    ctx->pc = 0x2f9c0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f9c10: 0x43200b
    ctx->pc = 0x2f9c10u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x2f9c14: 0xe4102b
    ctx->pc = 0x2f9c14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2f9c18: 0x1040fff9
    ctx->pc = 0x2F9C18u;
    {
        const bool branch_taken_0x2f9c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9C1Cu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2f9c18) {
            ctx->pc = 0x2F9C00u;
            goto label_2f9c00;
        }
    }
    ctx->pc = 0x2F9C20u;
    // 0x2f9c20: 0xafa60028
    ctx->pc = 0x2f9c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2f9c24: 0x3083007f
    ctx->pc = 0x2f9c24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 127));
label_2f9c28:
    // 0x2f9c28: 0x24020040
    ctx->pc = 0x2f9c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f9c2c: 0x54620008
    ctx->pc = 0x2F9C2Cu;
    {
        const bool branch_taken_0x2f9c2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f9c2c) {
            ctx->pc = 0x2F9C30u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->pc = 0x2F9C50u;
            goto label_2f9c50;
        }
    }
    ctx->pc = 0x2F9C34u;
    // 0x2f9c34: 0x30820080
    ctx->pc = 0x2f9c34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 128));
    // 0x2f9c38: 0x10400003
    ctx->pc = 0x2F9C38u;
    {
        const bool branch_taken_0x2f9c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9C3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x2f9c38) {
            ctx->pc = 0x2F9C48u;
            goto label_2f9c48;
        }
    }
    ctx->pc = 0x2F9C40u;
    // 0x2f9c40: 0x10000002
    ctx->pc = 0x2F9C40u;
    {
        const bool branch_taken_0x2f9c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9C44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x2f9c40) {
            ctx->pc = 0x2F9C4Cu;
            goto label_2f9c4c;
        }
    }
    ctx->pc = 0x2F9C48u;
label_2f9c48:
    // 0x2f9c48: 0x45200b
    ctx->pc = 0x2f9c48u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_2f9c4c:
    // 0x2f9c4c: 0xafa4002c
    ctx->pc = 0x2f9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_2f9c50:
    // 0x2f9c50: 0x24020003
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9c54: 0xad220000
    ctx->pc = 0x2f9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2f9c58: 0x120202d
    ctx->pc = 0x2f9c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c5c:
    // 0x2f9c5c: 0xc0be57a
    ctx->pc = 0x2F9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9C64u);
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x2f95e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C64u; }
    }
    if (ctx->pc != 0x2F9C64u) { return; }
    ctx->pc = 0x2F9C64u;
    // 0x2f9c64: 0xdfbf0050
    ctx->pc = 0x2f9c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9c68: 0xdfb00040
    ctx->pc = 0x2f9c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9c6c: 0x3e00008
    ctx->pc = 0x2F9C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9AF0u: goto label_2f9af0;
            case 0x2F9B00u: goto label_2f9b00;
            case 0x2F9B0Cu: goto label_2f9b0c;
            case 0x2F9B14u: goto label_2f9b14;
            case 0x2F9B1Cu: goto label_2f9b1c;
            case 0x2F9B30u: goto label_2f9b30;
            case 0x2F9B3Cu: goto label_2f9b3c;
            case 0x2F9B54u: goto label_2f9b54;
            case 0x2F9BB8u: goto label_2f9bb8;
            case 0x2F9BC8u: goto label_2f9bc8;
            case 0x2F9BD8u: goto label_2f9bd8;
            case 0x2F9C00u: goto label_2f9c00;
            case 0x2F9C28u: goto label_2f9c28;
            case 0x2F9C48u: goto label_2f9c48;
            case 0x2F9C4Cu: goto label_2f9c4c;
            case 0x2F9C50u: goto label_2f9c50;
            case 0x2F9C5Cu: goto label_2f9c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9C74u;
}
