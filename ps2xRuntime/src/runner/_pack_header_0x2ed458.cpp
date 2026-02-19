#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pack_header
// Address: 0x2ed458 - 0x2ed5a8
void _pack_header_0x2ed458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ed458u;

    // 0x2ed458: 0x27bdff80
    ctx->pc = 0x2ed458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ed45c: 0xffb60060
    ctx->pc = 0x2ed45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ed460: 0xffb30030
    ctx->pc = 0x2ed460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ed464: 0xa0b02d
    ctx->pc = 0x2ed464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed468: 0x80982d
    ctx->pc = 0x2ed468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed46c: 0xffb50050
    ctx->pc = 0x2ed46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ed470: 0xffb40040
    ctx->pc = 0x2ed470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ed474: 0xffb20020
    ctx->pc = 0x2ed474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ed478: 0x24050022
    ctx->pc = 0x2ed478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ed47c: 0xffb10010
    ctx->pc = 0x2ed47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ed480: 0xffb00000
    ctx->pc = 0x2ed480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed484: 0xffbf0070
    ctx->pc = 0x2ed484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ed488: 0xc0bd19e
    ctx->pc = 0x2ED488u;
    SET_GPR_U32(ctx, 31, 0x2ED490u);
    ctx->pc = 0x2ED48Cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED490u; }
    }
    if (ctx->pc != 0x2ED490u) { return; }
    ctx->pc = 0x2ED490u;
    // 0x2ed490: 0x260202d
    ctx->pc = 0x2ed490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed494: 0xc0bd19e
    ctx->pc = 0x2ED494u;
    SET_GPR_U32(ctx, 31, 0x2ED49Cu);
    ctx->pc = 0x2ED498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED49Cu; }
    }
    if (ctx->pc != 0x2ED49Cu) { return; }
    ctx->pc = 0x2ED49Cu;
    // 0x2ed49c: 0x40802d
    ctx->pc = 0x2ed49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4a0: 0xc0bd1b2
    ctx->pc = 0x2ED4A0u;
    SET_GPR_U32(ctx, 31, 0x2ED4A8u);
    ctx->pc = 0x2ED4A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4A8u; }
    }
    if (ctx->pc != 0x2ED4A8u) { return; }
    ctx->pc = 0x2ED4A8u;
    // 0x2ed4a8: 0x260202d
    ctx->pc = 0x2ed4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4ac: 0xc0bd19e
    ctx->pc = 0x2ED4ACu;
    SET_GPR_U32(ctx, 31, 0x2ED4B4u);
    ctx->pc = 0x2ED4B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4B4u; }
    }
    if (ctx->pc != 0x2ED4B4u) { return; }
    ctx->pc = 0x2ED4B4u;
    // 0x2ed4b4: 0x40882d
    ctx->pc = 0x2ed4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4b8: 0xc0bd1b2
    ctx->pc = 0x2ED4B8u;
    SET_GPR_U32(ctx, 31, 0x2ED4C0u);
    ctx->pc = 0x2ED4BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4C0u; }
    }
    if (ctx->pc != 0x2ED4C0u) { return; }
    ctx->pc = 0x2ED4C0u;
    // 0x2ed4c0: 0x260202d
    ctx->pc = 0x2ed4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4c4: 0xc0bd19e
    ctx->pc = 0x2ED4C4u;
    SET_GPR_U32(ctx, 31, 0x2ED4CCu);
    ctx->pc = 0x2ED4C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4CCu; }
    }
    if (ctx->pc != 0x2ED4CCu) { return; }
    ctx->pc = 0x2ED4CCu;
    // 0x2ed4cc: 0x40902d
    ctx->pc = 0x2ed4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4d0: 0xc0bd1b2
    ctx->pc = 0x2ED4D0u;
    SET_GPR_U32(ctx, 31, 0x2ED4D8u);
    ctx->pc = 0x2ED4D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4D8u; }
    }
    if (ctx->pc != 0x2ED4D8u) { return; }
    ctx->pc = 0x2ED4D8u;
    // 0x2ed4d8: 0x260202d
    ctx->pc = 0x2ed4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4dc: 0xc0bd19e
    ctx->pc = 0x2ED4DCu;
    SET_GPR_U32(ctx, 31, 0x2ED4E4u);
    ctx->pc = 0x2ED4E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4E4u; }
    }
    if (ctx->pc != 0x2ED4E4u) { return; }
    ctx->pc = 0x2ED4E4u;
    // 0x2ed4e4: 0xaec20000
    ctx->pc = 0x2ed4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2ed4e8: 0x260202d
    ctx->pc = 0x2ed4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4ec: 0xc0bd19e
    ctx->pc = 0x2ED4ECu;
    SET_GPR_U32(ctx, 31, 0x2ED4F4u);
    ctx->pc = 0x2ED4F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4F4u; }
    }
    if (ctx->pc != 0x2ED4F4u) { return; }
    ctx->pc = 0x2ED4F4u;
    // 0x2ed4f4: 0x260202d
    ctx->pc = 0x2ed4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4f8: 0xc0bd19e
    ctx->pc = 0x2ED4F8u;
    SET_GPR_U32(ctx, 31, 0x2ED500u);
    ctx->pc = 0x2ED4FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED500u; }
    }
    if (ctx->pc != 0x2ED500u) { return; }
    ctx->pc = 0x2ED500u;
    // 0x2ed500: 0x40a02d
    ctx->pc = 0x2ed500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed504: 0x118bc0
    ctx->pc = 0x2ed504u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x2ed508: 0x101780
    ctx->pc = 0x2ed508u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x2ed50c: 0x108082
    ctx->pc = 0x2ed50cu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x2ed510: 0x511025
    ctx->pc = 0x2ed510u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ed514: 0x32100001
    ctx->pc = 0x2ed514u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x2ed518: 0x521025
    ctx->pc = 0x2ed518u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ed51c: 0xaed00008
    ctx->pc = 0x2ed51cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x2ed520: 0x12800009
    ctx->pc = 0x2ED520u;
    {
        const bool branch_taken_0x2ed520 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED524u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2ed520) {
            ctx->pc = 0x2ED548u;
            goto label_2ed548;
        }
    }
    ctx->pc = 0x2ED528u;
    // 0x2ed528: 0x260202d
    ctx->pc = 0x2ed528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed52c: 0x0
    ctx->pc = 0x2ed52cu;
    // NOP
label_2ed530:
    // 0x2ed530: 0xc0bd19e
    ctx->pc = 0x2ED530u;
    SET_GPR_U32(ctx, 31, 0x2ED538u);
    ctx->pc = 0x2ED534u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED538u; }
    }
    if (ctx->pc != 0x2ED538u) { return; }
    ctx->pc = 0x2ED538u;
    // 0x2ed538: 0x26b50001
    ctx->pc = 0x2ed538u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ed53c: 0x2b4102b
    ctx->pc = 0x2ed53cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2ed540: 0x1440fffb
    ctx->pc = 0x2ED540u;
    {
        const bool branch_taken_0x2ed540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ED544u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed540) {
            ctx->pc = 0x2ED530u;
            goto label_2ed530;
        }
    }
    ctx->pc = 0x2ED548u;
label_2ed548:
    // 0x2ed548: 0x260202d
    ctx->pc = 0x2ed548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed54c: 0xc0bd170
    ctx->pc = 0x2ED54Cu;
    SET_GPR_U32(ctx, 31, 0x2ED554u);
    ctx->pc = 0x2ED550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F45C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x2f45c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED554u; }
    }
    if (ctx->pc != 0x2ED554u) { return; }
    ctx->pc = 0x2ED554u;
    // 0x2ed554: 0x240301bb
    ctx->pc = 0x2ed554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 443));
    // 0x2ed558: 0x54430008
    ctx->pc = 0x2ED558u;
    {
        const bool branch_taken_0x2ed558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2ed558) {
            ctx->pc = 0x2ED55Cu;
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x2ED57Cu;
            goto label_2ed57c;
        }
    }
    ctx->pc = 0x2ED560u;
    // 0x2ed560: 0x24020001
    ctx->pc = 0x2ed560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed564: 0x260202d
    ctx->pc = 0x2ed564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed568: 0xaec2000c
    ctx->pc = 0x2ed568u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x2ed56c: 0xc0bb56a
    ctx->pc = 0x2ED56Cu;
    SET_GPR_U32(ctx, 31, 0x2ED574u);
    ctx->pc = 0x2ED570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ED5A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _system_header_0x2ed5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED574u; }
    }
    if (ctx->pc != 0x2ED574u) { return; }
    ctx->pc = 0x2ED574u;
    // 0x2ed574: 0x10000002
    ctx->pc = 0x2ED574u;
    {
        const bool branch_taken_0x2ed574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED578u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2ed574) {
            ctx->pc = 0x2ED580u;
            goto label_2ed580;
        }
    }
    ctx->pc = 0x2ED57Cu;
label_2ed57c:
    // 0x2ed57c: 0xdfbf0070
    ctx->pc = 0x2ed57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ed580:
    // 0x2ed580: 0x24020001
    ctx->pc = 0x2ed580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed584: 0xdfb60060
    ctx->pc = 0x2ed584u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed588: 0xdfb50050
    ctx->pc = 0x2ed588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed58c: 0xdfb40040
    ctx->pc = 0x2ed58cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed590: 0xdfb30030
    ctx->pc = 0x2ed590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed594: 0xdfb20020
    ctx->pc = 0x2ed594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed598: 0xdfb10010
    ctx->pc = 0x2ed598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed59c: 0xdfb00000
    ctx->pc = 0x2ed59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed5a0: 0x3e00008
    ctx->pc = 0x2ED5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED5A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ED530u: goto label_2ed530;
            case 0x2ED548u: goto label_2ed548;
            case 0x2ED57Cu: goto label_2ed57c;
            case 0x2ED580u: goto label_2ed580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ED5A8u;
}
