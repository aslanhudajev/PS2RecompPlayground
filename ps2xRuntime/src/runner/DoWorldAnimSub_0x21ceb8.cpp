#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoWorldAnimSub
// Address: 0x21ceb8 - 0x21d360
void DoWorldAnimSub_0x21ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ceb8u;

    // 0x21ceb8: 0x27bdff30
    ctx->pc = 0x21ceb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21cebc: 0xffbf00c0
    ctx->pc = 0x21cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x21cec0: 0xffb400b0
    ctx->pc = 0x21cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x21cec4: 0xffb300a0
    ctx->pc = 0x21cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x21cec8: 0xffb20090
    ctx->pc = 0x21cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x21cecc: 0xffb10080
    ctx->pc = 0x21ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x21ced0: 0xffb00070
    ctx->pc = 0x21ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x21ced4: 0x80802d
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ced8: 0xa0a02d
    ctx->pc = 0x21ced8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cedc: 0x3c040032
    ctx->pc = 0x21cedcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21cee0: 0x86020000
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cee4: 0x2403003c
    ctx->pc = 0x21cee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21cee8: 0x431018
    ctx->pc = 0x21cee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21ceec: 0x8c83f9fc
    ctx->pc = 0x21ceecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965756)));
    // 0x21cef0: 0x8e880000
    ctx->pc = 0x21cef0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21cef4: 0x11000026
    ctx->pc = 0x21CEF4u;
    {
        const bool branch_taken_0x21cef4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CEF8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x21cef4) {
            ctx->pc = 0x21CF90u;
            goto label_21cf90;
        }
    }
    ctx->pc = 0x21CEFCu;
    // 0x21cefc: 0x8e320028
    ctx->pc = 0x21cefcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21cf00: 0x12400023
    ctx->pc = 0x21CF00u;
    {
        const bool branch_taken_0x21cf00 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF04u;
        SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
        if (branch_taken_0x21cf00) {
            ctx->pc = 0x21CF90u;
            goto label_21cf90;
        }
    }
    ctx->pc = 0x21CF08u;
    // 0x21cf08: 0x8e220010
    ctx->pc = 0x21cf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21cf0c: 0x431024
    ctx->pc = 0x21cf0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cf10: 0x54430004
    ctx->pc = 0x21CF10u;
    {
        const bool branch_taken_0x21cf10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21cf10) {
            ctx->pc = 0x21CF14u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x21CF24u;
            goto label_21cf24;
        }
    }
    ctx->pc = 0x21CF18u;
    // 0x21cf18: 0x96020006
    ctx->pc = 0x21cf18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21cf1c: 0x10000012
    ctx->pc = 0x21CF1Cu;
    {
        const bool branch_taken_0x21cf1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF20u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
        if (branch_taken_0x21cf1c) {
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF24u;
label_21cf24:
    // 0x21cf24: 0x3c030010
    ctx->pc = 0x21cf24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x21cf28: 0x431024
    ctx->pc = 0x21cf28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cf2c: 0x50400005
    ctx->pc = 0x21CF2Cu;
    {
        const bool branch_taken_0x21cf2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21cf2c) {
            ctx->pc = 0x21CF30u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x21CF44u;
            goto label_21cf44;
        }
    }
    ctx->pc = 0x21CF34u;
    // 0x21cf34: 0x96020006
    ctx->pc = 0x21cf34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21cf38: 0x3042fcff
    ctx->pc = 0x21cf38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64767));
    // 0x21cf3c: 0x1000000a
    ctx->pc = 0x21CF3Cu;
    {
        const bool branch_taken_0x21cf3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF40u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x21cf3c) {
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF44u;
label_21cf44:
    // 0x21cf44: 0x3c030020
    ctx->pc = 0x21cf44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
    // 0x21cf48: 0x431024
    ctx->pc = 0x21cf48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cf4c: 0x10400004
    ctx->pc = 0x21CF4Cu;
    {
        const bool branch_taken_0x21cf4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF50u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        if (branch_taken_0x21cf4c) {
            ctx->pc = 0x21CF60u;
            goto label_21cf60;
        }
    }
    ctx->pc = 0x21CF54u;
    // 0x21cf54: 0x34420001
    ctx->pc = 0x21cf54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x21cf58: 0x10000003
    ctx->pc = 0x21CF58u;
    {
        const bool branch_taken_0x21cf58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64765));
        if (branch_taken_0x21cf58) {
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF60u;
label_21cf60:
    // 0x21cf60: 0x3042fffd
    ctx->pc = 0x21cf60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65533));
    // 0x21cf64: 0x34420101
    ctx->pc = 0x21cf64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
label_21cf68:
    // 0x21cf68: 0xa6020006
    ctx->pc = 0x21cf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21cf6c: 0x96020006
    ctx->pc = 0x21cf6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21cf70: 0x30420001
    ctx->pc = 0x21cf70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21cf74: 0x54400008
    ctx->pc = 0x21CF74u;
    {
        const bool branch_taken_0x21cf74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21cf74) {
            ctx->pc = 0x21CF78u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->pc = 0x21CF98u;
            goto label_21cf98;
        }
    }
    ctx->pc = 0x21CF7Cu;
    // 0x21cf7c: 0x8e220010
    ctx->pc = 0x21cf7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21cf80: 0x3c03f7ff
    ctx->pc = 0x21cf80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63487 << 16));
    // 0x21cf84: 0x3463ffff
    ctx->pc = 0x21cf84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21cf88: 0x431024
    ctx->pc = 0x21cf88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cf8c: 0xae220010
    ctx->pc = 0x21cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_21cf90:
    // 0x21cf90: 0x100000eb
    ctx->pc = 0x21CF90u;
    {
        const bool branch_taken_0x21cf90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CF94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21cf90) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21CF98u;
label_21cf98:
    // 0x21cf98: 0xc23021
    ctx->pc = 0x21cf98u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21cf9c: 0x95130000
    ctx->pc = 0x21cf9cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21cfa0: 0x32620fff
    ctx->pc = 0x21cfa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 4095));
    // 0x21cfa4: 0x14400009
    ctx->pc = 0x21CFA4u;
    {
        const bool branch_taken_0x21cfa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21CFA8u;
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
        if (branch_taken_0x21cfa4) {
            ctx->pc = 0x21CFCCu;
            goto label_21cfcc;
        }
    }
    ctx->pc = 0x21CFACu;
    // 0x21cfac: 0x3c04003a
    ctx->pc = 0x21cfacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21cfb0: 0x24842550
    ctx->pc = 0x21cfb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x21cfb4: 0xc0b5494
    ctx->pc = 0x21CFB4u;
    SET_GPR_U32(ctx, 31, 0x21CFBCu);
    ctx->pc = 0x21CFB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFBCu; }
    }
    if (ctx->pc != 0x21CFBCu) { return; }
    ctx->pc = 0x21CFBCu;
    // 0x21cfbc: 0xc083eca
    ctx->pc = 0x21CFBCu;
    SET_GPR_U32(ctx, 31, 0x21CFC4u);
    ctx->pc = 0x21CFC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ZeroAnimData_0x20fb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFC4u; }
    }
    if (ctx->pc != 0x21CFC4u) { return; }
    ctx->pc = 0x21CFC4u;
    // 0x21cfc4: 0x1000002e
    ctx->pc = 0x21CFC4u;
    {
        const bool branch_taken_0x21cfc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CFC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21cfc4) {
            ctx->pc = 0x21D080u;
            goto label_21d080;
        }
    }
    ctx->pc = 0x21CFCCu;
label_21cfcc:
    // 0x21cfcc: 0x280202d
    ctx->pc = 0x21cfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd0: 0x3a0282d
    ctx->pc = 0x21cfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd4: 0x260382d
    ctx->pc = 0x21cfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd8: 0xc60c0008
    ctx->pc = 0x21cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21cfdc: 0xc083e96
    ctx->pc = 0x21CFDCu;
    SET_GPR_U32(ctx, 31, 0x21CFE4u);
    ctx->pc = 0x21CFE0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x20FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcAnimData_0x20fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFE4u; }
    }
    if (ctx->pc != 0x21CFE4u) { return; }
    ctx->pc = 0x21CFE4u;
    // 0x21cfe4: 0x10400025
    ctx->pc = 0x21CFE4u;
    {
        const bool branch_taken_0x21cfe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CFE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 7));
        if (branch_taken_0x21cfe4) {
            ctx->pc = 0x21D07Cu;
            goto label_21d07c;
        }
    }
    ctx->pc = 0x21CFECu;
    // 0x21cfec: 0x10400009
    ctx->pc = 0x21CFECu;
    {
        const bool branch_taken_0x21cfec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CFF0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32768));
        if (branch_taken_0x21cfec) {
            ctx->pc = 0x21D014u;
            goto label_21d014;
        }
    }
    ctx->pc = 0x21CFF4u;
    // 0x21cff4: 0x10400005
    ctx->pc = 0x21CFF4u;
    {
        const bool branch_taken_0x21cff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CFF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21cff4) {
            ctx->pc = 0x21D00Cu;
            goto label_21d00c;
        }
    }
    ctx->pc = 0x21CFFCu;
    // 0x21cffc: 0xc0b5a4e
    ctx->pc = 0x21CFFCu;
    SET_GPR_U32(ctx, 31, 0x21D004u);
    ctx->pc = 0x21D000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D004u; }
    }
    if (ctx->pc != 0x21D004u) { return; }
    ctx->pc = 0x21D004u;
    // 0x21d004: 0x10000004
    ctx->pc = 0x21D004u;
    {
        const bool branch_taken_0x21d004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D008u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 112));
        if (branch_taken_0x21d004) {
            ctx->pc = 0x21D018u;
            goto label_21d018;
        }
    }
    ctx->pc = 0x21D00Cu;
label_21d00c:
    // 0x21d00c: 0xc0b5a9c
    ctx->pc = 0x21D00Cu;
    SET_GPR_U32(ctx, 31, 0x21D014u);
    ctx->pc = 0x21D010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateRYPMatrix_0x2d6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D014u; }
    }
    if (ctx->pc != 0x21D014u) { return; }
    ctx->pc = 0x21D014u;
label_21d014:
    // 0x21d014: 0x32620070
    ctx->pc = 0x21d014u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 112));
label_21d018:
    // 0x21d018: 0x1040000c
    ctx->pc = 0x21D018u;
    {
        const bool branch_taken_0x21d018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D01Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x21d018) {
            ctx->pc = 0x21D04Cu;
            goto label_21d04c;
        }
    }
    ctx->pc = 0x21D020u;
    // 0x21d020: 0xc620001c
    ctx->pc = 0x21d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d024: 0x46010000
    ctx->pc = 0x21d024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d028: 0xe6400030
    ctx->pc = 0x21d028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x21d02c: 0xc6200020
    ctx->pc = 0x21d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d030: 0xc7a10014
    ctx->pc = 0x21d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d034: 0x46010000
    ctx->pc = 0x21d034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d038: 0xe6400034
    ctx->pc = 0x21d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x21d03c: 0xc6200024
    ctx->pc = 0x21d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d040: 0xc7a10018
    ctx->pc = 0x21d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d044: 0x46010000
    ctx->pc = 0x21d044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d048: 0xe6400038
    ctx->pc = 0x21d048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_21d04c:
    // 0x21d04c: 0x32620700
    ctx->pc = 0x21d04cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1792));
    // 0x21d050: 0x1040000b
    ctx->pc = 0x21D050u;
    {
        const bool branch_taken_0x21d050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D054u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21d050) {
            ctx->pc = 0x21D080u;
            goto label_21d080;
        }
    }
    ctx->pc = 0x21D058u;
    // 0x21d058: 0x8e420060
    ctx->pc = 0x21d058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x21d05c: 0x34420008
    ctx->pc = 0x21d05cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x21d060: 0xae420060
    ctx->pc = 0x21d060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x21d064: 0xc7a00020
    ctx->pc = 0x21d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d068: 0xe6400040
    ctx->pc = 0x21d068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x21d06c: 0xc7a00024
    ctx->pc = 0x21d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d070: 0xe6400044
    ctx->pc = 0x21d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x21d074: 0xc7a00028
    ctx->pc = 0x21d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d078: 0xe6400048
    ctx->pc = 0x21d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_21d07c:
    // 0x21d07c: 0x3c020032
    ctx->pc = 0x21d07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21d080:
    // 0x21d080: 0x8c4207f8
    ctx->pc = 0x21d080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x21d084: 0x10400006
    ctx->pc = 0x21D084u;
    {
        const bool branch_taken_0x21d084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D088u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x21d084) {
            ctx->pc = 0x21D0A0u;
            goto label_21d0a0;
        }
    }
    ctx->pc = 0x21D08Cu;
    // 0x21d08c: 0x96020006
    ctx->pc = 0x21d08cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d090: 0x30420100
    ctx->pc = 0x21d090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x21d094: 0x144000aa
    ctx->pc = 0x21D094u;
    {
        const bool branch_taken_0x21d094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21D098u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d094) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21D09Cu;
    // 0x21d09c: 0x3c020031
    ctx->pc = 0x21d09cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_21d0a0:
    // 0x21d0a0: 0xc441ffa8
    ctx->pc = 0x21d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d0a4: 0x44800000
    ctx->pc = 0x21d0a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21d0a8: 0x46000836
    ctx->pc = 0x21d0a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d0ac: 0x0
    ctx->pc = 0x21d0acu;
    // NOP
    // 0x21d0b0: 0x450100a3
    ctx->pc = 0x21D0B0u;
    {
        const bool branch_taken_0x21d0b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D0B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d0b0) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21D0B8u;
    // 0x21d0b8: 0x8e220010
    ctx->pc = 0x21d0b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d0bc: 0x3c03ff3f
    ctx->pc = 0x21d0bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65343 << 16));
    // 0x21d0c0: 0x3463ffff
    ctx->pc = 0x21d0c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21d0c4: 0x431024
    ctx->pc = 0x21d0c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d0c8: 0x3c030800
    ctx->pc = 0x21d0c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x21d0cc: 0x431025
    ctx->pc = 0x21d0ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d0d0: 0xae220010
    ctx->pc = 0x21d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x21d0d4: 0x96030006
    ctx->pc = 0x21d0d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d0d8: 0x30620002
    ctx->pc = 0x21d0d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x21d0dc: 0x1040004a
    ctx->pc = 0x21D0DCu;
    {
        const bool branch_taken_0x21d0dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D0E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x21d0dc) {
            ctx->pc = 0x21D208u;
            goto label_21d208;
        }
    }
    ctx->pc = 0x21D0E4u;
    // 0x21d0e4: 0xc441ffa8
    ctx->pc = 0x21d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d0e8: 0x3c0141f0
    ctx->pc = 0x21d0e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x21d0ec: 0x44810000
    ctx->pc = 0x21d0ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d0f0: 0x46000842
    ctx->pc = 0x21d0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d0f4: 0xc6000008
    ctx->pc = 0x21d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d0f8: 0x46010001
    ctx->pc = 0x21d0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d0fc: 0x44800800
    ctx->pc = 0x21d0fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21d100: 0x46010034
    ctx->pc = 0x21d100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d104: 0x0
    ctx->pc = 0x21d104u;
    // NOP
    // 0x21d108: 0x45000027
    ctx->pc = 0x21D108u;
    {
        const bool branch_taken_0x21d108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D10Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21d108) {
            ctx->pc = 0x21D1A8u;
            goto label_21d1a8;
        }
    }
    ctx->pc = 0x21D110u;
    // 0x21d110: 0x30620200
    ctx->pc = 0x21d110u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x21d114: 0x10400004
    ctx->pc = 0x21D114u;
    {
        const bool branch_taken_0x21d114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D118u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x21d114) {
            ctx->pc = 0x21D128u;
            goto label_21d128;
        }
    }
    ctx->pc = 0x21D11Cu;
    // 0x21d11c: 0xe6010008
    ctx->pc = 0x21d11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d120: 0x1000001e
    ctx->pc = 0x21D120u;
    {
        const bool branch_taken_0x21d120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D124u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x21d120) {
            ctx->pc = 0x21D19Cu;
            goto label_21d19c;
        }
    }
    ctx->pc = 0x21D128u;
label_21d128:
    // 0x21d128: 0x96020006
    ctx->pc = 0x21d128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d12c: 0x30420100
    ctx->pc = 0x21d12cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x21d130: 0x50400015
    ctx->pc = 0x21D130u;
    {
        const bool branch_taken_0x21d130 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21d130) {
            ctx->pc = 0x21D134u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x21D188u;
            goto label_21d188;
        }
    }
    ctx->pc = 0x21D138u;
    // 0x21d138: 0x86020002
    ctx->pc = 0x21d138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21d13c: 0x2442ffff
    ctx->pc = 0x21d13cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21d140: 0x44820000
    ctx->pc = 0x21d140u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21d144: 0x46800020
    ctx->pc = 0x21d144u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21d148: 0xe6000008
    ctx->pc = 0x21d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d14c: 0x8e220010
    ctx->pc = 0x21d14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d150: 0x3c03100f
    ctx->pc = 0x21d150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4111 << 16));
    // 0x21d154: 0x431024
    ctx->pc = 0x21d154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d158: 0x3c030005
    ctx->pc = 0x21d158u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x21d15c: 0x54430010
    ctx->pc = 0x21D15Cu;
    {
        const bool branch_taken_0x21d15c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21d15c) {
            ctx->pc = 0x21D160u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x21D1A0u;
            goto label_21d1a0;
        }
    }
    ctx->pc = 0x21D164u;
    // 0x21d164: 0x8e240028
    ctx->pc = 0x21d164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21d168: 0x27a50030
    ctx->pc = 0x21d168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21d16c: 0xc0b4302
    ctx->pc = 0x21D16Cu;
    SET_GPR_U32(ctx, 31, 0x21D174u);
    ctx->pc = 0x21D170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D174u; }
    }
    if (ctx->pc != 0x21D174u) { return; }
    ctx->pc = 0x21D174u;
    // 0x21d174: 0x220202d
    ctx->pc = 0x21d174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d178: 0xc0991b8
    ctx->pc = 0x21D178u;
    SET_GPR_U32(ctx, 31, 0x21D180u);
    ctx->pc = 0x21D17Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2646E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjectExplode_0x2646e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D180u; }
    }
    if (ctx->pc != 0x21D180u) { return; }
    ctx->pc = 0x21D180u;
    // 0x21d180: 0x10000007
    ctx->pc = 0x21D180u;
    {
        const bool branch_taken_0x21d180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D184u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x21d180) {
            ctx->pc = 0x21D1A0u;
            goto label_21d1a0;
        }
    }
    ctx->pc = 0x21D188u;
label_21d188:
    // 0x21d188: 0x8e220010
    ctx->pc = 0x21d188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d18c: 0x3c03f7ff
    ctx->pc = 0x21d18cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)63487 << 16));
    // 0x21d190: 0x3463ffff
    ctx->pc = 0x21d190u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21d194: 0x431024
    ctx->pc = 0x21d194u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d198: 0xae220010
    ctx->pc = 0x21d198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_21d19c:
    // 0x21d19c: 0x8e220010
    ctx->pc = 0x21d19cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21d1a0:
    // 0x21d1a0: 0x10000051
    ctx->pc = 0x21D1A0u;
    {
        const bool branch_taken_0x21d1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D1A4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
        if (branch_taken_0x21d1a0) {
            ctx->pc = 0x21D2E8u;
            goto label_21d2e8;
        }
    }
    ctx->pc = 0x21D1A8u;
label_21d1a8:
    // 0x21d1a8: 0xc6000008
    ctx->pc = 0x21d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d1ac: 0x46000064
    ctx->pc = 0x21d1acu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21d1b0: 0x44020800
    ctx->pc = 0x21d1b0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21d1b4: 0x21400
    ctx->pc = 0x21d1b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x21d1b8: 0x21403
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21d1bc: 0x86030002
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21d1c0: 0x2463fffe
    ctx->pc = 0x21d1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x21d1c4: 0x43102a
    ctx->pc = 0x21d1c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x21d1c8: 0x1440005d
    ctx->pc = 0x21D1C8u;
    {
        const bool branch_taken_0x21d1c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21D1CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d1c8) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21D1D0u;
    // 0x21d1d0: 0x8e230010
    ctx->pc = 0x21d1d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d1d4: 0x3c021000
    ctx->pc = 0x21d1d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x21d1d8: 0x621024
    ctx->pc = 0x21d1d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d1dc: 0x10400057
    ctx->pc = 0x21D1DCu;
    {
        const bool branch_taken_0x21d1dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D1E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21d1dc) {
            ctx->pc = 0x21D33Cu;
            goto label_21d33c;
        }
    }
    ctx->pc = 0x21D1E4u;
    // 0x21d1e4: 0x3c02efff
    ctx->pc = 0x21d1e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
    // 0x21d1e8: 0x3442ffff
    ctx->pc = 0x21d1e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x21d1ec: 0x621024
    ctx->pc = 0x21d1ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d1f0: 0xae220010
    ctx->pc = 0x21d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x21d1f4: 0x8e240028
    ctx->pc = 0x21d1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21d1f8: 0xc0b41e4
    ctx->pc = 0x21D1F8u;
    SET_GPR_U32(ctx, 31, 0x21D200u);
    ctx->pc = 0x21D1FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D200u; }
    }
    if (ctx->pc != 0x21D200u) { return; }
    ctx->pc = 0x21D200u;
    // 0x21d200: 0x1000004f
    ctx->pc = 0x21D200u;
    {
        const bool branch_taken_0x21d200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d200) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21D208u;
label_21d208:
    // 0x21d208: 0xc440ffa8
    ctx->pc = 0x21d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d20c: 0x3c0141f0
    ctx->pc = 0x21d20cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x21d210: 0x44810800
    ctx->pc = 0x21d210u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x21d214: 0x46010002
    ctx->pc = 0x21d214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21d218: 0xc6010008
    ctx->pc = 0x21d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d21c: 0x46010000
    ctx->pc = 0x21d21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d220: 0xe6000008
    ctx->pc = 0x21d220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d224: 0x46000064
    ctx->pc = 0x21d224u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21d228: 0x44020800
    ctx->pc = 0x21d228u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21d22c: 0x21400
    ctx->pc = 0x21d22cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x21d230: 0x21403
    ctx->pc = 0x21d230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21d234: 0x86030002
    ctx->pc = 0x21d234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21d238: 0x2463ffff
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21d23c: 0x43102a
    ctx->pc = 0x21d23cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x21d240: 0x5440002c
    ctx->pc = 0x21D240u;
    {
        const bool branch_taken_0x21d240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d240) {
            ctx->pc = 0x21D244u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21D2F4u;
            goto label_21d2f4;
        }
    }
    ctx->pc = 0x21D248u;
    // 0x21d248: 0x96040006
    ctx->pc = 0x21d248u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d24c: 0x30820200
    ctx->pc = 0x21d24cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 512));
    // 0x21d250: 0x10400006
    ctx->pc = 0x21D250u;
    {
        const bool branch_taken_0x21d250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D254u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x21d250) {
            ctx->pc = 0x21D26Cu;
            goto label_21d26c;
        }
    }
    ctx->pc = 0x21D258u;
    // 0x21d258: 0x44830000
    ctx->pc = 0x21d258u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21d25c: 0x46800020
    ctx->pc = 0x21d25cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21d260: 0xe6000008
    ctx->pc = 0x21d260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d264: 0x1000001e
    ctx->pc = 0x21D264u;
    {
        const bool branch_taken_0x21d264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D268u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x21d264) {
            ctx->pc = 0x21D2E0u;
            goto label_21d2e0;
        }
    }
    ctx->pc = 0x21D26Cu;
label_21d26c:
    // 0x21d26c: 0x96020006
    ctx->pc = 0x21d26cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d270: 0x30420100
    ctx->pc = 0x21d270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x21d274: 0x10400010
    ctx->pc = 0x21D274u;
    {
        const bool branch_taken_0x21d274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D278u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4111 << 16));
        if (branch_taken_0x21d274) {
            ctx->pc = 0x21D2B8u;
            goto label_21d2b8;
        }
    }
    ctx->pc = 0x21D27Cu;
    // 0x21d27c: 0xae000008
    ctx->pc = 0x21d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21d280: 0x8e220010
    ctx->pc = 0x21d280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d284: 0x431024
    ctx->pc = 0x21d284u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d288: 0x3c030005
    ctx->pc = 0x21d288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x21d28c: 0x54430015
    ctx->pc = 0x21D28Cu;
    {
        const bool branch_taken_0x21d28c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21d28c) {
            ctx->pc = 0x21D290u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x21D2E4u;
            goto label_21d2e4;
        }
    }
    ctx->pc = 0x21D294u;
    // 0x21d294: 0x8e240028
    ctx->pc = 0x21d294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21d298: 0x27a50030
    ctx->pc = 0x21d298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21d29c: 0xc0b4302
    ctx->pc = 0x21D29Cu;
    SET_GPR_U32(ctx, 31, 0x21D2A4u);
    ctx->pc = 0x21D2A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2A4u; }
    }
    if (ctx->pc != 0x21D2A4u) { return; }
    ctx->pc = 0x21D2A4u;
    // 0x21d2a4: 0x220202d
    ctx->pc = 0x21d2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2a8: 0xc0991b8
    ctx->pc = 0x21D2A8u;
    SET_GPR_U32(ctx, 31, 0x21D2B0u);
    ctx->pc = 0x21D2ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2646E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjectExplode_0x2646e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2B0u; }
    }
    if (ctx->pc != 0x21D2B0u) { return; }
    ctx->pc = 0x21D2B0u;
    // 0x21d2b0: 0x1000000c
    ctx->pc = 0x21D2B0u;
    {
        const bool branch_taken_0x21d2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D2B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x21d2b0) {
            ctx->pc = 0x21D2E4u;
            goto label_21d2e4;
        }
    }
    ctx->pc = 0x21D2B8u;
label_21d2b8:
    // 0x21d2b8: 0x86020002
    ctx->pc = 0x21d2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21d2bc: 0x2442ffff
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21d2c0: 0x44820000
    ctx->pc = 0x21d2c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21d2c4: 0x46800020
    ctx->pc = 0x21d2c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21d2c8: 0xe6000008
    ctx->pc = 0x21d2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d2cc: 0x8e220010
    ctx->pc = 0x21d2ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d2d0: 0x3c03f7ff
    ctx->pc = 0x21d2d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63487 << 16));
    // 0x21d2d4: 0x3463ffff
    ctx->pc = 0x21d2d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21d2d8: 0x431024
    ctx->pc = 0x21d2d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d2dc: 0xae220010
    ctx->pc = 0x21d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_21d2e0:
    // 0x21d2e0: 0x8e220010
    ctx->pc = 0x21d2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21d2e4:
    // 0x21d2e4: 0x3c030080
    ctx->pc = 0x21d2e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
label_21d2e8:
    // 0x21d2e8: 0x431025
    ctx->pc = 0x21d2e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d2ec: 0x10000013
    ctx->pc = 0x21D2ECu;
    {
        const bool branch_taken_0x21d2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D2F0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x21d2ec) {
            ctx->pc = 0x21D33Cu;
            goto label_21d33c;
        }
    }
    ctx->pc = 0x21D2F4u;
label_21d2f4:
    // 0x21d2f4: 0x46000064
    ctx->pc = 0x21d2f4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21d2f8: 0x44020800
    ctx->pc = 0x21d2f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21d2fc: 0x21400
    ctx->pc = 0x21d2fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x21d300: 0x21403
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21d304: 0x28420002
    ctx->pc = 0x21d304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x21d308: 0x1040000c
    ctx->pc = 0x21D308u;
    {
        const bool branch_taken_0x21d308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D30Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x21d308) {
            ctx->pc = 0x21D33Cu;
            goto label_21d33c;
        }
    }
    ctx->pc = 0x21D310u;
    // 0x21d310: 0x8e230010
    ctx->pc = 0x21d310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d314: 0x621024
    ctx->pc = 0x21d314u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d318: 0x10400008
    ctx->pc = 0x21D318u;
    {
        const bool branch_taken_0x21d318 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D31Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21d318) {
            ctx->pc = 0x21D33Cu;
            goto label_21d33c;
        }
    }
    ctx->pc = 0x21D320u;
    // 0x21d320: 0x3c02efff
    ctx->pc = 0x21d320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
    // 0x21d324: 0x3442ffff
    ctx->pc = 0x21d324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x21d328: 0x621024
    ctx->pc = 0x21d328u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d32c: 0xae220010
    ctx->pc = 0x21d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x21d330: 0x8e240028
    ctx->pc = 0x21d330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21d334: 0xc0b41e4
    ctx->pc = 0x21D334u;
    SET_GPR_U32(ctx, 31, 0x21D33Cu);
    ctx->pc = 0x21D338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D33Cu; }
    }
    if (ctx->pc != 0x21D33Cu) { return; }
    ctx->pc = 0x21D33Cu;
label_21d33c:
    // 0x21d33c: 0x260102d
    ctx->pc = 0x21d33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21d340:
    // 0x21d340: 0xdfbf00c0
    ctx->pc = 0x21d340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d344: 0xdfb400b0
    ctx->pc = 0x21d344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21d348: 0xdfb300a0
    ctx->pc = 0x21d348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21d34c: 0xdfb20090
    ctx->pc = 0x21d34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21d350: 0xdfb10080
    ctx->pc = 0x21d350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21d354: 0xdfb00070
    ctx->pc = 0x21d354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d358: 0x3e00008
    ctx->pc = 0x21D358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D35Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CF24u: goto label_21cf24;
            case 0x21CF44u: goto label_21cf44;
            case 0x21CF60u: goto label_21cf60;
            case 0x21CF68u: goto label_21cf68;
            case 0x21CF90u: goto label_21cf90;
            case 0x21CF98u: goto label_21cf98;
            case 0x21CFCCu: goto label_21cfcc;
            case 0x21D00Cu: goto label_21d00c;
            case 0x21D014u: goto label_21d014;
            case 0x21D018u: goto label_21d018;
            case 0x21D04Cu: goto label_21d04c;
            case 0x21D07Cu: goto label_21d07c;
            case 0x21D080u: goto label_21d080;
            case 0x21D0A0u: goto label_21d0a0;
            case 0x21D128u: goto label_21d128;
            case 0x21D188u: goto label_21d188;
            case 0x21D19Cu: goto label_21d19c;
            case 0x21D1A0u: goto label_21d1a0;
            case 0x21D1A8u: goto label_21d1a8;
            case 0x21D208u: goto label_21d208;
            case 0x21D26Cu: goto label_21d26c;
            case 0x21D2B8u: goto label_21d2b8;
            case 0x21D2E0u: goto label_21d2e0;
            case 0x21D2E4u: goto label_21d2e4;
            case 0x21D2E8u: goto label_21d2e8;
            case 0x21D2F4u: goto label_21d2f4;
            case 0x21D33Cu: goto label_21d33c;
            case 0x21D340u: goto label_21d340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D360u;
}
