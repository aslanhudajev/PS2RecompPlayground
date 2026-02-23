#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetErrInf
// Address: 0x193bc0 - 0x193c78
void SFD_GetErrInf_0x193bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetErrInf");


    ctx->pc = 0x193bc0u;

    // 0x193bc0: 0x27bdffd0
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193bc4: 0xffb10010
    ctx->pc = 0x193bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x193bc8: 0xffb00000
    ctx->pc = 0x193bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193bcc: 0xa0882d
    ctx->pc = 0x193bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bd0: 0x80802d
    ctx->pc = 0x193bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bd4: 0x1600000f
    ctx->pc = 0x193BD4u;
    {
        const bool branch_taken_0x193bd4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x193BD8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x193bd4) {
            ctx->pc = 0x193C14u;
            goto label_193c14;
        }
    }
    ctx->pc = 0x193BDCu;
    // 0x193bdc: 0x3c020026
    ctx->pc = 0x193bdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x193be0: 0x2442ddc0
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x193be4: 0x6843011b
    ctx->pc = 0x193be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 283); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x193be8: 0x6c430114
    ctx->pc = 0x193be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 276); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x193bec: 0x68440123
    ctx->pc = 0x193becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 291); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x193bf0: 0x6c44011c
    ctx->pc = 0x193bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 284); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x193bf4: 0x8c450124
    ctx->pc = 0x193bf4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x193bf8: 0xb2230007
    ctx->pc = 0x193bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193bfc: 0xb6230000
    ctx->pc = 0x193bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c00: 0xb224000f
    ctx->pc = 0x193c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c04: 0xb6240008
    ctx->pc = 0x193c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c08: 0xae250010
    ctx->pc = 0x193c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x193c0c: 0x10000015
    ctx->pc = 0x193C0Cu;
    {
        const bool branch_taken_0x193c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193C10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193c0c) {
            ctx->pc = 0x193C64u;
            goto label_193c64;
        }
    }
    ctx->pc = 0x193C14u;
label_193c14:
    // 0x193c14: 0xc064f1e
    ctx->pc = 0x193C14u;
    SET_GPR_U32(ctx, 31, 0x193C1Cu);
    ctx->pc = 0x193C18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C1Cu; }
        else if (ctx->pc != 0x193C1Cu) { ctx->pc = 0x193C1Cu; }
    }
    if (ctx->pc != 0x193C1Cu) { return; }
    ctx->pc = 0x193C1Cu;
    // 0x193c1c: 0x10400006
    ctx->pc = 0x193C1Cu;
    {
        const bool branch_taken_0x193c1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193C20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193c1c) {
            ctx->pc = 0x193C38u;
            goto label_193c38;
        }
    }
    ctx->pc = 0x193C24u;
    // 0x193c24: 0x3c05ff00
    ctx->pc = 0x193c24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x193c28: 0xc064ea0
    ctx->pc = 0x193C28u;
    SET_GPR_U32(ctx, 31, 0x193C30u);
    ctx->pc = 0x193C2Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 258));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C30u; }
        else if (ctx->pc != 0x193C30u) { ctx->pc = 0x193C30u; }
    }
    if (ctx->pc != 0x193C30u) { return; }
    ctx->pc = 0x193C30u;
    // 0x193c30: 0x1000000d
    ctx->pc = 0x193C30u;
    {
        const bool branch_taken_0x193c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193C34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x193c30) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C38u;
label_193c38:
    // 0x193c38: 0x6a020987
    ctx->pc = 0x193c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2439); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x193c3c: 0x6e020980
    ctx->pc = 0x193c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2432); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x193c40: 0x6a03098f
    ctx->pc = 0x193c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2447); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x193c44: 0x6e030988
    ctx->pc = 0x193c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2440); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x193c48: 0x8e040990
    ctx->pc = 0x193c48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2448)));
    // 0x193c4c: 0xb2220007
    ctx->pc = 0x193c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c50: 0xb6220000
    ctx->pc = 0x193c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c54: 0xb223000f
    ctx->pc = 0x193c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c58: 0xb6230008
    ctx->pc = 0x193c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x193c5c: 0xae240010
    ctx->pc = 0x193c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x193c60: 0x102d
    ctx->pc = 0x193c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193c64:
    // 0x193c64: 0xdfbf0020
    ctx->pc = 0x193c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193c68:
    // 0x193c68: 0xdfb10010
    ctx->pc = 0x193c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c6c: 0xdfb00000
    ctx->pc = 0x193c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c70: 0x3e00008
    ctx->pc = 0x193C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C14u: goto label_193c14;
            case 0x193C38u: goto label_193c38;
            case 0x193C64u: goto label_193c64;
            case 0x193C68u: goto label_193c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C78u;
}
