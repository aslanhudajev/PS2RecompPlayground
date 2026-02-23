#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemFname
// Address: 0x1a0650 - 0x1a06c4
void SFH_AnlyElemFname_0x1a0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemFname");


    ctx->pc = 0x1a0650u;

    // 0x1a0650: 0x27bdffd0
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0654: 0x30a500ff
    ctx->pc = 0x1a0654u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0658: 0xffb10010
    ctx->pc = 0x1a0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a065c: 0xffb00000
    ctx->pc = 0x1a065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0660: 0xffbf0020
    ctx->pc = 0x1a0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0664: 0xc0681d0
    ctx->pc = 0x1A0664u;
    SET_GPR_U32(ctx, 31, 0x1A066Cu);
    ctx->pc = 0x1A0668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A066Cu; }
        else if (ctx->pc != 0x1A066Cu) { ctx->pc = 0x1A066Cu; }
    }
    if (ctx->pc != 0x1A066Cu) { return; }
    ctx->pc = 0x1A066Cu;
    // 0x1a066c: 0x40802d
    ctx->pc = 0x1a066cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0670: 0x16000003
    ctx->pc = 0x1A0670u;
    {
        const bool branch_taken_0x1a0670 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0674u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0670) {
            ctx->pc = 0x1A0680u;
            goto label_1a0680;
        }
    }
    ctx->pc = 0x1A0678u;
    // 0x1a0678: 0x1000000d
    ctx->pc = 0x1A0678u;
    {
        const bool branch_taken_0x1a0678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A067Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0678) {
            ctx->pc = 0x1A06B0u;
            goto label_1a06b0;
        }
    }
    ctx->pc = 0x1A0680u;
label_1a0680:
    // 0x1a0680: 0x282d
    ctx->pc = 0x1a0680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0684: 0xc050cfe
    ctx->pc = 0x1A0684u;
    SET_GPR_U32(ctx, 31, 0x1A068Cu);
    ctx->pc = 0x1A0688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A068Cu; }
        else if (ctx->pc != 0x1A068Cu) { ctx->pc = 0x1A068Cu; }
    }
    if (ctx->pc != 0x1A068Cu) { return; }
    ctx->pc = 0x1A068Cu;
    // 0x1a068c: 0x6a020007
    ctx->pc = 0x1a068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1a0690: 0x6e020000
    ctx->pc = 0x1a0690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1a0694: 0x8a03000b
    ctx->pc = 0x1a0694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1a0698: 0x9a030008
    ctx->pc = 0x1a0698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1a069c: 0xb2220007
    ctx->pc = 0x1a069cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a06a0: 0xb6220000
    ctx->pc = 0x1a06a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a06a4: 0xaa23000b
    ctx->pc = 0x1a06a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a06a8: 0xba230008
    ctx->pc = 0x1a06a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a06ac: 0x24020001
    ctx->pc = 0x1a06acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a06b0:
    // 0x1a06b0: 0xdfbf0020
    ctx->pc = 0x1a06b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a06b4: 0xdfb10010
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a06b8: 0xdfb00000
    ctx->pc = 0x1a06b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a06bc: 0x3e00008
    ctx->pc = 0x1A06BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0680u: goto label_1a0680;
            case 0x1A06B0u: goto label_1a06b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A06C4u;
}
