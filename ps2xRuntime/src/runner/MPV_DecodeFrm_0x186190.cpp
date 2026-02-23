#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_DecodeFrm
// Address: 0x186190 - 0x186338
void MPV_DecodeFrm_0x186190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_DecodeFrm");


    ctx->pc = 0x186190u;

    // 0x186190: 0x27bdff70
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x186194: 0xffb50050
    ctx->pc = 0x186194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x186198: 0xffb70070
    ctx->pc = 0x186198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x18619c: 0x80a82d
    ctx->pc = 0x18619cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a0: 0xffb60060
    ctx->pc = 0x1861a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1861a4: 0xc0b82d
    ctx->pc = 0x1861a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a8: 0xffb10010
    ctx->pc = 0x1861a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1861ac: 0xe0b02d
    ctx->pc = 0x1861acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861b0: 0xffbf0080
    ctx->pc = 0x1861b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1861b4: 0xa0882d
    ctx->pc = 0x1861b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861b8: 0xffb40040
    ctx->pc = 0x1861b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1861bc: 0xffb30030
    ctx->pc = 0x1861bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1861c0: 0xffb20020
    ctx->pc = 0x1861c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1861c4: 0xc062142
    ctx->pc = 0x1861C4u;
    SET_GPR_U32(ctx, 31, 0x1861CCu);
    ctx->pc = 0x1861C8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861CCu; }
        else if (ctx->pc != 0x1861CCu) { ctx->pc = 0x1861CCu; }
    }
    if (ctx->pc != 0x1861CCu) { return; }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0x10400006
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1861D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x1861E8u;
            goto label_1861e8;
        }
    }
    ctx->pc = 0x1861D4u;
    // 0x1861d4: 0x3c05ff03
    ctx->pc = 0x1861d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1861d8: 0xc061846
    ctx->pc = 0x1861D8u;
    SET_GPR_U32(ctx, 31, 0x1861E0u);
    ctx->pc = 0x1861DCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 521));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861E0u; }
        else if (ctx->pc != 0x1861E0u) { ctx->pc = 0x1861E0u; }
    }
    if (ctx->pc != 0x1861E0u) { return; }
    ctx->pc = 0x1861E0u;
    // 0x1861e0: 0x1000004b
    ctx->pc = 0x1861E0u;
    {
        const bool branch_taken_0x1861e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1861E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x1861e0) {
            ctx->pc = 0x186310u;
            goto label_186310;
        }
    }
    ctx->pc = 0x1861E8u;
label_1861e8:
    // 0x1861e8: 0x26b001bc
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 444));
    // 0x1861ec: 0x8e320004
    ctx->pc = 0x1861ecu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1861f0: 0x8e310000
    ctx->pc = 0x1861f0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1861f4: 0x8e13000c
    ctx->pc = 0x1861f4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1861f8: 0x8e140010
    ctx->pc = 0x1861f8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1861fc: 0x6ac20007
    ctx->pc = 0x1861fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186200: 0x6ec20000
    ctx->pc = 0x186200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186204: 0x6ac3000f
    ctx->pc = 0x186204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186208: 0x6ec30008
    ctx->pc = 0x186208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18620c: 0x6ac50017
    ctx->pc = 0x18620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186210: 0x6ec50010
    ctx->pc = 0x186210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186214: 0x6ac6001f
    ctx->pc = 0x186214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186218: 0x6ec60018
    ctx->pc = 0x186218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18621c: 0xb2a201d7
    ctx->pc = 0x18621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 471); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186220: 0xb6a201d0
    ctx->pc = 0x186220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 464); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186224: 0xb2a301df
    ctx->pc = 0x186224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 479); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186228: 0xb6a301d8
    ctx->pc = 0x186228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 472); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18622c: 0xb2a501e7
    ctx->pc = 0x18622cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 487); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186230: 0xb6a501e0
    ctx->pc = 0x186230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 480); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186234: 0xb2a601ef
    ctx->pc = 0x186234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 495); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186238: 0xb6a601e8
    ctx->pc = 0x186238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 488); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18623c: 0x6ac20027
    ctx->pc = 0x18623cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186240: 0x6ec20020
    ctx->pc = 0x186240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186244: 0x6ac3002f
    ctx->pc = 0x186244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186248: 0x6ec30028
    ctx->pc = 0x186248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18624c: 0xb2a201f7
    ctx->pc = 0x18624cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 503); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186250: 0xb6a201f0
    ctx->pc = 0x186250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 496); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186254: 0xb2a301ff
    ctx->pc = 0x186254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 511); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186258: 0xb6a301f8
    ctx->pc = 0x186258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 504); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18625c: 0xc06234e
    ctx->pc = 0x18625Cu;
    SET_GPR_U32(ctx, 31, 0x186264u);
    ctx->pc = 0x186260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188D38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVUMC_InitOutRfb_0x188d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186264u; }
        else if (ctx->pc != 0x186264u) { ctx->pc = 0x186264u; }
    }
    if (ctx->pc != 0x186264u) { return; }
    ctx->pc = 0x186264u;
    // 0x186264: 0xc060dba
    ctx->pc = 0x186264u;
    SET_GPR_U32(ctx, 31, 0x18626Cu);
    ctx->pc = 0x186268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1836E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVCMC_InitMcOiRt_0x1836e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18626Cu; }
        else if (ctx->pc != 0x18626Cu) { ctx->pc = 0x18626Cu; }
    }
    if (ctx->pc != 0x18626Cu) { return; }
    ctx->pc = 0x18626Cu;
    // 0x18626c: 0xc060dca
    ctx->pc = 0x18626Cu;
    SET_GPR_U32(ctx, 31, 0x186274u);
    ctx->pc = 0x186270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183728u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVCMC_SetCcnt_0x183728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186274u; }
        else if (ctx->pc != 0x186274u) { ctx->pc = 0x186274u; }
    }
    if (ctx->pc != 0x186274u) { return; }
    ctx->pc = 0x186274u;
    // 0x186274: 0x220282d
    ctx->pc = 0x186274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186278: 0x240302d
    ctx->pc = 0x186278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18627c: 0x2e0382d
    ctx->pc = 0x18627cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186280: 0xc061e5c
    ctx->pc = 0x186280u;
    SET_GPR_U32(ctx, 31, 0x186288u);
    ctx->pc = 0x186284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187970u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVHDEC_DecPicture_0x187970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186288u; }
        else if (ctx->pc != 0x186288u) { ctx->pc = 0x186288u; }
    }
    if (ctx->pc != 0x186288u) { return; }
    ctx->pc = 0x186288u;
    // 0x186288: 0x8ec40024
    ctx->pc = 0x186288u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x18628c: 0x6aa7018f
    ctx->pc = 0x18628cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 399); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186290: 0x6ea70188
    ctx->pc = 0x186290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 392); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186294: 0x6aa30197
    ctx->pc = 0x186294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 407); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186298: 0x6ea30190
    ctx->pc = 0x186298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 400); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18629c: 0x6aa5019f
    ctx->pc = 0x18629cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 415); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1862a0: 0x6ea50198
    ctx->pc = 0x1862a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 408); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1862a4: 0x6aa601a7
    ctx->pc = 0x1862a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 423); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1862a8: 0x6ea601a0
    ctx->pc = 0x1862a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 416); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1862ac: 0xb0870007
    ctx->pc = 0x1862acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862b0: 0xb4870000
    ctx->pc = 0x1862b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862b4: 0xb083000f
    ctx->pc = 0x1862b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862b8: 0xb4830008
    ctx->pc = 0x1862b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862bc: 0xb0850017
    ctx->pc = 0x1862bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862c0: 0xb4850010
    ctx->pc = 0x1862c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862c4: 0xb086001f
    ctx->pc = 0x1862c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862c8: 0xb4860018
    ctx->pc = 0x1862c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862cc: 0x6aa701af
    ctx->pc = 0x1862ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 431); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1862d0: 0x6ea701a8
    ctx->pc = 0x1862d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 424); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1862d4: 0x6aa301b7
    ctx->pc = 0x1862d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 439); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1862d8: 0x6ea301b0
    ctx->pc = 0x1862d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 432); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1862dc: 0x8ea501b8
    ctx->pc = 0x1862dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 440)));
    // 0x1862e0: 0xb0870027
    ctx->pc = 0x1862e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862e4: 0xb4870020
    ctx->pc = 0x1862e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862e8: 0xb083002f
    ctx->pc = 0x1862e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862ec: 0xb4830028
    ctx->pc = 0x1862ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1862f0: 0xac850030
    ctx->pc = 0x1862f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x1862f4: 0x8e03000c
    ctx->pc = 0x1862f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1862f8: 0x731823
    ctx->pc = 0x1862f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1862fc: 0xaec30028
    ctx->pc = 0x1862fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 3));
    // 0x186300: 0x8e040010
    ctx->pc = 0x186300u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x186304: 0x942023
    ctx->pc = 0x186304u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x186308: 0xaec4002c
    ctx->pc = 0x186308u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 4));
    // 0x18630c: 0xdfbf0080
    ctx->pc = 0x18630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_186310:
    // 0x186310: 0xdfb70070
    ctx->pc = 0x186310u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186314: 0xdfb60060
    ctx->pc = 0x186314u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186318: 0xdfb50050
    ctx->pc = 0x186318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18631c: 0xdfb40040
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186320: 0xdfb30030
    ctx->pc = 0x186320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186324: 0xdfb20020
    ctx->pc = 0x186324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186328: 0xdfb10010
    ctx->pc = 0x186328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18632c: 0xdfb00000
    ctx->pc = 0x18632cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186330: 0x3e00008
    ctx->pc = 0x186330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1861E8u: goto label_1861e8;
            case 0x186310u: goto label_186310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186338u;
}
