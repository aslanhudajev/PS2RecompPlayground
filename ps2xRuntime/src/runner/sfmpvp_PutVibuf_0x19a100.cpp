#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpvp_PutVibuf
// Address: 0x19a100 - 0x19a1a0
void sfmpvp_PutVibuf_0x19a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpvp_PutVibuf");


    ctx->pc = 0x19a100u;

    // 0x19a100: 0x27bdffb0
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a104: 0xffb20030
    ctx->pc = 0x19a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19a108: 0x37a70008
    ctx->pc = 0x19a108u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
    // 0x19a10c: 0xffb10020
    ctx->pc = 0x19a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19a110: 0xa0902d
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a114: 0xffb00010
    ctx->pc = 0x19a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a118: 0x80882d
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a11c: 0xc0802d
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a120: 0xffbf0040
    ctx->pc = 0x19a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a124: 0x3a0282d
    ctx->pc = 0x19a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a128: 0x37a60004
    ctx->pc = 0x19a128u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    // 0x19a12c: 0xc066558
    ctx->pc = 0x19A12Cu;
    SET_GPR_U32(ctx, 31, 0x19A134u);
    ctx->pc = 0x19A130u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x199560u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufBeginPut_0x199560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A134u; }
        else if (ctx->pc != 0x19A134u) { ctx->pc = 0x19A134u; }
    }
    if (ctx->pc != 0x19A134u) { return; }
    ctx->pc = 0x19A134u;
    // 0x19a134: 0x8fa40000
    ctx->pc = 0x19a134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a138: 0x3c020fff
    ctx->pc = 0x19a138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x19a13c: 0x8fa60008
    ctx->pc = 0x19a13cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a140: 0x3442ffff
    ctx->pc = 0x19a140u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x19a144: 0x3c032000
    ctx->pc = 0x19a144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x19a148: 0x822024
    ctx->pc = 0x19a148u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19a14c: 0xc23024
    ctx->pc = 0x19a14cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19a150: 0x8fa50004
    ctx->pc = 0x19a150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19a154: 0x8fa7000c
    ctx->pc = 0x19a154u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19a158: 0x200482d
    ctx->pc = 0x19a158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a15c: 0x240402d
    ctx->pc = 0x19a15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a160: 0x502d
    ctx->pc = 0x19a160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a164: 0x582d
    ctx->pc = 0x19a164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a168: 0xc33025
    ctx->pc = 0x19a168u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a16c: 0xc0668de
    ctx->pc = 0x19A16Cu;
    SET_GPR_U32(ctx, 31, 0x19A174u);
    ctx->pc = 0x19A170u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x19A378u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x19a378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A174u; }
        else if (ctx->pc != 0x19A174u) { ctx->pc = 0x19A174u; }
    }
    if (ctx->pc != 0x19A174u) { return; }
    ctx->pc = 0x19A174u;
    // 0x19a174: 0x40802d
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a178: 0x220202d
    ctx->pc = 0x19a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a17c: 0xc066592
    ctx->pc = 0x19A17Cu;
    SET_GPR_U32(ctx, 31, 0x19A184u);
    ctx->pc = 0x19A180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199648u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufEndPut_0x199648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A184u; }
        else if (ctx->pc != 0x19A184u) { ctx->pc = 0x19A184u; }
    }
    if (ctx->pc != 0x19A184u) { return; }
    ctx->pc = 0x19A184u;
    // 0x19a184: 0x200102d
    ctx->pc = 0x19a184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a188: 0xdfbf0040
    ctx->pc = 0x19a188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a18c: 0xdfb20030
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a190: 0xdfb10020
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a194: 0xdfb00010
    ctx->pc = 0x19a194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a198: 0x3e00008
    ctx->pc = 0x19A198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A19Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A1A0u;
}
