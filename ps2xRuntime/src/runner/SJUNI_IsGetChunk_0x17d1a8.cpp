#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_IsGetChunk
// Address: 0x17d1a8 - 0x17d244
void SJUNI_IsGetChunk_0x17d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_IsGetChunk");


    ctx->pc = 0x17d1a8u;

label_17d1a8:
    // 0x17d1a8: 0x27bdffe0
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17d1ac:
    // 0x17d1ac: 0xace00000
    ctx->pc = 0x17d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_17d1b0:
    // 0x17d1b0: 0x2ca20004
    ctx->pc = 0x17d1b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 4));
label_17d1b4:
    // 0x17d1b4: 0x14400009
label_17d1b8:
    if (ctx->pc == 0x17D1B8u) {
        ctx->pc = 0x17D1B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x17D1BCu;
        goto label_17d1bc;
    }
    ctx->pc = 0x17D1B4u;
    {
        const bool branch_taken_0x17d1b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D1B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17d1b4) {
            ctx->pc = 0x17D1DCu;
            goto label_17d1dc;
        }
    }
    ctx->pc = 0x17D1BCu;
label_17d1bc:
    // 0x17d1bc: 0x8c820028
    ctx->pc = 0x17d1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_17d1c0:
    // 0x17d1c0: 0x5040001d
label_17d1c4:
    if (ctx->pc == 0x17D1C4u) {
        ctx->pc = 0x17D1C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D1C8u;
        goto label_17d1c8;
    }
    ctx->pc = 0x17D1C0u;
    {
        const bool branch_taken_0x17d1c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d1c0) {
            ctx->pc = 0x17D1C4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17D238u;
            goto label_17d238;
        }
    }
    ctx->pc = 0x17D1C8u;
label_17d1c8:
    // 0x17d1c8: 0x8c84002c
    ctx->pc = 0x17d1c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_17d1cc:
    // 0x17d1cc: 0x40f809
label_17d1d0:
    if (ctx->pc == 0x17D1D0u) {
        ctx->pc = 0x17D1D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17D1D4u;
        goto label_17d1d4;
    }
    ctx->pc = 0x17D1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D1D4u);
        ctx->pc = 0x17D1D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D1A8u: goto label_17d1a8;
            case 0x17D1ACu: goto label_17d1ac;
            case 0x17D1B0u: goto label_17d1b0;
            case 0x17D1B4u: goto label_17d1b4;
            case 0x17D1B8u: goto label_17d1b8;
            case 0x17D1BCu: goto label_17d1bc;
            case 0x17D1C0u: goto label_17d1c0;
            case 0x17D1C4u: goto label_17d1c4;
            case 0x17D1C8u: goto label_17d1c8;
            case 0x17D1CCu: goto label_17d1cc;
            case 0x17D1D0u: goto label_17d1d0;
            case 0x17D1D4u: goto label_17d1d4;
            case 0x17D1D8u: goto label_17d1d8;
            case 0x17D1DCu: goto label_17d1dc;
            case 0x17D1E0u: goto label_17d1e0;
            case 0x17D1E4u: goto label_17d1e4;
            case 0x17D1E8u: goto label_17d1e8;
            case 0x17D1ECu: goto label_17d1ec;
            case 0x17D1F0u: goto label_17d1f0;
            case 0x17D1F4u: goto label_17d1f4;
            case 0x17D1F8u: goto label_17d1f8;
            case 0x17D1FCu: goto label_17d1fc;
            case 0x17D200u: goto label_17d200;
            case 0x17D204u: goto label_17d204;
            case 0x17D208u: goto label_17d208;
            case 0x17D20Cu: goto label_17d20c;
            case 0x17D210u: goto label_17d210;
            case 0x17D214u: goto label_17d214;
            case 0x17D218u: goto label_17d218;
            case 0x17D21Cu: goto label_17d21c;
            case 0x17D220u: goto label_17d220;
            case 0x17D224u: goto label_17d224;
            case 0x17D228u: goto label_17d228;
            case 0x17D22Cu: goto label_17d22c;
            case 0x17D230u: goto label_17d230;
            case 0x17D234u: goto label_17d234;
            case 0x17D238u: goto label_17d238;
            case 0x17D23Cu: goto label_17d23c;
            case 0x17D240u: goto label_17d240;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D1D4u; }
            if (ctx->pc != 0x17D1D4u) { return; }
        }
    }
    ctx->pc = 0x17D1D4u;
label_17d1d4:
    // 0x17d1d4: 0x10000018
label_17d1d8:
    if (ctx->pc == 0x17D1D8u) {
        ctx->pc = 0x17D1D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D1DCu;
        goto label_17d1dc;
    }
    ctx->pc = 0x17D1D4u;
    {
        const bool branch_taken_0x17d1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D1D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d1d4) {
            ctx->pc = 0x17D238u;
            goto label_17d238;
        }
    }
    ctx->pc = 0x17D1DCu;
label_17d1dc:
    // 0x17d1dc: 0x51080
    ctx->pc = 0x17d1dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_17d1e0:
    // 0x17d1e0: 0x821021
    ctx->pc = 0x17d1e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17d1e4:
    // 0x17d1e4: 0x8c420018
    ctx->pc = 0x17d1e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_17d1e8:
    // 0x17d1e8: 0x14400003
label_17d1ec:
    if (ctx->pc == 0x17D1ECu) {
        ctx->pc = 0x17D1F0u;
        goto label_17d1f0;
    }
    ctx->pc = 0x17D1E8u;
    {
        const bool branch_taken_0x17d1e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d1e8) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17D1F0u;
label_17d1f0:
    // 0x17d1f0: 0x10000011
label_17d1f4:
    if (ctx->pc == 0x17D1F4u) {
        ctx->pc = 0x17D1F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D1F8u;
        goto label_17d1f8;
    }
    ctx->pc = 0x17D1F0u;
    {
        const bool branch_taken_0x17d1f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D1F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d1f0) {
            ctx->pc = 0x17D238u;
            goto label_17d238;
        }
    }
    ctx->pc = 0x17D1F8u;
label_17d1f8:
    // 0x17d1f8: 0x6843000f
    ctx->pc = 0x17d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_17d1fc:
    // 0x17d1fc: 0x6c430008
    ctx->pc = 0x17d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17d200:
    // 0x17d200: 0xb3a30007
    ctx->pc = 0x17d200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d204:
    // 0x17d204: 0xb7a30000
    ctx->pc = 0x17d204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d208:
    // 0x17d208: 0x24050001
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_17d20c:
    // 0x17d20c: 0x8fa30004
    ctx->pc = 0x17d20cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17d210:
    // 0x17d210: 0xace30000
    ctx->pc = 0x17d210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_17d214:
    // 0x17d214: 0x80820005
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_17d218:
    // 0x17d218: 0x54450005
label_17d21c:
    if (ctx->pc == 0x17D21Cu) {
        ctx->pc = 0x17D21Cu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->pc = 0x17D220u;
        goto label_17d220;
    }
    ctx->pc = 0x17D218u;
    {
        const bool branch_taken_0x17d218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x17d218) {
            ctx->pc = 0x17D21Cu;
            SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->pc = 0x17D230u;
            goto label_17d230;
        }
    }
    ctx->pc = 0x17D220u;
label_17d220:
    // 0x17d220: 0x66182a
    ctx->pc = 0x17d220u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
label_17d224:
    // 0x17d224: 0x102d
    ctx->pc = 0x17d224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d228:
    // 0x17d228: 0x10000003
label_17d22c:
    if (ctx->pc == 0x17D22Cu) {
        ctx->pc = 0x17D22Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
        ctx->pc = 0x17D230u;
        goto label_17d230;
    }
    ctx->pc = 0x17D228u;
    {
        const bool branch_taken_0x17d228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D22Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
        if (branch_taken_0x17d228) {
            ctx->pc = 0x17D238u;
            goto label_17d238;
        }
    }
    ctx->pc = 0x17D230u;
label_17d230:
    // 0x17d230: 0xa0102d
    ctx->pc = 0x17d230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d234:
    // 0x17d234: 0x3100b
    ctx->pc = 0x17d234u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_17d238:
    // 0x17d238: 0xdfbf0010
    ctx->pc = 0x17d238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d23c:
    // 0x17d23c: 0x3e00008
label_17d240:
    if (ctx->pc == 0x17D240u) {
        ctx->pc = 0x17D240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17D244u;
        goto label_fallthrough_0x17d23c;
    }
    ctx->pc = 0x17D23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D1A8u: goto label_17d1a8;
            case 0x17D1ACu: goto label_17d1ac;
            case 0x17D1B0u: goto label_17d1b0;
            case 0x17D1B4u: goto label_17d1b4;
            case 0x17D1B8u: goto label_17d1b8;
            case 0x17D1BCu: goto label_17d1bc;
            case 0x17D1C0u: goto label_17d1c0;
            case 0x17D1C4u: goto label_17d1c4;
            case 0x17D1C8u: goto label_17d1c8;
            case 0x17D1CCu: goto label_17d1cc;
            case 0x17D1D0u: goto label_17d1d0;
            case 0x17D1D4u: goto label_17d1d4;
            case 0x17D1D8u: goto label_17d1d8;
            case 0x17D1DCu: goto label_17d1dc;
            case 0x17D1E0u: goto label_17d1e0;
            case 0x17D1E4u: goto label_17d1e4;
            case 0x17D1E8u: goto label_17d1e8;
            case 0x17D1ECu: goto label_17d1ec;
            case 0x17D1F0u: goto label_17d1f0;
            case 0x17D1F4u: goto label_17d1f4;
            case 0x17D1F8u: goto label_17d1f8;
            case 0x17D1FCu: goto label_17d1fc;
            case 0x17D200u: goto label_17d200;
            case 0x17D204u: goto label_17d204;
            case 0x17D208u: goto label_17d208;
            case 0x17D20Cu: goto label_17d20c;
            case 0x17D210u: goto label_17d210;
            case 0x17D214u: goto label_17d214;
            case 0x17D218u: goto label_17d218;
            case 0x17D21Cu: goto label_17d21c;
            case 0x17D220u: goto label_17d220;
            case 0x17D224u: goto label_17d224;
            case 0x17D228u: goto label_17d228;
            case 0x17D22Cu: goto label_17d22c;
            case 0x17D230u: goto label_17d230;
            case 0x17D234u: goto label_17d234;
            case 0x17D238u: goto label_17d238;
            case 0x17D23Cu: goto label_17d23c;
            case 0x17D240u: goto label_17d240;
            default: break;
        }
        return;
    }
label_fallthrough_0x17d23c:
    ctx->pc = 0x17D244u;
}
