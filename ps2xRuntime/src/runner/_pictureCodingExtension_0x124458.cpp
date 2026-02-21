#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureCodingExtension
// Address: 0x124458 - 0x124684
void _pictureCodingExtension_0x124458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124458u;

    // 0x124458: 0x27bdffb0
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12445c: 0x3c020017
    ctx->pc = 0x12445cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x124460: 0xffb20020
    ctx->pc = 0x124460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124464: 0x24040004
    ctx->pc = 0x124464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x124468: 0xffb10010
    ctx->pc = 0x124468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12446c: 0x3c120017
    ctx->pc = 0x12446cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
    // 0x124470: 0xffb00000
    ctx->pc = 0x124470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124474: 0x3c110017
    ctx->pc = 0x124474u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124478: 0xffbf0040
    ctx->pc = 0x124478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12447c: 0x8c4317bc
    ctx->pc = 0x12447cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x124480: 0xffb30030
    ctx->pc = 0x124480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x124484: 0xc048fdc
    ctx->pc = 0x124484u;
    SET_GPR_U32(ctx, 31, 0x12448Cu);
    ctx->pc = 0x124488u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12448Cu; }
    }
    if (ctx->pc != 0x12448Cu) { return; }
    ctx->pc = 0x12448Cu;
    // 0x12448c: 0x3c100017
    ctx->pc = 0x12448cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124490: 0x24040004
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x124494: 0xae021998
    ctx->pc = 0x124494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 2));
    // 0x124498: 0xc048fdc
    ctx->pc = 0x124498u;
    SET_GPR_U32(ctx, 31, 0x1244A0u);
    ctx->pc = 0x12449Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6552));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244A0u; }
    }
    if (ctx->pc != 0x1244A0u) { return; }
    ctx->pc = 0x1244A0u;
    // 0x1244a0: 0xae020004
    ctx->pc = 0x1244a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1244a4: 0xc048fdc
    ctx->pc = 0x1244A4u;
    SET_GPR_U32(ctx, 31, 0x1244ACu);
    ctx->pc = 0x1244A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244ACu; }
    }
    if (ctx->pc != 0x1244ACu) { return; }
    ctx->pc = 0x1244ACu;
    // 0x1244ac: 0xae020008
    ctx->pc = 0x1244acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1244b0: 0xc048fdc
    ctx->pc = 0x1244B0u;
    SET_GPR_U32(ctx, 31, 0x1244B8u);
    ctx->pc = 0x1244B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244B8u; }
    }
    if (ctx->pc != 0x1244B8u) { return; }
    ctx->pc = 0x1244B8u;
    // 0x1244b8: 0xae02000c
    ctx->pc = 0x1244b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1244bc: 0xc048fdc
    ctx->pc = 0x1244BCu;
    SET_GPR_U32(ctx, 31, 0x1244C4u);
    ctx->pc = 0x1244C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244C4u; }
    }
    if (ctx->pc != 0x1244C4u) { return; }
    ctx->pc = 0x1244C4u;
    // 0x1244c4: 0xae2219a8
    ctx->pc = 0x1244c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6568), GPR_U32(ctx, 2));
    // 0x1244c8: 0x3c061000
    ctx->pc = 0x1244c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1244cc: 0x34c62010
    ctx->pc = 0x1244ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8208));
    // 0x1244d0: 0x3c05fffc
    ctx->pc = 0x1244d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65532 << 16));
    // 0x1244d4: 0x8cc30000
    ctx->pc = 0x1244d4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x1244d8: 0x34a5ffff
    ctx->pc = 0x1244d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x1244dc: 0x21400
    ctx->pc = 0x1244dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1244e0: 0x24040002
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1244e4: 0x651824
    ctx->pc = 0x1244e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1244e8: 0x621825
    ctx->pc = 0x1244e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1244ec: 0xc048fdc
    ctx->pc = 0x1244ECu;
    SET_GPR_U32(ctx, 31, 0x1244F4u);
    ctx->pc = 0x1244F0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244F4u; }
    }
    if (ctx->pc != 0x1244F4u) { return; }
    ctx->pc = 0x1244F4u;
    // 0x1244f4: 0x40182d
    ctx->pc = 0x1244f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244f8: 0x8e6200d4
    ctx->pc = 0x1244f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x1244fc: 0x14400002
    ctx->pc = 0x1244FCu;
    {
        const bool branch_taken_0x1244fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x124500u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 6572), GPR_U32(ctx, 3));
        if (branch_taken_0x1244fc) {
            ctx->pc = 0x124508u;
            goto label_124508;
        }
    }
    ctx->pc = 0x124504u;
    // 0x124504: 0xae6300d4
    ctx->pc = 0x124504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 3));
label_124508:
    // 0x124508: 0x24040001
    ctx->pc = 0x124508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12450c: 0xc048fdc
    ctx->pc = 0x12450Cu;
    SET_GPR_U32(ctx, 31, 0x124514u);
    ctx->pc = 0x124510u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124514u; }
    }
    if (ctx->pc != 0x124514u) { return; }
    ctx->pc = 0x124514u;
    // 0x124514: 0x3c110017
    ctx->pc = 0x124514u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124518: 0xae0219b0
    ctx->pc = 0x124518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6576), GPR_U32(ctx, 2));
    // 0x12451c: 0xc048fdc
    ctx->pc = 0x12451Cu;
    SET_GPR_U32(ctx, 31, 0x124524u);
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124524u; }
    }
    if (ctx->pc != 0x124524u) { return; }
    ctx->pc = 0x124524u;
    // 0x124524: 0x3c100017
    ctx->pc = 0x124524u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124528: 0xae2219b4
    ctx->pc = 0x124528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6580), GPR_U32(ctx, 2));
    // 0x12452c: 0xc048fdc
    ctx->pc = 0x12452Cu;
    SET_GPR_U32(ctx, 31, 0x124534u);
    ctx->pc = 0x124530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124534u; }
    }
    if (ctx->pc != 0x124534u) { return; }
    ctx->pc = 0x124534u;
    // 0x124534: 0x3c110017
    ctx->pc = 0x124534u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124538: 0xae0219b8
    ctx->pc = 0x124538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6584), GPR_U32(ctx, 2));
    // 0x12453c: 0xc048fdc
    ctx->pc = 0x12453Cu;
    SET_GPR_U32(ctx, 31, 0x124544u);
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124544u; }
    }
    if (ctx->pc != 0x124544u) { return; }
    ctx->pc = 0x124544u;
    // 0x124544: 0x3c100017
    ctx->pc = 0x124544u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124548: 0x3c051000
    ctx->pc = 0x124548u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x12454c: 0x8ca52010
    ctx->pc = 0x12454cu;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x124550: 0x3c03ffbf
    ctx->pc = 0x124550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65471 << 16));
    // 0x124554: 0x3463ffff
    ctx->pc = 0x124554u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x124558: 0x22580
    ctx->pc = 0x124558u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 22));
    // 0x12455c: 0xa32824
    ctx->pc = 0x12455cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x124560: 0xae2220b4
    ctx->pc = 0x124560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8372), GPR_U32(ctx, 2));
    // 0x124564: 0xa42825
    ctx->pc = 0x124564u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x124568: 0x3c120017
    ctx->pc = 0x124568u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
    // 0x12456c: 0x3c011000
    ctx->pc = 0x12456cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x124570: 0xac252010
    ctx->pc = 0x124570u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x124574: 0xc048fdc
    ctx->pc = 0x124574u;
    SET_GPR_U32(ctx, 31, 0x12457Cu);
    ctx->pc = 0x124578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12457Cu; }
    }
    if (ctx->pc != 0x12457Cu) { return; }
    ctx->pc = 0x12457Cu;
    // 0x12457c: 0x3c110017
    ctx->pc = 0x12457cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124580: 0x3c051000
    ctx->pc = 0x124580u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x124584: 0x8ca52010
    ctx->pc = 0x124584u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x124588: 0x3c03ffdf
    ctx->pc = 0x124588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65503 << 16));
    // 0x12458c: 0x3463ffff
    ctx->pc = 0x12458cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x124590: 0x22540
    ctx->pc = 0x124590u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 21));
    // 0x124594: 0xa32824
    ctx->pc = 0x124594u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x124598: 0xae0219bc
    ctx->pc = 0x124598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6588), GPR_U32(ctx, 2));
    // 0x12459c: 0xa42825
    ctx->pc = 0x12459cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1245a0: 0x3c100017
    ctx->pc = 0x1245a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x1245a4: 0x3c011000
    ctx->pc = 0x1245a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1245a8: 0xac252010
    ctx->pc = 0x1245a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x1245ac: 0xc048fdc
    ctx->pc = 0x1245ACu;
    SET_GPR_U32(ctx, 31, 0x1245B4u);
    ctx->pc = 0x1245B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1245B4u; }
    }
    if (ctx->pc != 0x1245B4u) { return; }
    ctx->pc = 0x1245B4u;
    // 0x1245b4: 0x3c051000
    ctx->pc = 0x1245b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1245b8: 0x8ca52010
    ctx->pc = 0x1245b8u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x1245bc: 0x3c03ffef
    ctx->pc = 0x1245bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65519 << 16));
    // 0x1245c0: 0x3463ffff
    ctx->pc = 0x1245c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1245c4: 0x22500
    ctx->pc = 0x1245c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 20));
    // 0x1245c8: 0xa32824
    ctx->pc = 0x1245c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1245cc: 0xae4220b8
    ctx->pc = 0x1245ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8376), GPR_U32(ctx, 2));
    // 0x1245d0: 0xa42825
    ctx->pc = 0x1245d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1245d4: 0x3c011000
    ctx->pc = 0x1245d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1245d8: 0xac252010
    ctx->pc = 0x1245d8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x1245dc: 0xc048fdc
    ctx->pc = 0x1245DCu;
    SET_GPR_U32(ctx, 31, 0x1245E4u);
    ctx->pc = 0x1245E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1245E4u; }
    }
    if (ctx->pc != 0x1245E4u) { return; }
    ctx->pc = 0x1245E4u;
    // 0x1245e4: 0xae2219c0
    ctx->pc = 0x1245e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6592), GPR_U32(ctx, 2));
    // 0x1245e8: 0xc048fdc
    ctx->pc = 0x1245E8u;
    SET_GPR_U32(ctx, 31, 0x1245F0u);
    ctx->pc = 0x1245ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1245F0u; }
    }
    if (ctx->pc != 0x1245F0u) { return; }
    ctx->pc = 0x1245F0u;
    // 0x1245f0: 0x3c110017
    ctx->pc = 0x1245f0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1245f4: 0xae0219c4
    ctx->pc = 0x1245f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6596), GPR_U32(ctx, 2));
    // 0x1245f8: 0xc048fdc
    ctx->pc = 0x1245F8u;
    SET_GPR_U32(ctx, 31, 0x124600u);
    ctx->pc = 0x1245FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124600u; }
    }
    if (ctx->pc != 0x124600u) { return; }
    ctx->pc = 0x124600u;
    // 0x124600: 0x3c100017
    ctx->pc = 0x124600u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124604: 0xae2219c8
    ctx->pc = 0x124604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6600), GPR_U32(ctx, 2));
    // 0x124608: 0xc048fdc
    ctx->pc = 0x124608u;
    SET_GPR_U32(ctx, 31, 0x124610u);
    ctx->pc = 0x12460Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124610u; }
    }
    if (ctx->pc != 0x124610u) { return; }
    ctx->pc = 0x124610u;
    // 0x124610: 0x10400015
    ctx->pc = 0x124610u;
    {
        const bool branch_taken_0x124610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124614u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6604), GPR_U32(ctx, 2));
        if (branch_taken_0x124610) {
            ctx->pc = 0x124668u;
            goto label_124668;
        }
    }
    ctx->pc = 0x124618u;
    // 0x124618: 0x24040001
    ctx->pc = 0x124618u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12461c: 0xc048fdc
    ctx->pc = 0x12461Cu;
    SET_GPR_U32(ctx, 31, 0x124624u);
    ctx->pc = 0x124620u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124624u; }
    }
    if (ctx->pc != 0x124624u) { return; }
    ctx->pc = 0x124624u;
    // 0x124624: 0x3c110017
    ctx->pc = 0x124624u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124628: 0xae0219d0
    ctx->pc = 0x124628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6608), GPR_U32(ctx, 2));
    // 0x12462c: 0xc048fdc
    ctx->pc = 0x12462Cu;
    SET_GPR_U32(ctx, 31, 0x124634u);
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124634u; }
    }
    if (ctx->pc != 0x124634u) { return; }
    ctx->pc = 0x124634u;
    // 0x124634: 0x3c100017
    ctx->pc = 0x124634u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124638: 0xae2219d4
    ctx->pc = 0x124638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6612), GPR_U32(ctx, 2));
    // 0x12463c: 0xc048fdc
    ctx->pc = 0x12463Cu;
    SET_GPR_U32(ctx, 31, 0x124644u);
    ctx->pc = 0x124640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124644u; }
    }
    if (ctx->pc != 0x124644u) { return; }
    ctx->pc = 0x124644u;
    // 0x124644: 0x3c110017
    ctx->pc = 0x124644u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124648: 0xae0219d8
    ctx->pc = 0x124648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6616), GPR_U32(ctx, 2));
    // 0x12464c: 0xc048fdc
    ctx->pc = 0x12464Cu;
    SET_GPR_U32(ctx, 31, 0x124654u);
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124654u; }
    }
    if (ctx->pc != 0x124654u) { return; }
    ctx->pc = 0x124654u;
    // 0x124654: 0x3c100017
    ctx->pc = 0x124654u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124658: 0xae2219dc
    ctx->pc = 0x124658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6620), GPR_U32(ctx, 2));
    // 0x12465c: 0xc048fdc
    ctx->pc = 0x12465Cu;
    SET_GPR_U32(ctx, 31, 0x124664u);
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124664u; }
    }
    if (ctx->pc != 0x124664u) { return; }
    ctx->pc = 0x124664u;
    // 0x124664: 0xae0219e0
    ctx->pc = 0x124664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6624), GPR_U32(ctx, 2));
label_124668:
    // 0x124668: 0xdfbf0040
    ctx->pc = 0x124668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12466c: 0xdfb30030
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124670: 0xdfb20020
    ctx->pc = 0x124670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124674: 0xdfb10010
    ctx->pc = 0x124674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124678: 0xdfb00000
    ctx->pc = 0x124678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12467c: 0x3e00008
    ctx->pc = 0x12467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124508u: goto label_124508;
            case 0x124668u: goto label_124668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124684u;
}
