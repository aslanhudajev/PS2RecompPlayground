#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAddShadow
// Address: 0x293560 - 0x293614
void CritterAddShadow_0x293560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293560u;

    // 0x293560: 0x27bdffe0
    ctx->pc = 0x293560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293564: 0xffbf0010
    ctx->pc = 0x293564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293568: 0xffb00000
    ctx->pc = 0x293568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29356c: 0x80802d
    ctx->pc = 0x29356cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293570: 0x8e020004
    ctx->pc = 0x293570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x293574: 0x8c420120
    ctx->pc = 0x293574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x293578: 0x84460022
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x29357c: 0x24030001
    ctx->pc = 0x29357cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x293580: 0x24020002
    ctx->pc = 0x293580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x293584: 0x45102a
    ctx->pc = 0x293584u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x293588: 0xa2180a
    ctx->pc = 0x293588u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x29358c: 0x3c020035
    ctx->pc = 0x29358cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x293590: 0x24421d80
    ctx->pc = 0x293590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7552));
    // 0x293594: 0x31880
    ctx->pc = 0x293594u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x293598: 0x621821
    ctx->pc = 0x293598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29359c: 0x8c640000
    ctx->pc = 0x29359cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2935a0: 0xc0282d
    ctx->pc = 0x2935a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935a4: 0xc0b19fe
    ctx->pc = 0x2935A4u;
    SET_GPR_U32(ctx, 31, 0x2935ACu);
    ctx->pc = 0x2935A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935ACu; }
    }
    if (ctx->pc != 0x2935ACu) { return; }
    ctx->pc = 0x2935ACu;
    // 0x2935ac: 0x40202d
    ctx->pc = 0x2935acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935b0: 0x3c05003a
    ctx->pc = 0x2935b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2935b4: 0x24a52550
    ctx->pc = 0x2935b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x2935b8: 0x302d
    ctx->pc = 0x2935b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935bc: 0xc0b2236
    ctx->pc = 0x2935BCu;
    SET_GPR_U32(ctx, 31, 0x2935C4u);
    ctx->pc = 0x2935C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935C4u; }
    }
    if (ctx->pc != 0x2935C4u) { return; }
    ctx->pc = 0x2935C4u;
    // 0x2935c4: 0xae0200d0
    ctx->pc = 0x2935c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x2935c8: 0xc6000040
    ctx->pc = 0x2935c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935cc: 0xe4400030
    ctx->pc = 0x2935ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2935d0: 0x8e0200d0
    ctx->pc = 0x2935d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2935d4: 0xc6000044
    ctx->pc = 0x2935d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935d8: 0xe4400034
    ctx->pc = 0x2935d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2935dc: 0x8e0200d0
    ctx->pc = 0x2935dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2935e0: 0xc6000048
    ctx->pc = 0x2935e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935e4: 0xe4400038
    ctx->pc = 0x2935e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2935e8: 0x8e0200d0
    ctx->pc = 0x2935e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2935ec: 0x3c014040
    ctx->pc = 0x2935ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2935f0: 0x44810000
    ctx->pc = 0x2935f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2935f4: 0xe4400054
    ctx->pc = 0x2935f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2935f8: 0x8e0300d0
    ctx->pc = 0x2935f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2935fc: 0x2402ffe0
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x293600: 0xa4620068
    ctx->pc = 0x293600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x293604: 0xdfbf0010
    ctx->pc = 0x293604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293608: 0xdfb00000
    ctx->pc = 0x293608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29360c: 0x3e00008
    ctx->pc = 0x29360Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293614u;
}
