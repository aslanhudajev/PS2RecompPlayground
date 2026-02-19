#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeInit
// Address: 0x2cfa78 - 0x2cfb00
void MBNodeInit_0x2cfa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfa78u;

    // 0x2cfa78: 0x27bdffe0
    ctx->pc = 0x2cfa78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfa7c: 0xffbf0010
    ctx->pc = 0x2cfa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cfa80: 0xffb00000
    ctx->pc = 0x2cfa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfa84: 0x80802d
    ctx->pc = 0x2cfa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa88: 0xa2050052
    ctx->pc = 0x2cfa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cfa8c: 0x3c04003a
    ctx->pc = 0x2cfa8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2cfa90: 0x24842550
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x2cfa94: 0xc0b5494
    ctx->pc = 0x2CFA94u;
    SET_GPR_U32(ctx, 31, 0x2CFA9Cu);
    ctx->pc = 0x2CFA98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA9Cu; }
    }
    if (ctx->pc != 0x2CFA9Cu) { return; }
    ctx->pc = 0x2CFA9Cu;
    // 0x2cfa9c: 0x3c02003a
    ctx->pc = 0x2cfa9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cfaa0: 0x244324d0
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9424));
    // 0x2cfaa4: 0xc44024d0
    ctx->pc = 0x2cfaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfaa8: 0xe6000040
    ctx->pc = 0x2cfaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2cfaac: 0xc4600004
    ctx->pc = 0x2cfaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfab0: 0xe6000044
    ctx->pc = 0x2cfab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2cfab4: 0xc4600008
    ctx->pc = 0x2cfab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfab8: 0xe6000048
    ctx->pc = 0x2cfab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2cfabc: 0xae000060
    ctx->pc = 0x2cfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2cfac0: 0xae000064
    ctx->pc = 0x2cfac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2cfac4: 0xa2000053
    ctx->pc = 0x2cfac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfac8: 0xa6000068
    ctx->pc = 0x2cfac8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfacc: 0xae00006c
    ctx->pc = 0x2cfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2cfad0: 0xae000074
    ctx->pc = 0x2cfad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2cfad4: 0xae000078
    ctx->pc = 0x2cfad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2cfad8: 0xae00007c
    ctx->pc = 0x2cfad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2cfadc: 0xae000054
    ctx->pc = 0x2cfadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2cfae0: 0xa600006a
    ctx->pc = 0x2cfae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfae4: 0x2402ffff
    ctx->pc = 0x2cfae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfae8: 0xa602005c
    ctx->pc = 0x2cfae8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfaec: 0xae000058
    ctx->pc = 0x2cfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2cfaf0: 0xdfbf0010
    ctx->pc = 0x2cfaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfaf4: 0xdfb00000
    ctx->pc = 0x2cfaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfaf8: 0x3e00008
    ctx->pc = 0x2CFAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFAFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFB00u;
}
