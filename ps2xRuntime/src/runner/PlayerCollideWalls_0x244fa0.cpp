#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollideWalls
// Address: 0x244fa0 - 0x245214
void PlayerCollideWalls_0x244fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x244fa0u;

    // 0x244fa0: 0x27bdff80
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x244fa4: 0xffbf0060
    ctx->pc = 0x244fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x244fa8: 0xffb30050
    ctx->pc = 0x244fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x244fac: 0xffb20040
    ctx->pc = 0x244facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x244fb0: 0xffb10030
    ctx->pc = 0x244fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x244fb4: 0xffb00020
    ctx->pc = 0x244fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x244fb8: 0xe7b40070
    ctx->pc = 0x244fb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x244fbc: 0x80902d
    ctx->pc = 0x244fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fc0: 0xa0882d
    ctx->pc = 0x244fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fc4: 0xc0802d
    ctx->pc = 0x244fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fc8: 0x46006506
    ctx->pc = 0x244fc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x244fcc: 0x982d
    ctx->pc = 0x244fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fd0: 0xc6200000
    ctx->pc = 0x244fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244fd4: 0xc6010000
    ctx->pc = 0x244fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244fd8: 0x46010000
    ctx->pc = 0x244fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244fdc: 0xe7a00000
    ctx->pc = 0x244fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x244fe0: 0xc6200004
    ctx->pc = 0x244fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244fe4: 0xc6010004
    ctx->pc = 0x244fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244fe8: 0x46010000
    ctx->pc = 0x244fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244fec: 0xe7a00004
    ctx->pc = 0x244fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x244ff0: 0xc6200008
    ctx->pc = 0x244ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244ff4: 0xc6010008
    ctx->pc = 0x244ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ff8: 0x46010000
    ctx->pc = 0x244ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244ffc: 0xe7a00008
    ctx->pc = 0x244ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x245000: 0x220202d
    ctx->pc = 0x245000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245004: 0x3a0282d
    ctx->pc = 0x245004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245008: 0x3c06003c
    ctx->pc = 0x245008u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x24500c: 0xc087ba4
    ctx->pc = 0x24500Cu;
    SET_GPR_U32(ctx, 31, 0x245014u);
    ctx->pc = 0x245010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7816));
    ctx->pc = 0x21EE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWallCollide_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245014u; }
    }
    if (ctx->pc != 0x245014u) { return; }
    ctx->pc = 0x245014u;
    // 0x245014: 0x40282d
    ctx->pc = 0x245014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245018: 0x3c02003c
    ctx->pc = 0x245018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x24501c: 0x10a00074
    ctx->pc = 0x24501Cu;
    {
        const bool branch_taken_0x24501c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x245020u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 7844), GPR_U32(ctx, 5));
        if (branch_taken_0x24501c) {
            ctx->pc = 0x2451F0u;
            goto label_2451f0;
        }
    }
    ctx->pc = 0x245024u;
    // 0x245024: 0x3c03003c
    ctx->pc = 0x245024u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x245028: 0x24641e98
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 7832));
    // 0x24502c: 0x3c020032
    ctx->pc = 0x24502cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x245030: 0x2442fc00
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x245034: 0xc4400010
    ctx->pc = 0x245034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245038: 0xe4601e98
    ctx->pc = 0x245038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7832), bits); }
    // 0x24503c: 0xc4400014
    ctx->pc = 0x24503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245040: 0xe4800004
    ctx->pc = 0x245040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x245044: 0xc4400018
    ctx->pc = 0x245044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245048: 0xe4800008
    ctx->pc = 0x245048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24504c: 0x8ca20010
    ctx->pc = 0x24504cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x245050: 0x30420038
    ctx->pc = 0x245050u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 56));
    // 0x245054: 0x10400006
    ctx->pc = 0x245054u;
    {
        const bool branch_taken_0x245054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245058u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x245054) {
            ctx->pc = 0x245070u;
            goto label_245070;
        }
    }
    ctx->pc = 0x24505Cu;
    // 0x24505c: 0x8e4301e0
    ctx->pc = 0x24505cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x245060: 0x24020002
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x245064: 0x3863008f
    ctx->pc = 0x245064u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 143));
    // 0x245068: 0x10000062
    ctx->pc = 0x245068u;
    {
        const bool branch_taken_0x245068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24506Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
        if (branch_taken_0x245068) {
            ctx->pc = 0x2451F4u;
            goto label_2451f4;
        }
    }
    ctx->pc = 0x245070u;
label_245070:
    // 0x245070: 0x3c02003c
    ctx->pc = 0x245070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x245074: 0x8c421ea4
    ctx->pc = 0x245074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7844)));
    // 0x245078: 0x8c420010
    ctx->pc = 0x245078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24507c: 0x30421000
    ctx->pc = 0x24507cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x245080: 0x1040001a
    ctx->pc = 0x245080u;
    {
        const bool branch_taken_0x245080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245084u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x245080) {
            ctx->pc = 0x2450ECu;
            goto label_2450ec;
        }
    }
    ctx->pc = 0x245088u;
    // 0x245088: 0x24431e98
    ctx->pc = 0x245088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7832));
    // 0x24508c: 0xc6030000
    ctx->pc = 0x24508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x245090: 0xc4421e98
    ctx->pc = 0x245090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245094: 0x46021842
    ctx->pc = 0x245094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x245098: 0xc6040004
    ctx->pc = 0x245098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24509c: 0xc4600004
    ctx->pc = 0x24509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450a0: 0x46002002
    ctx->pc = 0x2450a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2450a4: 0x46000840
    ctx->pc = 0x2450a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2450a8: 0xc6050008
    ctx->pc = 0x2450a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2450ac: 0xc4600008
    ctx->pc = 0x2450acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450b0: 0x46002802
    ctx->pc = 0x2450b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2450b4: 0x46000840
    ctx->pc = 0x2450b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2450b8: 0x46000847
    ctx->pc = 0x2450b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2450bc: 0x46020882
    ctx->pc = 0x2450bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2450c0: 0x46031080
    ctx->pc = 0x2450c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2450c4: 0xe6020000
    ctx->pc = 0x2450c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2450c8: 0xc4600004
    ctx->pc = 0x2450c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450cc: 0x46000802
    ctx->pc = 0x2450ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2450d0: 0x46040000
    ctx->pc = 0x2450d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2450d4: 0xe6000004
    ctx->pc = 0x2450d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2450d8: 0xc4600008
    ctx->pc = 0x2450d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450dc: 0x46000842
    ctx->pc = 0x2450dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2450e0: 0x46050840
    ctx->pc = 0x2450e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2450e4: 0x10000009
    ctx->pc = 0x2450E4u;
    {
        const bool branch_taken_0x2450e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2450E8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x2450e4) {
            ctx->pc = 0x24510Cu;
            goto label_24510c;
        }
    }
    ctx->pc = 0x2450ECu;
label_2450ec:
    // 0x2450ec: 0x220202d
    ctx->pc = 0x2450ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450f0: 0x200282d
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450f4: 0x3c06003c
    ctx->pc = 0x2450f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x2450f8: 0x24c61e88
    ctx->pc = 0x2450f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7816));
    // 0x2450fc: 0x3c07003c
    ctx->pc = 0x2450fcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x245100: 0x24e71e98
    ctx->pc = 0x245100u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 7832));
    // 0x245104: 0xc087c18
    ctx->pc = 0x245104u;
    SET_GPR_U32(ctx, 31, 0x24510Cu);
    ctx->pc = 0x245108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21F060u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlideAlongWall_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24510Cu; }
    }
    if (ctx->pc != 0x24510Cu) { return; }
    ctx->pc = 0x24510Cu;
label_24510c:
    // 0x24510c: 0xc6200000
    ctx->pc = 0x24510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245110: 0xc6010000
    ctx->pc = 0x245110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245114: 0x46010000
    ctx->pc = 0x245114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245118: 0xe7a00000
    ctx->pc = 0x245118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24511c: 0xc6200004
    ctx->pc = 0x24511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245120: 0xc6010004
    ctx->pc = 0x245120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245124: 0x46010000
    ctx->pc = 0x245124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245128: 0xe7a00004
    ctx->pc = 0x245128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24512c: 0xc6200008
    ctx->pc = 0x24512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245130: 0xc6010008
    ctx->pc = 0x245130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245134: 0x46010000
    ctx->pc = 0x245134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245138: 0xe7a00008
    ctx->pc = 0x245138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24513c: 0x3c020032
    ctx->pc = 0x24513cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x245140: 0x8c43fa54
    ctx->pc = 0x245140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965844)));
    // 0x245144: 0x3c020032
    ctx->pc = 0x245144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x245148: 0x8c42fd34
    ctx->pc = 0x245148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966580)));
    // 0x24514c: 0x621821
    ctx->pc = 0x24514cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245150: 0x90620000
    ctx->pc = 0x245150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245154: 0x24420001
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x245158: 0xa0620000
    ctx->pc = 0x245158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24515c: 0x3c013f73
    ctx->pc = 0x24515cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16243 << 16));
    // 0x245160: 0x34213333
    ctx->pc = 0x245160u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x245164: 0x44816000
    ctx->pc = 0x245164u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x245168: 0x220202d
    ctx->pc = 0x245168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24516c: 0x3a0282d
    ctx->pc = 0x24516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245170: 0x3c06003c
    ctx->pc = 0x245170u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x245174: 0x24c61e88
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7816));
    // 0x245178: 0xc087ba4
    ctx->pc = 0x245178u;
    SET_GPR_U32(ctx, 31, 0x245180u);
    ctx->pc = 0x24517Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x21EE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWallCollide_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245180u; }
    }
    if (ctx->pc != 0x245180u) { return; }
    ctx->pc = 0x245180u;
    // 0x245180: 0x40182d
    ctx->pc = 0x245180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245184: 0x1060001a
    ctx->pc = 0x245184u;
    {
        const bool branch_taken_0x245184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x245188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x245184) {
            ctx->pc = 0x2451F0u;
            goto label_2451f0;
        }
    }
    ctx->pc = 0x24518Cu;
    // 0x24518c: 0xac431ea4
    ctx->pc = 0x24518cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7844), GPR_U32(ctx, 3));
    // 0x245190: 0x3c020032
    ctx->pc = 0x245190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x245194: 0x2442fc00
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x245198: 0x3c03003c
    ctx->pc = 0x245198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x24519c: 0x24641e98
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 7832));
    // 0x2451a0: 0xc4410010
    ctx->pc = 0x2451a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451a4: 0xc4601e98
    ctx->pc = 0x2451a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451a8: 0x46000842
    ctx->pc = 0x2451a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2451ac: 0xc4400014
    ctx->pc = 0x2451acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451b0: 0xc4820004
    ctx->pc = 0x2451b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2451b4: 0x46020002
    ctx->pc = 0x2451b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2451b8: 0x46000840
    ctx->pc = 0x2451b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2451bc: 0xc4400018
    ctx->pc = 0x2451bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451c0: 0xc4820008
    ctx->pc = 0x2451c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2451c4: 0x46020002
    ctx->pc = 0x2451c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2451c8: 0x46000840
    ctx->pc = 0x2451c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2451cc: 0x3c013f00
    ctx->pc = 0x2451ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2451d0: 0x44810000
    ctx->pc = 0x2451d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2451d4: 0x46000834
    ctx->pc = 0x2451d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2451d8: 0x0
    ctx->pc = 0x2451d8u;
    // NOP
    // 0x2451dc: 0x45000005
    ctx->pc = 0x2451DCu;
    {
        const bool branch_taken_0x2451dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2451E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2451dc) {
            ctx->pc = 0x2451F4u;
            goto label_2451f4;
        }
    }
    ctx->pc = 0x2451E4u;
    // 0x2451e4: 0xae000000
    ctx->pc = 0x2451e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2451e8: 0xae000004
    ctx->pc = 0x2451e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2451ec: 0xae000008
    ctx->pc = 0x2451ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2451f0:
    // 0x2451f0: 0x260102d
    ctx->pc = 0x2451f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2451f4:
    // 0x2451f4: 0xdfbf0060
    ctx->pc = 0x2451f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2451f8: 0xdfb30050
    ctx->pc = 0x2451f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2451fc: 0xdfb20040
    ctx->pc = 0x2451fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245200: 0xdfb10030
    ctx->pc = 0x245200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245204: 0xdfb00020
    ctx->pc = 0x245204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245208: 0xc7b40070
    ctx->pc = 0x245208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24520c: 0x3e00008
    ctx->pc = 0x24520Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245070u: goto label_245070;
            case 0x2450ECu: goto label_2450ec;
            case 0x24510Cu: goto label_24510c;
            case 0x2451F0u: goto label_2451f0;
            case 0x2451F4u: goto label_2451f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245214u;
}
