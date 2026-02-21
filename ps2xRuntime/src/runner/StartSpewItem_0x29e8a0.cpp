#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartSpewItem
// Address: 0x29e8a0 - 0x29e9fc
void StartSpewItem_0x29e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29e8a0u;

    // 0x29e8a0: 0x27bdff30
    ctx->pc = 0x29e8a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29e8a4: 0xffbf00b0
    ctx->pc = 0x29e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x29e8a8: 0xffb600a0
    ctx->pc = 0x29e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x29e8ac: 0xffb50090
    ctx->pc = 0x29e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x29e8b0: 0xffb40080
    ctx->pc = 0x29e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x29e8b4: 0xffb30070
    ctx->pc = 0x29e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x29e8b8: 0xffb20060
    ctx->pc = 0x29e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29e8bc: 0xffb10050
    ctx->pc = 0x29e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29e8c0: 0xffb00040
    ctx->pc = 0x29e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29e8c4: 0xe7b400c0
    ctx->pc = 0x29e8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29e8c8: 0x80a02d
    ctx->pc = 0x29e8c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8cc: 0xa0902d
    ctx->pc = 0x29e8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8d0: 0xc0982d
    ctx->pc = 0x29e8d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8d4: 0xe0a82d
    ctx->pc = 0x29e8d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8d8: 0x100b02d
    ctx->pc = 0x29e8d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8dc: 0x46006506
    ctx->pc = 0x29e8dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29e8e0: 0x120802d
    ctx->pc = 0x29e8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8e4: 0x3c020036
    ctx->pc = 0x29e8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29e8e8: 0x8c42d950
    ctx->pc = 0x29e8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957392)));
    // 0x29e8ec: 0x28420020
    ctx->pc = 0x29e8ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32));
    // 0x29e8f0: 0x10400018
    ctx->pc = 0x29E8F0u;
    {
        const bool branch_taken_0x29e8f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E8F4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e8f0) {
            ctx->pc = 0x29E954u;
            goto label_29e954;
        }
    }
    ctx->pc = 0x29E8F8u;
    // 0x29e8f8: 0x3c04003a
    ctx->pc = 0x29e8f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x29e8fc: 0x24842550
    ctx->pc = 0x29e8fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x29e900: 0xc0b5494
    ctx->pc = 0x29E900u;
    SET_GPR_U32(ctx, 31, 0x29E908u);
    ctx->pc = 0x29E904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E908u; }
    }
    if (ctx->pc != 0x29E908u) { return; }
    ctx->pc = 0x29E908u;
    // 0x29e908: 0xc6000000
    ctx->pc = 0x29e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e90c: 0xe7a00030
    ctx->pc = 0x29e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29e910: 0xc6000004
    ctx->pc = 0x29e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e914: 0xe7a00034
    ctx->pc = 0x29e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29e918: 0xc6000008
    ctx->pc = 0x29e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e91c: 0xe7a00038
    ctx->pc = 0x29e91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29e920: 0x280202d
    ctx->pc = 0x29e920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e924: 0x240282d
    ctx->pc = 0x29e924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e928: 0x260302d
    ctx->pc = 0x29e928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e92c: 0xc094e54
    ctx->pc = 0x29E92Cu;
    SET_GPR_U32(ctx, 31, 0x29E934u);
    ctx->pc = 0x29E930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253950u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItem_0x253950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E934u; }
    }
    if (ctx->pc != 0x29E934u) { return; }
    ctx->pc = 0x29E934u;
    // 0x29e934: 0x3c040036
    ctx->pc = 0x29e934u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x29e938: 0x2484d958
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957400));
    // 0x29e93c: 0x3c030036
    ctx->pc = 0x29e93cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29e940: 0x8c63d950
    ctx->pc = 0x29e940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x29e944: 0x31900
    ctx->pc = 0x29e944u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e948: 0x641821
    ctx->pc = 0x29e948u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29e94c: 0x14400003
    ctx->pc = 0x29E94Cu;
    {
        const bool branch_taken_0x29e94c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29E950u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x29e94c) {
            ctx->pc = 0x29E95Cu;
            goto label_29e95c;
        }
    }
    ctx->pc = 0x29E954u;
label_29e954:
    // 0x29e954: 0x1000001e
    ctx->pc = 0x29E954u;
    {
        const bool branch_taken_0x29e954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29e954) {
            ctx->pc = 0x29E9D0u;
            goto label_29e9d0;
        }
    }
    ctx->pc = 0x29E95Cu;
label_29e95c:
    // 0x29e95c: 0x3c020036
    ctx->pc = 0x29e95cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29e960: 0x2444d958
    ctx->pc = 0x29e960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957400));
    // 0x29e964: 0x3c020036
    ctx->pc = 0x29e964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29e968: 0x8c42d950
    ctx->pc = 0x29e968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957392)));
    // 0x29e96c: 0x21900
    ctx->pc = 0x29e96cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x29e970: 0x831021
    ctx->pc = 0x29e970u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29e974: 0xc6200000
    ctx->pc = 0x29e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e978: 0xe4400004
    ctx->pc = 0x29e978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29e97c: 0xc6200004
    ctx->pc = 0x29e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e980: 0xe4400008
    ctx->pc = 0x29e980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29e984: 0xc6200008
    ctx->pc = 0x29e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e988: 0xe440000c
    ctx->pc = 0x29e988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x29e98c: 0x24020001
    ctx->pc = 0x29e98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e990: 0x5682000c
    ctx->pc = 0x29E990u;
    {
        const bool branch_taken_0x29e990 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x29e990) {
            ctx->pc = 0x29E994u;
            SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
            ctx->pc = 0x29E9C4u;
            goto label_29e9c4;
        }
    }
    ctx->pc = 0x29E998u;
    // 0x29e998: 0x641821
    ctx->pc = 0x29e998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29e99c: 0x8c620000
    ctx->pc = 0x29e99cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e9a0: 0xac5500f4
    ctx->pc = 0x29e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 21));
    // 0x29e9a4: 0x8c620000
    ctx->pc = 0x29e9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e9a8: 0xac5600f0
    ctx->pc = 0x29e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 22));
    // 0x29e9ac: 0x8c620000
    ctx->pc = 0x29e9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e9b0: 0xe45400f8
    ctx->pc = 0x29e9b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x29e9b4: 0x8c630000
    ctx->pc = 0x29e9b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e9b8: 0x24020078
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x29e9bc: 0xa4620100
    ctx->pc = 0x29e9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x29e9c0: 0x3c030036
    ctx->pc = 0x29e9c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_29e9c4:
    // 0x29e9c4: 0x8c62d950
    ctx->pc = 0x29e9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957392)));
    // 0x29e9c8: 0x24440001
    ctx->pc = 0x29e9c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x29e9cc: 0xac64d950
    ctx->pc = 0x29e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957392), GPR_U32(ctx, 4));
label_29e9d0:
    // 0x29e9d0: 0xdfbf00b0
    ctx->pc = 0x29e9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29e9d4: 0xdfb600a0
    ctx->pc = 0x29e9d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e9d8: 0xdfb50090
    ctx->pc = 0x29e9d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e9dc: 0xdfb40080
    ctx->pc = 0x29e9dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e9e0: 0xdfb30070
    ctx->pc = 0x29e9e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e9e4: 0xdfb20060
    ctx->pc = 0x29e9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e9e8: 0xdfb10050
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e9ec: 0xdfb00040
    ctx->pc = 0x29e9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e9f0: 0xc7b400c0
    ctx->pc = 0x29e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e9f4: 0x3e00008
    ctx->pc = 0x29E9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E954u: goto label_29e954;
            case 0x29E95Cu: goto label_29e95c;
            case 0x29E9C4u: goto label_29e9c4;
            case 0x29E9D0u: goto label_29e9d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E9FCu;
}
