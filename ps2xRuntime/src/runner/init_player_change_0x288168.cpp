#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_player_change
// Address: 0x288168 - 0x288270
void init_player_change_0x288168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x288168u;

    // 0x288168: 0x27bdffc0
    ctx->pc = 0x288168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28816c: 0xffbf0030
    ctx->pc = 0x28816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288170: 0xffb10020
    ctx->pc = 0x288170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x288174: 0xffb00010
    ctx->pc = 0x288174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x288178: 0xc08bda0
    ctx->pc = 0x288178u;
    SET_GPR_U32(ctx, 31, 0x288180u);
    ctx->pc = 0x28817Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F680u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_hidden_player_0x22f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288180u; }
    }
    if (ctx->pc != 0x288180u) { return; }
    ctx->pc = 0x288180u;
    // 0x288180: 0x10400017
    ctx->pc = 0x288180u;
    {
        const bool branch_taken_0x288180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288184u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x288180) {
            ctx->pc = 0x2881E0u;
            goto label_2881e0;
        }
    }
    ctx->pc = 0x288188u;
    // 0x288188: 0x8e300000
    ctx->pc = 0x288188u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28818c: 0x200202d
    ctx->pc = 0x28818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288190: 0xc0a2010
    ctx->pc = 0x288190u;
    SET_GPR_U32(ctx, 31, 0x288198u);
    ctx->pc = 0x288194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x288040u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_selected_0x288040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288198u; }
    }
    if (ctx->pc != 0x288198u) { return; }
    ctx->pc = 0x288198u;
    // 0x288198: 0x200202d
    ctx->pc = 0x288198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28819c: 0x24050002
    ctx->pc = 0x28819cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2881a0: 0xc0a1204
    ctx->pc = 0x2881A0u;
    SET_GPR_U32(ctx, 31, 0x2881A8u);
    ctx->pc = 0x2881A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881A8u; }
    }
    if (ctx->pc != 0x2881A8u) { return; }
    ctx->pc = 0x2881A8u;
    // 0x2881a8: 0x200202d
    ctx->pc = 0x2881a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881ac: 0x24050003
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2881b0: 0xc0a1204
    ctx->pc = 0x2881B0u;
    SET_GPR_U32(ctx, 31, 0x2881B8u);
    ctx->pc = 0x2881B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881B8u; }
    }
    if (ctx->pc != 0x2881B8u) { return; }
    ctx->pc = 0x2881B8u;
    // 0x2881b8: 0x200202d
    ctx->pc = 0x2881b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881bc: 0x24050006
    ctx->pc = 0x2881bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2881c0: 0xc0a1204
    ctx->pc = 0x2881C0u;
    SET_GPR_U32(ctx, 31, 0x2881C8u);
    ctx->pc = 0x2881C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881C8u; }
    }
    if (ctx->pc != 0x2881C8u) { return; }
    ctx->pc = 0x2881C8u;
    // 0x2881c8: 0x200202d
    ctx->pc = 0x2881c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881cc: 0x24050005
    ctx->pc = 0x2881ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2881d0: 0xc0a1204
    ctx->pc = 0x2881D0u;
    SET_GPR_U32(ctx, 31, 0x2881D8u);
    ctx->pc = 0x2881D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881D8u; }
    }
    if (ctx->pc != 0x2881D8u) { return; }
    ctx->pc = 0x2881D8u;
    // 0x2881d8: 0x10000008
    ctx->pc = 0x2881D8u;
    {
        const bool branch_taken_0x2881d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2881DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2881d8) {
            ctx->pc = 0x2881FCu;
            goto label_2881fc;
        }
    }
    ctx->pc = 0x2881E0u;
label_2881e0:
    // 0x2881e0: 0x8e25000c
    ctx->pc = 0x2881e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2881e4: 0xc0a203c
    ctx->pc = 0x2881E4u;
    SET_GPR_U32(ctx, 31, 0x2881ECu);
    ctx->pc = 0x2881E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2880F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitSeltype_0x2880f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881ECu; }
    }
    if (ctx->pc != 0x2881ECu) { return; }
    ctx->pc = 0x2881ECu;
    // 0x2881ec: 0xae220010
    ctx->pc = 0x2881ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2881f0: 0x24020004
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2881f4: 0xae222ad4
    ctx->pc = 0x2881f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10964), GPR_U32(ctx, 2));
    // 0x2881f8: 0x3c020031
    ctx->pc = 0x2881f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2881fc:
    // 0x2881fc: 0x8c42f184
    ctx->pc = 0x2881fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x288200: 0x10400016
    ctx->pc = 0x288200u;
    {
        const bool branch_taken_0x288200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288204u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x288200) {
            ctx->pc = 0x28825Cu;
            goto label_28825c;
        }
    }
    ctx->pc = 0x288208u;
    // 0x288208: 0x2446d760
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294956896));
    // 0x28820c: 0x68c30007
    ctx->pc = 0x28820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x288210: 0x6cc30000
    ctx->pc = 0x288210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x288214: 0x68c4000f
    ctx->pc = 0x288214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x288218: 0x6cc40008
    ctx->pc = 0x288218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28821c: 0xb3a30007
    ctx->pc = 0x28821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288220: 0xb7a30000
    ctx->pc = 0x288220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288224: 0xb3a4000f
    ctx->pc = 0x288224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288228: 0xb7a40008
    ctx->pc = 0x288228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28822c: 0x8e240010
    ctx->pc = 0x28822cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288230: 0x24820003
    ctx->pc = 0x288230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
    // 0x288234: 0x2403ffff
    ctx->pc = 0x288234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288238: 0x64182a
    ctx->pc = 0x288238u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x28823c: 0x83100b
    ctx->pc = 0x28823cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x288240: 0x21083
    ctx->pc = 0x288240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x288244: 0x21080
    ctx->pc = 0x288244u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x288248: 0x822023
    ctx->pc = 0x288248u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28824c: 0x42080
    ctx->pc = 0x28824cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x288250: 0x3a41021
    ctx->pc = 0x288250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x288254: 0x8c420000
    ctx->pc = 0x288254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288258: 0xae220004
    ctx->pc = 0x288258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28825c:
    // 0x28825c: 0xdfbf0030
    ctx->pc = 0x28825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288260: 0xdfb10020
    ctx->pc = 0x288260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288264: 0xdfb00010
    ctx->pc = 0x288264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288268: 0x3e00008
    ctx->pc = 0x288268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28826Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2881E0u: goto label_2881e0;
            case 0x2881FCu: goto label_2881fc;
            case 0x28825Cu: goto label_28825c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288270u;
}
