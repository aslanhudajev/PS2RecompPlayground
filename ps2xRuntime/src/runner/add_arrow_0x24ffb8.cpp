#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: add_arrow
// Address: 0x24ffb8 - 0x250124
void add_arrow_0x24ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24ffb8u;

    // 0x24ffb8: 0x27bdff50
    ctx->pc = 0x24ffb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24ffbc: 0xffbf00a0
    ctx->pc = 0x24ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24ffc0: 0xffb40090
    ctx->pc = 0x24ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x24ffc4: 0xffb30080
    ctx->pc = 0x24ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x24ffc8: 0xffb20070
    ctx->pc = 0x24ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x24ffcc: 0xffb10060
    ctx->pc = 0x24ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x24ffd0: 0xffb00050
    ctx->pc = 0x24ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x24ffd4: 0x80982d
    ctx->pc = 0x24ffd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffd8: 0xa0a02d
    ctx->pc = 0x24ffd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffdc: 0xe0282d
    ctx->pc = 0x24ffdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffe0: 0x100882d
    ctx->pc = 0x24ffe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffe4: 0x902d
    ctx->pc = 0x24ffe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffe8: 0x27a20010
    ctx->pc = 0x24ffe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ffec: 0x40802d
    ctx->pc = 0x24ffecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fff0: 0x10a00021
    ctx->pc = 0x24FFF0u;
    {
        const bool branch_taken_0x24fff0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FFF4u;
        if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 9));
        if (branch_taken_0x24fff0) {
            ctx->pc = 0x250078u;
            goto label_250078;
        }
    }
    ctx->pc = 0x24FFF8u;
    // 0x24fff8: 0x10c00017
    ctx->pc = 0x24FFF8u;
    {
        const bool branch_taken_0x24fff8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x24fff8) {
            ctx->pc = 0x250058u;
            goto label_250058;
        }
    }
    ctx->pc = 0x250000u;
    // 0x250000: 0xc4a00000
    ctx->pc = 0x250000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250004: 0xe7a00000
    ctx->pc = 0x250004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250008: 0xc4ac0004
    ctx->pc = 0x250008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25000c: 0xe7ac0004
    ctx->pc = 0x25000cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250010: 0xc4a00008
    ctx->pc = 0x250010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250014: 0xe7a00008
    ctx->pc = 0x250014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x250018: 0x3c014049
    ctx->pc = 0x250018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x25001c: 0x34210fdb
    ctx->pc = 0x25001cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x250020: 0x44810000
    ctx->pc = 0x250020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x250024: 0x46006300
    ctx->pc = 0x250024u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x250028: 0xc0b5a1a
    ctx->pc = 0x250028u;
    SET_GPR_U32(ctx, 31, 0x250030u);
    ctx->pc = 0x25002Cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250030u; }
    }
    if (ctx->pc != 0x250030u) { return; }
    ctx->pc = 0x250030u;
    // 0x250030: 0xe7a00004
    ctx->pc = 0x250030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250034: 0xc7ac0000
    ctx->pc = 0x250034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250038: 0x46006307
    ctx->pc = 0x250038u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x25003c: 0xc0b5a1a
    ctx->pc = 0x25003Cu;
    SET_GPR_U32(ctx, 31, 0x250044u);
    ctx->pc = 0x250040u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250044u; }
    }
    if (ctx->pc != 0x250044u) { return; }
    ctx->pc = 0x250044u;
    // 0x250044: 0xe7a00000
    ctx->pc = 0x250044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250048: 0x200202d
    ctx->pc = 0x250048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25004c: 0xc0b5ae8
    ctx->pc = 0x25004Cu;
    SET_GPR_U32(ctx, 31, 0x250054u);
    ctx->pc = 0x250050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250054u; }
    }
    if (ctx->pc != 0x250054u) { return; }
    ctx->pc = 0x250054u;
    // 0x250054: 0x3a0282d
    ctx->pc = 0x250054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_250058:
    // 0x250058: 0xc0b5ae8
    ctx->pc = 0x250058u;
    SET_GPR_U32(ctx, 31, 0x250060u);
    ctx->pc = 0x25005Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250060u; }
    }
    if (ctx->pc != 0x250060u) { return; }
    ctx->pc = 0x250060u;
    // 0x250060: 0xc6200000
    ctx->pc = 0x250060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250064: 0xe6000030
    ctx->pc = 0x250064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x250068: 0xc6200004
    ctx->pc = 0x250068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25006c: 0xe6000034
    ctx->pc = 0x25006cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x250070: 0xc6200008
    ctx->pc = 0x250070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250074: 0xe6000038
    ctx->pc = 0x250074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_250078:
    // 0x250078: 0x1660000b
    ctx->pc = 0x250078u;
    {
        const bool branch_taken_0x250078 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x25007Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
        if (branch_taken_0x250078) {
            ctx->pc = 0x2500A8u;
            goto label_2500a8;
        }
    }
    ctx->pc = 0x250080u;
    // 0x250080: 0xc60c0034
    ctx->pc = 0x250080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250084: 0x3c013e4c
    ctx->pc = 0x250084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x250088: 0x3421cccd
    ctx->pc = 0x250088u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x25008c: 0x44816800
    ctx->pc = 0x25008cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x250090: 0xc087b5c
    ctx->pc = 0x250090u;
    SET_GPR_U32(ctx, 31, 0x250098u);
    ctx->pc = 0x250094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250098u; }
    }
    if (ctx->pc != 0x250098u) { return; }
    ctx->pc = 0x250098u;
    // 0x250098: 0x3c013f00
    ctx->pc = 0x250098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x25009c: 0x44810800
    ctx->pc = 0x25009cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2500a0: 0x46010000
    ctx->pc = 0x2500a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2500a4: 0xe6000034
    ctx->pc = 0x2500a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2500a8:
    // 0x2500a8: 0x12800015
    ctx->pc = 0x2500A8u;
    {
        const bool branch_taken_0x2500a8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2500ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2500a8) {
            ctx->pc = 0x250100u;
            goto label_250100;
        }
    }
    ctx->pc = 0x2500B0u;
    // 0x2500b0: 0x24424980
    ctx->pc = 0x2500b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18816));
    // 0x2500b4: 0x131880
    ctx->pc = 0x2500b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x2500b8: 0x621821
    ctx->pc = 0x2500b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2500bc: 0x8c640000
    ctx->pc = 0x2500bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2500c0: 0x200282d
    ctx->pc = 0x2500c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500c4: 0x302d
    ctx->pc = 0x2500c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500c8: 0xc0b1b04
    ctx->pc = 0x2500C8u;
    SET_GPR_U32(ctx, 31, 0x2500D0u);
    ctx->pc = 0x2500CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500D0u; }
    }
    if (ctx->pc != 0x2500D0u) { return; }
    ctx->pc = 0x2500D0u;
    // 0x2500d0: 0x40902d
    ctx->pc = 0x2500d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500d4: 0x240202d
    ctx->pc = 0x2500d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500d8: 0x24050064
    ctx->pc = 0x2500d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
    // 0x2500dc: 0xc0b40c0
    ctx->pc = 0x2500DCu;
    SET_GPR_U32(ctx, 31, 0x2500E4u);
    ctx->pc = 0x2500E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500E4u; }
    }
    if (ctx->pc != 0x2500E4u) { return; }
    ctx->pc = 0x2500E4u;
    // 0x2500e4: 0x24020002
    ctx->pc = 0x2500e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2500e8: 0x16820006
    ctx->pc = 0x2500E8u;
    {
        const bool branch_taken_0x2500e8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2500ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2500e8) {
            ctx->pc = 0x250104u;
            goto label_250104;
        }
    }
    ctx->pc = 0x2500F0u;
    // 0x2500f0: 0x240202d
    ctx->pc = 0x2500f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500f4: 0x24050002
    ctx->pc = 0x2500f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2500f8: 0xc0b41b8
    ctx->pc = 0x2500F8u;
    SET_GPR_U32(ctx, 31, 0x250100u);
    ctx->pc = 0x2500FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250100u; }
    }
    if (ctx->pc != 0x250100u) { return; }
    ctx->pc = 0x250100u;
label_250100:
    // 0x250100: 0x240102d
    ctx->pc = 0x250100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250104:
    // 0x250104: 0xdfbf00a0
    ctx->pc = 0x250104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250108: 0xdfb40090
    ctx->pc = 0x250108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25010c: 0xdfb30080
    ctx->pc = 0x25010cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250110: 0xdfb20070
    ctx->pc = 0x250110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250114: 0xdfb10060
    ctx->pc = 0x250114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250118: 0xdfb00050
    ctx->pc = 0x250118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25011c: 0x3e00008
    ctx->pc = 0x25011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250058u: goto label_250058;
            case 0x250078u: goto label_250078;
            case 0x2500A8u: goto label_2500a8;
            case 0x250100u: goto label_250100;
            case 0x250104u: goto label_250104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250124u;
}
