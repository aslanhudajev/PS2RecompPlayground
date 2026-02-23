#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_FixedForSeek
// Address: 0x1965b8 - 0x196664
void sfmpv_FixedForSeek_0x1965b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_FixedForSeek");


    ctx->pc = 0x1965b8u;

    // 0x1965b8: 0x27bdffc0
    ctx->pc = 0x1965b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1965bc: 0xffb00000
    ctx->pc = 0x1965bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1965c0: 0xffb20020
    ctx->pc = 0x1965c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1965c4: 0x80802d
    ctx->pc = 0x1965c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965c8: 0xffb10010
    ctx->pc = 0x1965c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1965cc: 0x26120afc
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2812));
    // 0x1965d0: 0xffbf0030
    ctx->pc = 0x1965d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1965d4: 0x26113738
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14136));
    // 0x1965d8: 0x8e2206bc
    ctx->pc = 0x1965d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1724)));
    // 0x1965dc: 0x4410005
    ctx->pc = 0x1965DCu;
    {
        const bool branch_taken_0x1965dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1965E0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1708)));
        if (branch_taken_0x1965dc) {
            ctx->pc = 0x1965F4u;
            goto label_1965f4;
        }
    }
    ctx->pc = 0x1965E4u;
    // 0x1965e4: 0xc0648a2
    ctx->pc = 0x1965E4u;
    SET_GPR_U32(ctx, 31, 0x1965ECu);
    ctx->pc = 0x192288u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRTot_0x192288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965ECu; }
        else if (ctx->pc != 0x1965ECu) { ctx->pc = 0x1965ECu; }
    }
    if (ctx->pc != 0x1965ECu) { return; }
    ctx->pc = 0x1965ECu;
    // 0x1965ec: 0x24420004
    ctx->pc = 0x1965ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1965f0: 0xae2206bc
    ctx->pc = 0x1965f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1724), GPR_U32(ctx, 2));
label_1965f4:
    // 0x1965f4: 0x8e420020
    ctx->pc = 0x1965f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1965f8: 0x4410015
    ctx->pc = 0x1965F8u;
    {
        const bool branch_taken_0x1965f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1965FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1965f8) {
            ctx->pc = 0x196650u;
            goto label_196650;
        }
    }
    ctx->pc = 0x196600u;
    // 0x196600: 0x6a020adb
    ctx->pc = 0x196600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2779); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x196604: 0x6e020ad4
    ctx->pc = 0x196604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2772); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196608: 0x6a030ae3
    ctx->pc = 0x196608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2787); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19660c: 0x6e030adc
    ctx->pc = 0x19660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2780); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196610: 0x6a040aeb
    ctx->pc = 0x196610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2795); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x196614: 0x6e040ae4
    ctx->pc = 0x196614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2788); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196618: 0x6a050af3
    ctx->pc = 0x196618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2803); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19661c: 0x6e050aec
    ctx->pc = 0x19661cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2796); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196620: 0xb2020b03
    ctx->pc = 0x196620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2819); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196624: 0xb6020afc
    ctx->pc = 0x196624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2812); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196628: 0xb2030b0b
    ctx->pc = 0x196628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2827); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19662c: 0xb6030b04
    ctx->pc = 0x19662cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2820); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196630: 0xb2040b13
    ctx->pc = 0x196630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2835); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196634: 0xb6040b0c
    ctx->pc = 0x196634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2828); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196638: 0xb2050b1b
    ctx->pc = 0x196638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2843); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19663c: 0xb6050b14
    ctx->pc = 0x19663cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2836); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196640: 0x6a020afb
    ctx->pc = 0x196640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2811); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x196644: 0x6e020af4
    ctx->pc = 0x196644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2804); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196648: 0xb2020b23
    ctx->pc = 0x196648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2851); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19664c: 0xb6020b1c
    ctx->pc = 0x19664cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2844); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_196650:
    // 0x196650: 0xdfb20020
    ctx->pc = 0x196650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196654: 0xdfb10010
    ctx->pc = 0x196654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196658: 0xdfb00000
    ctx->pc = 0x196658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19665c: 0x3e00008
    ctx->pc = 0x19665Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1965F4u: goto label_1965f4;
            case 0x196650u: goto label_196650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196664u;
}
