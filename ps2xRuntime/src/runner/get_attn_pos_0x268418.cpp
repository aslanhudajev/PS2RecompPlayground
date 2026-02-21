#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_attn_pos
// Address: 0x268418 - 0x2689dc
void get_attn_pos_0x268418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268418u;

    // 0x268418: 0x27bdff60
    ctx->pc = 0x268418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26841c: 0xffbf0070
    ctx->pc = 0x26841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x268420: 0xffb10060
    ctx->pc = 0x268420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x268424: 0xffb00050
    ctx->pc = 0x268424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x268428: 0xe7b60090
    ctx->pc = 0x268428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26842c: 0xe7b50088
    ctx->pc = 0x26842cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x268430: 0xe7b40080
    ctx->pc = 0x268430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x268434: 0xa0802d
    ctx->pc = 0x268434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268438: 0x240201a0
    ctx->pc = 0x268438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26843c: 0x822018
    ctx->pc = 0x26843cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x268440: 0x3c020034
    ctx->pc = 0x268440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268444: 0x2442eb60
    ctx->pc = 0x268444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x268448: 0x828821
    ctx->pc = 0x268448u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26844c: 0x44800800
    ctx->pc = 0x26844cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x268450: 0xc6200140
    ctx->pc = 0x268450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268454: 0xe6200150
    ctx->pc = 0x268454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x268458: 0xc6200144
    ctx->pc = 0x268458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26845c: 0xe6200154
    ctx->pc = 0x26845cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x268460: 0xc6200148
    ctx->pc = 0x268460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268464: 0xe6200158
    ctx->pc = 0x268464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x268468: 0x3c020034
    ctx->pc = 0x268468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26846c: 0x8c42e7f0
    ctx->pc = 0x26846cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x268470: 0x441000f
    ctx->pc = 0x268470u;
    {
        const bool branch_taken_0x268470 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x268474u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 260)));
        if (branch_taken_0x268470) {
            ctx->pc = 0x2684B0u;
            goto label_2684b0;
        }
    }
    ctx->pc = 0x268478u;
    // 0x268478: 0x24020001
    ctx->pc = 0x268478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26847c: 0x5062000a
    ctx->pc = 0x26847Cu;
    {
        const bool branch_taken_0x26847c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x26847c) {
            ctx->pc = 0x268480u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2684A8u;
            goto label_2684a8;
        }
    }
    ctx->pc = 0x268484u;
    // 0x268484: 0xe6210140
    ctx->pc = 0x268484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x268488: 0xe6210144
    ctx->pc = 0x268488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x26848c: 0xe6210148
    ctx->pc = 0x26848cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x268490: 0xe6010000
    ctx->pc = 0x268490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268494: 0xc6200144
    ctx->pc = 0x268494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268498: 0xe6000004
    ctx->pc = 0x268498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x26849c: 0xc6200148
    ctx->pc = 0x26849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2684a0: 0xe6000008
    ctx->pc = 0x2684a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2684a4: 0xc6000000
    ctx->pc = 0x2684a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2684a8:
    // 0x2684a8: 0x1000006e
    ctx->pc = 0x2684A8u;
    {
        const bool branch_taken_0x2684a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2684ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
        if (branch_taken_0x2684a8) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x2684B0u;
label_2684b0:
    // 0x2684b0: 0x24020001
    ctx->pc = 0x2684b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2684b4: 0x10620008
    ctx->pc = 0x2684B4u;
    {
        const bool branch_taken_0x2684b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2684B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2684b4) {
            ctx->pc = 0x2684D8u;
            goto label_2684d8;
        }
    }
    ctx->pc = 0x2684BCu;
    // 0x2684bc: 0x8c420018
    ctx->pc = 0x2684bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2684c0: 0x30424000
    ctx->pc = 0x2684c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2684c4: 0x1040000a
    ctx->pc = 0x2684C4u;
    {
        const bool branch_taken_0x2684c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2684C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2684c4) {
            ctx->pc = 0x2684F0u;
            goto label_2684f0;
        }
    }
    ctx->pc = 0x2684CCu;
    // 0x2684cc: 0x8c4207b4
    ctx->pc = 0x2684ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    // 0x2684d0: 0x14400008
    ctx->pc = 0x2684D0u;
    {
        const bool branch_taken_0x2684d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2684D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2684d0) {
            ctx->pc = 0x2684F4u;
            goto label_2684f4;
        }
    }
    ctx->pc = 0x2684D8u;
label_2684d8:
    // 0x2684d8: 0xc6210140
    ctx->pc = 0x2684d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2684dc: 0xe6010000
    ctx->pc = 0x2684dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2684e0: 0xc6200144
    ctx->pc = 0x2684e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2684e4: 0xe6000004
    ctx->pc = 0x2684e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2684e8: 0x1000005c
    ctx->pc = 0x2684E8u;
    {
        const bool branch_taken_0x2684e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2684ECu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2684e8) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x2684F0u;
label_2684f0:
    // 0x2684f0: 0x24020003
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2684f4:
    // 0x2684f4: 0x1062000b
    ctx->pc = 0x2684F4u;
    {
        const bool branch_taken_0x2684f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2684F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2684f4) {
            ctx->pc = 0x268524u;
            goto label_268524;
        }
    }
    ctx->pc = 0x2684FCu;
    // 0x2684fc: 0x10620009
    ctx->pc = 0x2684FCu;
    {
        const bool branch_taken_0x2684fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x268500u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2684fc) {
            ctx->pc = 0x268524u;
            goto label_268524;
        }
    }
    ctx->pc = 0x268504u;
    // 0x268504: 0x10620007
    ctx->pc = 0x268504u;
    {
        const bool branch_taken_0x268504 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x268508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x268504) {
            ctx->pc = 0x268524u;
            goto label_268524;
        }
    }
    ctx->pc = 0x26850Cu;
    // 0x26850c: 0x10620005
    ctx->pc = 0x26850Cu;
    {
        const bool branch_taken_0x26850c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x268510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x26850c) {
            ctx->pc = 0x268524u;
            goto label_268524;
        }
    }
    ctx->pc = 0x268514u;
    // 0x268514: 0x10620003
    ctx->pc = 0x268514u;
    {
        const bool branch_taken_0x268514 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x268518u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x268514) {
            ctx->pc = 0x268524u;
            goto label_268524;
        }
    }
    ctx->pc = 0x26851Cu;
    // 0x26851c: 0x14620014
    ctx->pc = 0x26851Cu;
    {
        const bool branch_taken_0x26851c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x268520u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x26851c) {
            ctx->pc = 0x268570u;
            goto label_268570;
        }
    }
    ctx->pc = 0x268524u;
label_268524:
    // 0x268524: 0x8e220124
    ctx->pc = 0x268524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x268528: 0x50400009
    ctx->pc = 0x268528u;
    {
        const bool branch_taken_0x268528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x268528) {
            ctx->pc = 0x26852Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x268550u;
            goto label_268550;
        }
    }
    ctx->pc = 0x268530u;
    // 0x268530: 0xc4400040
    ctx->pc = 0x268530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268534: 0xe6000000
    ctx->pc = 0x268534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268538: 0x8e220124
    ctx->pc = 0x268538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x26853c: 0xc4400044
    ctx->pc = 0x26853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268540: 0xe6000004
    ctx->pc = 0x268540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x268544: 0x8e220124
    ctx->pc = 0x268544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x268548: 0x10000005
    ctx->pc = 0x268548u;
    {
        const bool branch_taken_0x268548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26854Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x268548) {
            ctx->pc = 0x268560u;
            goto label_268560;
        }
    }
    ctx->pc = 0x268550u;
label_268550:
    // 0x268550: 0xe6000000
    ctx->pc = 0x268550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268554: 0xc6200144
    ctx->pc = 0x268554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268558: 0xe6000004
    ctx->pc = 0x268558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x26855c: 0xc6200148
    ctx->pc = 0x26855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268560:
    // 0x268560: 0xe6000008
    ctx->pc = 0x268560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x268564: 0xc6000000
    ctx->pc = 0x268564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268568: 0x1000003e
    ctx->pc = 0x268568u;
    {
        const bool branch_taken_0x268568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26856Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
        if (branch_taken_0x268568) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x268570u;
label_268570:
    // 0x268570: 0x1462001d
    ctx->pc = 0x268570u;
    {
        const bool branch_taken_0x268570 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x268574u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x268570) {
            ctx->pc = 0x2685E8u;
            goto label_2685e8;
        }
    }
    ctx->pc = 0x268578u;
    // 0x268578: 0x3c020033
    ctx->pc = 0x268578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26857c: 0x24444b70
    ctx->pc = 0x26857cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x268580: 0x8e220120
    ctx->pc = 0x268580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x268584: 0x21180
    ctx->pc = 0x268584u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x268588: 0x441821
    ctx->pc = 0x268588u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26858c: 0x84620002
    ctx->pc = 0x26858cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x268590: 0x5040000d
    ctx->pc = 0x268590u;
    {
        const bool branch_taken_0x268590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x268590) {
            ctx->pc = 0x268594u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2685C8u;
            goto label_2685c8;
        }
    }
    ctx->pc = 0x268598u;
    // 0x268598: 0xc4600010
    ctx->pc = 0x268598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26859c: 0xe6000000
    ctx->pc = 0x26859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2685a0: 0x8e220120
    ctx->pc = 0x2685a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2685a4: 0x21180
    ctx->pc = 0x2685a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2685a8: 0x441021
    ctx->pc = 0x2685a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2685ac: 0xc4400014
    ctx->pc = 0x2685acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2685b0: 0xe6000004
    ctx->pc = 0x2685b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2685b4: 0x8e220120
    ctx->pc = 0x2685b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2685b8: 0x21180
    ctx->pc = 0x2685b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2685bc: 0x441021
    ctx->pc = 0x2685bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2685c0: 0x10000005
    ctx->pc = 0x2685C0u;
    {
        const bool branch_taken_0x2685c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2685C4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2685c0) {
            ctx->pc = 0x2685D8u;
            goto label_2685d8;
        }
    }
    ctx->pc = 0x2685C8u;
label_2685c8:
    // 0x2685c8: 0xe6000000
    ctx->pc = 0x2685c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2685cc: 0xc6200144
    ctx->pc = 0x2685ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2685d0: 0xe6000004
    ctx->pc = 0x2685d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2685d4: 0xc6200148
    ctx->pc = 0x2685d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2685d8:
    // 0x2685d8: 0xe6000008
    ctx->pc = 0x2685d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2685dc: 0xc6000000
    ctx->pc = 0x2685dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2685e0: 0x10000020
    ctx->pc = 0x2685E0u;
    {
        const bool branch_taken_0x2685e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2685E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
        if (branch_taken_0x2685e0) {
            ctx->pc = 0x268664u;
            goto label_268664;
        }
    }
    ctx->pc = 0x2685E8u;
label_2685e8:
    // 0x2685e8: 0x8c42f940
    ctx->pc = 0x2685e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
    // 0x2685ec: 0x50400001
    ctx->pc = 0x2685ECu;
    {
        const bool branch_taken_0x2685ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2685ec) {
            ctx->pc = 0x2685F0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x2685F4u;
            goto label_2685f4;
        }
    }
    ctx->pc = 0x2685F4u;
label_2685f4:
    // 0x2685f4: 0x8e2200e4
    ctx->pc = 0x2685f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2685f8: 0x284200b4
    ctx->pc = 0x2685f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 180));
    // 0x2685fc: 0x14400024
    ctx->pc = 0x2685FCu;
    {
        const bool branch_taken_0x2685fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268600u;
        SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
        if (branch_taken_0x2685fc) {
            ctx->pc = 0x268690u;
            goto label_268690;
        }
    }
    ctx->pc = 0x268604u;
    // 0x268604: 0x8cc2cdb8
    ctx->pc = 0x268604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294954424)));
    // 0x268608: 0x4400021
    ctx->pc = 0x268608u;
    {
        const bool branch_taken_0x268608 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26860Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
        if (branch_taken_0x268608) {
            ctx->pc = 0x268690u;
            goto label_268690;
        }
    }
    ctx->pc = 0x268610u;
    // 0x268610: 0x8ca3cd94
    ctx->pc = 0x268610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294954388)));
    // 0x268614: 0x24040110
    ctx->pc = 0x268614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 272));
    // 0x268618: 0x441018
    ctx->pc = 0x268618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26861c: 0x431021
    ctx->pc = 0x26861cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268620: 0x8c4200f0
    ctx->pc = 0x268620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x268624: 0x8c420028
    ctx->pc = 0x268624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x268628: 0xc4410030
    ctx->pc = 0x268628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26862c: 0xe6010000
    ctx->pc = 0x26862cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268630: 0x8cc3cdb8
    ctx->pc = 0x268630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294954424)));
    // 0x268634: 0x8ca2cd94
    ctx->pc = 0x268634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294954388)));
    // 0x268638: 0x641818
    ctx->pc = 0x268638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26863c: 0x621821
    ctx->pc = 0x26863cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268640: 0x8c6200f0
    ctx->pc = 0x268640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x268644: 0x8c420028
    ctx->pc = 0x268644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x268648: 0xc4400034
    ctx->pc = 0x268648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26864c: 0xe6000004
    ctx->pc = 0x26864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x268650: 0x8c6200f0
    ctx->pc = 0x268650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x268654: 0x8c420028
    ctx->pc = 0x268654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x268658: 0xc4400038
    ctx->pc = 0x268658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26865c:
    // 0x26865c: 0xe6000008
    ctx->pc = 0x26865cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x268660: 0xe6210170
    ctx->pc = 0x268660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
label_268664:
    // 0x268664: 0xc6000004
    ctx->pc = 0x268664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268668: 0xe6200174
    ctx->pc = 0x268668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x26866c: 0xc6000008
    ctx->pc = 0x26866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268670: 0xe6200178
    ctx->pc = 0x268670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x268674: 0xc6000000
    ctx->pc = 0x268674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268678: 0xe6200180
    ctx->pc = 0x268678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x26867c: 0xc6000004
    ctx->pc = 0x26867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268680: 0xe6200184
    ctx->pc = 0x268680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x268684: 0xc6000008
    ctx->pc = 0x268684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268688: 0x100000cc
    ctx->pc = 0x268688u;
    {
        const bool branch_taken_0x268688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26868Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
        if (branch_taken_0x268688) {
            ctx->pc = 0x2689BCu;
            goto label_2689bc;
        }
    }
    ctx->pc = 0x268690u;
label_268690:
    // 0x268690: 0x3c014b18
    ctx->pc = 0x268690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19224 << 16));
    // 0x268694: 0x34219680
    ctx->pc = 0x268694u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x268698: 0x44812000
    ctx->pc = 0x268698u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x26869c: 0x46002146
    ctx->pc = 0x26869cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x2686a0: 0x46002186
    ctx->pc = 0x2686a0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[4]);
    // 0x2686a4: 0x3c01cb18
    ctx->pc = 0x2686a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51992 << 16));
    // 0x2686a8: 0x34219680
    ctx->pc = 0x2686a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x2686ac: 0x4481a800
    ctx->pc = 0x2686acu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2686b0: 0x4600a806
    ctx->pc = 0x2686b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x2686b4: 0x4600ad06
    ctx->pc = 0x2686b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x2686b8: 0x202d
    ctx->pc = 0x2686b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686bc: 0x3c020034
    ctx->pc = 0x2686bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2686c0: 0x2443f530
    ctx->pc = 0x2686c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x2686c4: 0x0
    ctx->pc = 0x2686c4u;
    // NOP
label_2686c8:
    // 0x2686c8: 0x8c620000
    ctx->pc = 0x2686c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2686cc: 0x5840001e
    ctx->pc = 0x2686CCu;
    {
        const bool branch_taken_0x2686cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2686cc) {
            ctx->pc = 0x2686D0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x268748u;
            goto label_268748;
        }
    }
    ctx->pc = 0x2686D4u;
    // 0x2686d4: 0x8c620004
    ctx->pc = 0x2686d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2686d8: 0xc4410040
    ctx->pc = 0x2686d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2686dc: 0xc4420044
    ctx->pc = 0x2686dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2686e0: 0x46060834
    ctx->pc = 0x2686e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2686e4: 0x0
    ctx->pc = 0x2686e4u;
    // NOP
    // 0x2686e8: 0x45000002
    ctx->pc = 0x2686E8u;
    {
        const bool branch_taken_0x2686e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2686ECu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x2686e8) {
            ctx->pc = 0x2686F4u;
            goto label_2686f4;
        }
    }
    ctx->pc = 0x2686F0u;
    // 0x2686f0: 0x46000986
    ctx->pc = 0x2686f0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_2686f4:
    // 0x2686f4: 0x4601a034
    ctx->pc = 0x2686f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2686f8: 0x0
    ctx->pc = 0x2686f8u;
    // NOP
    // 0x2686fc: 0x45030001
    ctx->pc = 0x2686FCu;
    {
        const bool branch_taken_0x2686fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2686fc) {
            ctx->pc = 0x268700u;
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x268704u;
            goto label_268704;
        }
    }
    ctx->pc = 0x268704u;
label_268704:
    // 0x268704: 0x46051034
    ctx->pc = 0x268704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268708: 0x0
    ctx->pc = 0x268708u;
    // NOP
    // 0x26870c: 0x45030001
    ctx->pc = 0x26870Cu;
    {
        const bool branch_taken_0x26870c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26870c) {
            ctx->pc = 0x268710u;
            ctx->f[5] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x268714u;
            goto label_268714;
        }
    }
    ctx->pc = 0x268714u;
label_268714:
    // 0x268714: 0x46020034
    ctx->pc = 0x268714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268718: 0x0
    ctx->pc = 0x268718u;
    // NOP
    // 0x26871c: 0x45030001
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26871c) {
            ctx->pc = 0x268720u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x268724u;
            goto label_268724;
        }
    }
    ctx->pc = 0x268724u;
label_268724:
    // 0x268724: 0x46041834
    ctx->pc = 0x268724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268728: 0x0
    ctx->pc = 0x268728u;
    // NOP
    // 0x26872c: 0x45030001
    ctx->pc = 0x26872Cu;
    {
        const bool branch_taken_0x26872c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26872c) {
            ctx->pc = 0x268730u;
            ctx->f[4] = FPU_MOV_S(ctx->f[3]);
            ctx->pc = 0x268734u;
            goto label_268734;
        }
    }
    ctx->pc = 0x268734u;
label_268734:
    // 0x268734: 0x4603a834
    ctx->pc = 0x268734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268738: 0x0
    ctx->pc = 0x268738u;
    // NOP
    // 0x26873c: 0x45030001
    ctx->pc = 0x26873Cu;
    {
        const bool branch_taken_0x26873c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26873c) {
            ctx->pc = 0x268740u;
            ctx->f[21] = FPU_MOV_S(ctx->f[3]);
            ctx->pc = 0x268744u;
            goto label_268744;
        }
    }
    ctx->pc = 0x268744u;
label_268744:
    // 0x268744: 0x24840001
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_268748:
    // 0x268748: 0x2882000f
    ctx->pc = 0x268748u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x26874c: 0x1440ffde
    ctx->pc = 0x26874Cu;
    {
        const bool branch_taken_0x26874c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268750u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x26874c) {
            ctx->pc = 0x2686C8u;
            goto label_2686c8;
        }
    }
    ctx->pc = 0x268754u;
    // 0x268754: 0x46143040
    ctx->pc = 0x268754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
    // 0x268758: 0x3c013f00
    ctx->pc = 0x268758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26875c: 0x4481b000
    ctx->pc = 0x26875cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x268760: 0x46160842
    ctx->pc = 0x268760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x268764: 0xe6010000
    ctx->pc = 0x268764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268768: 0x46002800
    ctx->pc = 0x268768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x26876c: 0x46160002
    ctx->pc = 0x26876cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x268770: 0xe6000004
    ctx->pc = 0x268770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x268774: 0x46152000
    ctx->pc = 0x268774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
    // 0x268778: 0x46160002
    ctx->pc = 0x268778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x26877c: 0xe6000008
    ctx->pc = 0x26877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x268780: 0xe6210180
    ctx->pc = 0x268780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x268784: 0xc6000004
    ctx->pc = 0x268784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268788: 0xe6200184
    ctx->pc = 0x268788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x26878c: 0xc6000008
    ctx->pc = 0x26878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268790: 0xe6200188
    ctx->pc = 0x268790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x268794: 0x8e2300f8
    ctx->pc = 0x268794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x268798: 0x24020003
    ctx->pc = 0x268798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26879c: 0x5462002b
    ctx->pc = 0x26879Cu;
    {
        const bool branch_taken_0x26879c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26879c) {
            ctx->pc = 0x2687A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26884Cu;
            goto label_26884c;
        }
    }
    ctx->pc = 0x2687A4u;
    // 0x2687a4: 0x3c020034
    ctx->pc = 0x2687a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2687a8: 0x8c42f914
    ctx->pc = 0x2687a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x2687ac: 0x5440000b
    ctx->pc = 0x2687ACu;
    {
        const bool branch_taken_0x2687ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2687ac) {
            ctx->pc = 0x2687B0u;
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
            ctx->pc = 0x2687DCu;
            goto label_2687dc;
        }
    }
    ctx->pc = 0x2687B4u;
    // 0x2687b4: 0x4604ad01
    ctx->pc = 0x2687b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x2687b8: 0x4616a502
    ctx->pc = 0x2687b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2687bc: 0xc0b9dce
    ctx->pc = 0x2687BCu;
    SET_GPR_U32(ctx, 31, 0x2687C4u);
    ctx->pc = 0x2687C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687C4u; }
    }
    if (ctx->pc != 0x2687C4u) { return; }
    ctx->pc = 0x2687C4u;
    // 0x2687c4: 0x4600a502
    ctx->pc = 0x2687c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2687c8: 0x4616a502
    ctx->pc = 0x2687c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2687cc: 0xc6000008
    ctx->pc = 0x2687ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2687d0: 0x4600a500
    ctx->pc = 0x2687d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2687d4: 0x1000001c
    ctx->pc = 0x2687D4u;
    {
        const bool branch_taken_0x2687d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2687D8u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x2687d4) {
            ctx->pc = 0x268848u;
            goto label_268848;
        }
    }
    ctx->pc = 0x2687DCu;
label_2687dc:
    // 0x2687dc: 0x3c013f00
    ctx->pc = 0x2687dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2687e0: 0x44810800
    ctx->pc = 0x2687e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2687e4: 0x4601a502
    ctx->pc = 0x2687e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2687e8: 0x3c013f40
    ctx->pc = 0x2687e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x2687ec: 0x44810000
    ctx->pc = 0x2687ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2687f0: 0x4600a502
    ctx->pc = 0x2687f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2687f4: 0x4604ad41
    ctx->pc = 0x2687f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x2687f8: 0x4601ad42
    ctx->pc = 0x2687f8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2687fc: 0x4600ad42
    ctx->pc = 0x2687fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x268800: 0xc0b9dce
    ctx->pc = 0x268800u;
    SET_GPR_U32(ctx, 31, 0x268808u);
    ctx->pc = 0x268804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268808u; }
    }
    if (ctx->pc != 0x268808u) { return; }
    ctx->pc = 0x268808u;
    // 0x268808: 0x4600a502
    ctx->pc = 0x268808u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26880c: 0xc0b9e4a
    ctx->pc = 0x26880Cu;
    SET_GPR_U32(ctx, 31, 0x268814u);
    ctx->pc = 0x268810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268814u; }
    }
    if (ctx->pc != 0x268814u) { return; }
    ctx->pc = 0x268814u;
    // 0x268814: 0x4600a502
    ctx->pc = 0x268814u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x268818: 0xc6000000
    ctx->pc = 0x268818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26881c: 0x4600a500
    ctx->pc = 0x26881cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x268820: 0xe6140000
    ctx->pc = 0x268820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268824: 0xc0b9dce
    ctx->pc = 0x268824u;
    SET_GPR_U32(ctx, 31, 0x26882Cu);
    ctx->pc = 0x268828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26882Cu; }
    }
    if (ctx->pc != 0x26882Cu) { return; }
    ctx->pc = 0x26882Cu;
    // 0x26882c: 0x4600ad42
    ctx->pc = 0x26882cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x268830: 0xc0b9dce
    ctx->pc = 0x268830u;
    SET_GPR_U32(ctx, 31, 0x268838u);
    ctx->pc = 0x268834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268838u; }
    }
    if (ctx->pc != 0x268838u) { return; }
    ctx->pc = 0x268838u;
    // 0x268838: 0x4600ad42
    ctx->pc = 0x268838u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x26883c: 0xc6000008
    ctx->pc = 0x26883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268840: 0x4600ad40
    ctx->pc = 0x268840u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x268844: 0xe6150008
    ctx->pc = 0x268844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_268848:
    // 0x268848: 0xc6000000
    ctx->pc = 0x268848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26884c:
    // 0x26884c: 0xe6200170
    ctx->pc = 0x26884cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x268850: 0xc6000004
    ctx->pc = 0x268850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268854: 0xe6200174
    ctx->pc = 0x268854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x268858: 0xc6000008
    ctx->pc = 0x268858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26885c: 0xe6200178
    ctx->pc = 0x26885cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x268860: 0xc6000000
    ctx->pc = 0x268860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268864: 0xe7a00000
    ctx->pc = 0x268864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268868: 0xc6000004
    ctx->pc = 0x268868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26886c: 0xe7a00004
    ctx->pc = 0x26886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268870: 0xc6000008
    ctx->pc = 0x268870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268874: 0xe7a00008
    ctx->pc = 0x268874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268878: 0x3c02003c
    ctx->pc = 0x268878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26887c: 0xac403920
    ctx->pc = 0x26887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14624), GPR_U32(ctx, 0));
    // 0x268880: 0x3c020032
    ctx->pc = 0x268880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x268884: 0x8c42080c
    ctx->pc = 0x268884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x268888: 0x14400025
    ctx->pc = 0x268888u;
    {
        const bool branch_taken_0x268888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26888Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x268888) {
            ctx->pc = 0x268920u;
            goto label_268920;
        }
    }
    ctx->pc = 0x268890u;
    // 0x268890: 0x3c02003c
    ctx->pc = 0x268890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x268894: 0x8c42391c
    ctx->pc = 0x268894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14620)));
    // 0x268898: 0x28420002
    ctx->pc = 0x268898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26889c: 0x10400020
    ctx->pc = 0x26889Cu;
    {
        const bool branch_taken_0x26889c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2688A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26889c) {
            ctx->pc = 0x268920u;
            goto label_268920;
        }
    }
    ctx->pc = 0x2688A4u;
    // 0x2688a4: 0x202d
    ctx->pc = 0x2688a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688a8: 0x2448f9e0
    ctx->pc = 0x2688a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x2688ac: 0x3c06003c
    ctx->pc = 0x2688acu;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x2688b0: 0x24050001
    ctx->pc = 0x2688b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2688b4: 0x3c020034
    ctx->pc = 0x2688b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2688b8: 0x2447f9f0
    ctx->pc = 0x2688b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x2688bc: 0x41080
    ctx->pc = 0x2688bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2688c0:
    // 0x2688c0: 0x501821
    ctx->pc = 0x2688c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2688c4: 0x481021
    ctx->pc = 0x2688c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2688c8: 0xc4600000
    ctx->pc = 0x2688c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2688cc: 0xc4410000
    ctx->pc = 0x2688ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2688d0: 0x46010034
    ctx->pc = 0x2688d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2688d4: 0x0
    ctx->pc = 0x2688d4u;
    // NOP
    // 0x2688d8: 0x4503000b
    ctx->pc = 0x2688D8u;
    {
        const bool branch_taken_0x2688d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2688d8) {
            ctx->pc = 0x2688DCu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->pc = 0x268908u;
            goto label_268908;
        }
    }
    ctx->pc = 0x2688E0u;
    // 0x2688e0: 0x41080
    ctx->pc = 0x2688e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2688e4: 0x501821
    ctx->pc = 0x2688e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2688e8: 0x471021
    ctx->pc = 0x2688e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2688ec: 0xc4600000
    ctx->pc = 0x2688ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2688f0: 0xc4410000
    ctx->pc = 0x2688f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2688f4: 0x46000834
    ctx->pc = 0x2688f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2688f8: 0x0
    ctx->pc = 0x2688f8u;
    // NOP
    // 0x2688fc: 0x45020004
    ctx->pc = 0x2688FCu;
    {
        const bool branch_taken_0x2688fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2688fc) {
            ctx->pc = 0x268900u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x268910u;
            goto label_268910;
        }
    }
    ctx->pc = 0x268904u;
    // 0x268904: 0xe4610000
    ctx->pc = 0x268904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_268908:
    // 0x268908: 0xacc53920
    ctx->pc = 0x268908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14624), GPR_U32(ctx, 5));
    // 0x26890c: 0x24840001
    ctx->pc = 0x26890cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_268910:
    // 0x268910: 0x28820003
    ctx->pc = 0x268910u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x268914: 0x1440ffea
    ctx->pc = 0x268914u;
    {
        const bool branch_taken_0x268914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268918u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x268914) {
            ctx->pc = 0x2688C0u;
            goto label_2688c0;
        }
    }
    ctx->pc = 0x26891Cu;
    // 0x26891c: 0x3c03003c
    ctx->pc = 0x26891cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_268920:
    // 0x268920: 0x8c62391c
    ctx->pc = 0x268920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14620)));
    // 0x268924: 0x10400020
    ctx->pc = 0x268924u;
    {
        const bool branch_taken_0x268924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268928u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x268924) {
            ctx->pc = 0x2689A8u;
            goto label_2689a8;
        }
    }
    ctx->pc = 0x26892Cu;
    // 0x26892c: 0xc6000000
    ctx->pc = 0x26892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268930: 0x46001081
    ctx->pc = 0x268930u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268934: 0xe7a20010
    ctx->pc = 0x268934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x268938: 0xc7a10004
    ctx->pc = 0x268938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26893c: 0xc6000004
    ctx->pc = 0x26893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268940: 0x460008c1
    ctx->pc = 0x268940u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268944: 0xe7a30014
    ctx->pc = 0x268944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x268948: 0xc7a10008
    ctx->pc = 0x268948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26894c: 0xc6000008
    ctx->pc = 0x26894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268950: 0x46000841
    ctx->pc = 0x268950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268954: 0x44800000
    ctx->pc = 0x268954u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268958: 0x46001032
    ctx->pc = 0x268958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26895c: 0x0
    ctx->pc = 0x26895cu;
    // NOP
    // 0x268960: 0x4500000b
    ctx->pc = 0x268960u;
    {
        const bool branch_taken_0x268960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268964u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x268960) {
            ctx->pc = 0x268990u;
            goto label_268990;
        }
    }
    ctx->pc = 0x268968u;
    // 0x268968: 0x46001832
    ctx->pc = 0x268968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26896c: 0x0
    ctx->pc = 0x26896cu;
    // NOP
    // 0x268970: 0x45020008
    ctx->pc = 0x268970u;
    {
        const bool branch_taken_0x268970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268970) {
            ctx->pc = 0x268974u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x268994u;
            goto label_268994;
        }
    }
    ctx->pc = 0x268978u;
    // 0x268978: 0x46000832
    ctx->pc = 0x268978u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26897c: 0x0
    ctx->pc = 0x26897cu;
    // NOP
    // 0x268980: 0x45000004
    ctx->pc = 0x268980u;
    {
        const bool branch_taken_0x268980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268984u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x268980) {
            ctx->pc = 0x268994u;
            goto label_268994;
        }
    }
    ctx->pc = 0x268988u;
    // 0x268988: 0x10000007
    ctx->pc = 0x268988u;
    {
        const bool branch_taken_0x268988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26898Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14620), GPR_U32(ctx, 0));
        if (branch_taken_0x268988) {
            ctx->pc = 0x2689A8u;
            goto label_2689a8;
        }
    }
    ctx->pc = 0x268990u;
label_268990:
    // 0x268990: 0xc7a00000
    ctx->pc = 0x268990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268994:
    // 0x268994: 0xe6000000
    ctx->pc = 0x268994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x268998: 0xc7a00004
    ctx->pc = 0x268998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26899c: 0xe6000004
    ctx->pc = 0x26899cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2689a0: 0xc7a00008
    ctx->pc = 0x2689a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2689a4: 0xe6000008
    ctx->pc = 0x2689a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2689a8:
    // 0x2689a8: 0x3c020031
    ctx->pc = 0x2689a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2689ac: 0x8e2300e4
    ctx->pc = 0x2689acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2689b0: 0x8c42ffbc
    ctx->pc = 0x2689b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2689b4: 0x621821
    ctx->pc = 0x2689b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2689b8: 0xae2300e4
    ctx->pc = 0x2689b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
label_2689bc:
    // 0x2689bc: 0xdfbf0070
    ctx->pc = 0x2689bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2689c0: 0xdfb10060
    ctx->pc = 0x2689c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2689c4: 0xdfb00050
    ctx->pc = 0x2689c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2689c8: 0xc7b60090
    ctx->pc = 0x2689c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2689cc: 0xc7b50088
    ctx->pc = 0x2689ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2689d0: 0xc7b40080
    ctx->pc = 0x2689d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2689d4: 0x3e00008
    ctx->pc = 0x2689D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2689D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2684A8u: goto label_2684a8;
            case 0x2684B0u: goto label_2684b0;
            case 0x2684D8u: goto label_2684d8;
            case 0x2684F0u: goto label_2684f0;
            case 0x2684F4u: goto label_2684f4;
            case 0x268524u: goto label_268524;
            case 0x268550u: goto label_268550;
            case 0x268560u: goto label_268560;
            case 0x268570u: goto label_268570;
            case 0x2685C8u: goto label_2685c8;
            case 0x2685D8u: goto label_2685d8;
            case 0x2685E8u: goto label_2685e8;
            case 0x2685F4u: goto label_2685f4;
            case 0x26865Cu: goto label_26865c;
            case 0x268664u: goto label_268664;
            case 0x268690u: goto label_268690;
            case 0x2686C8u: goto label_2686c8;
            case 0x2686F4u: goto label_2686f4;
            case 0x268704u: goto label_268704;
            case 0x268714u: goto label_268714;
            case 0x268724u: goto label_268724;
            case 0x268734u: goto label_268734;
            case 0x268744u: goto label_268744;
            case 0x268748u: goto label_268748;
            case 0x2687DCu: goto label_2687dc;
            case 0x268848u: goto label_268848;
            case 0x26884Cu: goto label_26884c;
            case 0x2688C0u: goto label_2688c0;
            case 0x268908u: goto label_268908;
            case 0x268910u: goto label_268910;
            case 0x268920u: goto label_268920;
            case 0x268990u: goto label_268990;
            case 0x268994u: goto label_268994;
            case 0x2689A8u: goto label_2689a8;
            case 0x2689BCu: goto label_2689bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2689DCu;
}
