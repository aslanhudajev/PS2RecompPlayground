#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTimestopSound
// Address: 0x25d4e8 - 0x25d734
void DoTimestopSound_0x25d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d4e8u;

    // 0x25d4e8: 0x27bdffb0
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25d4ec: 0xffbf0040
    ctx->pc = 0x25d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25d4f0: 0xffb30030
    ctx->pc = 0x25d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25d4f4: 0xffb20020
    ctx->pc = 0x25d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d4f8: 0xffb10010
    ctx->pc = 0x25d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d4fc: 0xffb00000
    ctx->pc = 0x25d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d500: 0x882d
    ctx->pc = 0x25d500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d504: 0x902d
    ctx->pc = 0x25d504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d508: 0x3c020032
    ctx->pc = 0x25d508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d50c: 0x24461bc0
    ctx->pc = 0x25d50cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25d510: 0x24052b00
    ctx->pc = 0x25d510u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25d514: 0x3c130033
    ctx->pc = 0x25d514u;
    SET_GPR_U32(ctx, 19, ((uint32_t)51 << 16));
    // 0x25d518: 0x2451018
    ctx->pc = 0x25d518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25d51c: 0x0
    ctx->pc = 0x25d51cu;
    // NOP
label_25d520:
    // 0x25d520: 0x462021
    ctx->pc = 0x25d520u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25d524: 0x8c8300fc
    ctx->pc = 0x25d524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x25d528: 0x24020001
    ctx->pc = 0x25d528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d52c: 0x5462002c
    ctx->pc = 0x25D52Cu;
    {
        const bool branch_taken_0x25d52c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25d52c) {
            ctx->pc = 0x25D530u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25D5E0u;
            goto label_25d5e0;
        }
    }
    ctx->pc = 0x25D534u;
    // 0x25d534: 0x84820938
    ctx->pc = 0x25d534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2360)));
    // 0x25d538: 0x10400028
    ctx->pc = 0x25D538u;
    {
        const bool branch_taken_0x25d538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D53Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d538) {
            ctx->pc = 0x25D5DCu;
            goto label_25d5dc;
        }
    }
    ctx->pc = 0x25D540u;
    // 0x25d540: 0x3c020032
    ctx->pc = 0x25d540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d544: 0x24510898
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x25d548: 0x101080
    ctx->pc = 0x25d548u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25d54c: 0x0
    ctx->pc = 0x25d54cu;
    // NOP
label_25d550:
    // 0x25d550: 0x511021
    ctx->pc = 0x25d550u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25d554: 0x8c440000
    ctx->pc = 0x25d554u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d558: 0x50800004
    ctx->pc = 0x25D558u;
    {
        const bool branch_taken_0x25d558 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x25d558) {
            ctx->pc = 0x25D55Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x25D56Cu;
            goto label_25d56c;
        }
    }
    ctx->pc = 0x25D560u;
    // 0x25d560: 0xc0b0ce8
    ctx->pc = 0x25D560u;
    SET_GPR_U32(ctx, 31, 0x25D568u);
    ctx->pc = 0x25D564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D568u; }
    }
    if (ctx->pc != 0x25D568u) { return; }
    ctx->pc = 0x25D568u;
    // 0x25d568: 0x26100001
    ctx->pc = 0x25d568u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_25d56c:
    // 0x25d56c: 0x2a020004
    ctx->pc = 0x25d56cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x25d570: 0x1440fff7
    ctx->pc = 0x25D570u;
    {
        const bool branch_taken_0x25d570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D574u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x25d570) {
            ctx->pc = 0x25D550u;
            goto label_25d550;
        }
    }
    ctx->pc = 0x25D578u;
    // 0x25d578: 0x802d
    ctx->pc = 0x25d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d57c: 0x3c020032
    ctx->pc = 0x25d57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d580: 0x24461bc0
    ctx->pc = 0x25d580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25d584: 0x24022b00
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25d588: 0x2422018
    ctx->pc = 0x25d588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25d58c: 0x3c020032
    ctx->pc = 0x25d58cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d590: 0x24451d10
    ctx->pc = 0x25d590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7440));
    // 0x25d594: 0x101100
    ctx->pc = 0x25d594u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
label_25d598:
    // 0x25d598: 0x441821
    ctx->pc = 0x25d598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25d59c: 0x651021
    ctx->pc = 0x25d59cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25d5a0: 0x8c420000
    ctx->pc = 0x25d5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d5a4: 0x30420008
    ctx->pc = 0x25d5a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x25d5a8: 0x14400006
    ctx->pc = 0x25D5A8u;
    {
        const bool branch_taken_0x25d5a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D5ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x25d5a8) {
            ctx->pc = 0x25D5C4u;
            goto label_25d5c4;
        }
    }
    ctx->pc = 0x25D5B0u;
    // 0x25d5b0: 0x2a020008
    ctx->pc = 0x25d5b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x25d5b4: 0x1440fff8
    ctx->pc = 0x25D5B4u;
    {
        const bool branch_taken_0x25d5b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D5B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x25d5b4) {
            ctx->pc = 0x25D598u;
            goto label_25d598;
        }
    }
    ctx->pc = 0x25D5BCu;
    // 0x25d5bc: 0x1000000b
    ctx->pc = 0x25D5BCu;
    {
        const bool branch_taken_0x25d5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D5C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25d5bc) {
            ctx->pc = 0x25D5ECu;
            goto label_25d5ec;
        }
    }
    ctx->pc = 0x25D5C4u;
label_25d5c4:
    // 0x25d5c4: 0xc31021
    ctx->pc = 0x25d5c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25d5c8: 0xc66ccb68
    ctx->pc = 0x25d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294953832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d5cc: 0xc08934c
    ctx->pc = 0x25D5CCu;
    SET_GPR_U32(ctx, 31, 0x25D5D4u);
    ctx->pc = 0x25D5D0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x224D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_sandglass_0x224d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D5D4u; }
    }
    if (ctx->pc != 0x25D5D4u) { return; }
    ctx->pc = 0x25D5D4u;
    // 0x25d5d4: 0x10000005
    ctx->pc = 0x25D5D4u;
    {
        const bool branch_taken_0x25d5d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D5D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25d5d4) {
            ctx->pc = 0x25D5ECu;
            goto label_25d5ec;
        }
    }
    ctx->pc = 0x25D5DCu;
label_25d5dc:
    // 0x25d5dc: 0x26520001
    ctx->pc = 0x25d5dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_25d5e0:
    // 0x25d5e0: 0x2a420004
    ctx->pc = 0x25d5e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x25d5e4: 0x1440ffce
    ctx->pc = 0x25D5E4u;
    {
        const bool branch_taken_0x25d5e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D5E8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25d5e4) {
            ctx->pc = 0x25D520u;
            goto label_25d520;
        }
    }
    ctx->pc = 0x25D5ECu;
label_25d5ec:
    // 0x25d5ec: 0x12200031
    ctx->pc = 0x25D5ECu;
    {
        const bool branch_taken_0x25d5ec = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D5F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25d5ec) {
            ctx->pc = 0x25D6B4u;
            goto label_25d6b4;
        }
    }
    ctx->pc = 0x25D5F4u;
    // 0x25d5f4: 0xc08878c
    ctx->pc = 0x25D5F4u;
    SET_GPR_U32(ctx, 31, 0x25D5FCu);
    ctx->pc = 0x25D5F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 83));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D5FCu; }
    }
    if (ctx->pc != 0x25D5FCu) { return; }
    ctx->pc = 0x25D5FCu;
    // 0x25d5fc: 0x14400013
    ctx->pc = 0x25D5FCu;
    {
        const bool branch_taken_0x25d5fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25d5fc) {
            ctx->pc = 0x25D64Cu;
            goto label_25d64c;
        }
    }
    ctx->pc = 0x25D604u;
    // 0x25d604: 0x16220008
    ctx->pc = 0x25D604u;
    {
        const bool branch_taken_0x25d604 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x25D608u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x25d604) {
            ctx->pc = 0x25D628u;
            goto label_25d628;
        }
    }
    ctx->pc = 0x25D60Cu;
    // 0x25d60c: 0x24040053
    ctx->pc = 0x25d60cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 83));
    // 0x25d610: 0x282d
    ctx->pc = 0x25d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d614: 0x2406007f
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d618: 0xc088aa2
    ctx->pc = 0x25D618u;
    SET_GPR_U32(ctx, 31, 0x25D620u);
    ctx->pc = 0x25D61Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 113));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D620u; }
    }
    if (ctx->pc != 0x25D620u) { return; }
    ctx->pc = 0x25D620u;
    // 0x25d620: 0x1000000a
    ctx->pc = 0x25D620u;
    {
        const bool branch_taken_0x25d620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25d620) {
            ctx->pc = 0x25D64Cu;
            goto label_25d64c;
        }
    }
    ctx->pc = 0x25D628u;
label_25d628:
    // 0x25d628: 0x2452818
    ctx->pc = 0x25d628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25d62c: 0x3c020032
    ctx->pc = 0x25d62cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d630: 0x24421be0
    ctx->pc = 0x25d630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25d634: 0xa22821
    ctx->pc = 0x25d634u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25d638: 0x24040053
    ctx->pc = 0x25d638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 83));
    // 0x25d63c: 0x24a50040
    ctx->pc = 0x25d63cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25d640: 0x2406007f
    ctx->pc = 0x25d640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d644: 0xc088aa2
    ctx->pc = 0x25D644u;
    SET_GPR_U32(ctx, 31, 0x25D64Cu);
    ctx->pc = 0x25D648u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 113));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D64Cu; }
    }
    if (ctx->pc != 0x25D64Cu) { return; }
    ctx->pc = 0x25D64Cu;
label_25d64c:
    // 0x25d64c: 0xc0887e4
    ctx->pc = 0x25D64Cu;
    SET_GPR_U32(ctx, 31, 0x25D654u);
    ctx->pc = 0x25D650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 113));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D654u; }
    }
    if (ctx->pc != 0x25D654u) { return; }
    ctx->pc = 0x25D654u;
    // 0x25d654: 0x40802d
    ctx->pc = 0x25d654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d658: 0x1200002f
    ctx->pc = 0x25D658u;
    {
        const bool branch_taken_0x25d658 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D65Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25d658) {
            ctx->pc = 0x25D718u;
            goto label_25d718;
        }
    }
    ctx->pc = 0x25D660u;
    // 0x25d660: 0x16220005
    ctx->pc = 0x25D660u;
    {
        const bool branch_taken_0x25d660 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x25D664u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x25d660) {
            ctx->pc = 0x25D678u;
            goto label_25d678;
        }
    }
    ctx->pc = 0x25D668u;
    // 0x25d668: 0xc088648
    ctx->pc = 0x25D668u;
    SET_GPR_U32(ctx, 31, 0x25D670u);
    ctx->pc = 0x25D66Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D670u; }
    }
    if (ctx->pc != 0x25D670u) { return; }
    ctx->pc = 0x25D670u;
    // 0x25d670: 0x10000008
    ctx->pc = 0x25D670u;
    {
        const bool branch_taken_0x25d670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D674u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d670) {
            ctx->pc = 0x25D694u;
            goto label_25d694;
        }
    }
    ctx->pc = 0x25D678u;
label_25d678:
    // 0x25d678: 0x2442018
    ctx->pc = 0x25d678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25d67c: 0x3c020032
    ctx->pc = 0x25d67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d680: 0x24421be0
    ctx->pc = 0x25d680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25d684: 0x822021
    ctx->pc = 0x25d684u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25d688: 0xc088648
    ctx->pc = 0x25D688u;
    SET_GPR_U32(ctx, 31, 0x25D690u);
    ctx->pc = 0x25D68Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D690u; }
    }
    if (ctx->pc != 0x25D690u) { return; }
    ctx->pc = 0x25D690u;
    // 0x25d690: 0x200202d
    ctx->pc = 0x25d690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d694:
    // 0x25d694: 0x40282d
    ctx->pc = 0x25d694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d698: 0xdfbf0040
    ctx->pc = 0x25d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d69c: 0xdfb30030
    ctx->pc = 0x25d69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d6a0: 0xdfb20020
    ctx->pc = 0x25d6a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d6a4: 0xdfb10010
    ctx->pc = 0x25d6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d6a8: 0xdfb00000
    ctx->pc = 0x25d6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d6ac: 0x8088850
    ctx->pc = 0x25D6ACu;
    ctx->pc = 0x25D6B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x25D6B4u;
label_25d6b4:
    // 0x25d6b4: 0x8c43e7f0
    ctx->pc = 0x25d6b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25d6b8: 0x2402000c
    ctx->pc = 0x25d6b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x25d6bc: 0x1062000e
    ctx->pc = 0x25D6BCu;
    {
        const bool branch_taken_0x25d6bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25D6C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d6bc) {
            ctx->pc = 0x25D6F8u;
            goto label_25d6f8;
        }
    }
    ctx->pc = 0x25D6C4u;
    // 0x25d6c4: 0x3c020032
    ctx->pc = 0x25d6c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d6c8: 0x24510898
    ctx->pc = 0x25d6c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x25d6cc: 0x101080
    ctx->pc = 0x25d6ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_25d6d0:
    // 0x25d6d0: 0x511021
    ctx->pc = 0x25d6d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25d6d4: 0x8c440000
    ctx->pc = 0x25d6d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d6d8: 0x50800004
    ctx->pc = 0x25D6D8u;
    {
        const bool branch_taken_0x25d6d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x25d6d8) {
            ctx->pc = 0x25D6DCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x25D6ECu;
            goto label_25d6ec;
        }
    }
    ctx->pc = 0x25D6E0u;
    // 0x25d6e0: 0xc0b0ce8
    ctx->pc = 0x25D6E0u;
    SET_GPR_U32(ctx, 31, 0x25D6E8u);
    ctx->pc = 0x25D6E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D6E8u; }
    }
    if (ctx->pc != 0x25D6E8u) { return; }
    ctx->pc = 0x25D6E8u;
    // 0x25d6e8: 0x26100001
    ctx->pc = 0x25d6e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_25d6ec:
    // 0x25d6ec: 0x2a020004
    ctx->pc = 0x25d6ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x25d6f0: 0x1440fff7
    ctx->pc = 0x25D6F0u;
    {
        const bool branch_taken_0x25d6f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D6F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x25d6f0) {
            ctx->pc = 0x25D6D0u;
            goto label_25d6d0;
        }
    }
    ctx->pc = 0x25D6F8u;
label_25d6f8:
    // 0x25d6f8: 0x24040053
    ctx->pc = 0x25d6f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 83));
    // 0x25d6fc: 0xdfbf0040
    ctx->pc = 0x25d6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d700: 0xdfb30030
    ctx->pc = 0x25d700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d704: 0xdfb20020
    ctx->pc = 0x25d704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d708: 0xdfb10010
    ctx->pc = 0x25d708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d70c: 0xdfb00000
    ctx->pc = 0x25d70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d710: 0x808870e
    ctx->pc = 0x25D710u;
    ctx->pc = 0x25D714u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x221C38u;
    AudioSoundKill_0x221c38(rdram, ctx, runtime); return;
    ctx->pc = 0x25D718u;
label_25d718:
    // 0x25d718: 0xdfbf0040
    ctx->pc = 0x25d718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d71c: 0xdfb30030
    ctx->pc = 0x25d71cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d720: 0xdfb20020
    ctx->pc = 0x25d720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d724: 0xdfb10010
    ctx->pc = 0x25d724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d728: 0xdfb00000
    ctx->pc = 0x25d728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d72c: 0x3e00008
    ctx->pc = 0x25D72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D520u: goto label_25d520;
            case 0x25D550u: goto label_25d550;
            case 0x25D56Cu: goto label_25d56c;
            case 0x25D598u: goto label_25d598;
            case 0x25D5C4u: goto label_25d5c4;
            case 0x25D5DCu: goto label_25d5dc;
            case 0x25D5E0u: goto label_25d5e0;
            case 0x25D5ECu: goto label_25d5ec;
            case 0x25D628u: goto label_25d628;
            case 0x25D64Cu: goto label_25d64c;
            case 0x25D678u: goto label_25d678;
            case 0x25D694u: goto label_25d694;
            case 0x25D6B4u: goto label_25d6b4;
            case 0x25D6D0u: goto label_25d6d0;
            case 0x25D6ECu: goto label_25d6ec;
            case 0x25D6F8u: goto label_25d6f8;
            case 0x25D718u: goto label_25d718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D734u;
}
