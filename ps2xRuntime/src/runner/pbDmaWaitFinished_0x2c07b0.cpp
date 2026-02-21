#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: pbDmaWaitFinished
// Address: 0x2c07b0 - 0x2c0824
void pbDmaWaitFinished_0x2c07b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _call = 0;
    ++_call;

    printf("[pbDmaWaitFinished #%d] ENTRY  ra=0x%x sp=0x%x  a0=0x%x a1=0x%x a2=0x%x a3=0x%x\n",
           _call, GPR_U32(ctx, 31), GPR_U32(ctx, 29),
           GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 7));

    ctx->pc = 0x2c07b0u;

    // 0x2c07b0: 0x27bdffc0
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c07b4: 0xffbf0030
    ctx->pc = 0x2c07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c07b8: 0xffb20020
    ctx->pc = 0x2c07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c07bc: 0xffb10010
    ctx->pc = 0x2c07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c07c0: 0xffb00000
    ctx->pc = 0x2c07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c07c4: 0x802d
    ctx->pc = 0x2c07c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07c8: 0x3c1205f5
    ctx->pc = 0x2c07c8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)1525 << 16));
    // 0x2c07cc: 0x3652e100  s2 = 0x05F5E100 (timeout threshold, ~100M)
    ctx->pc = 0x2c07ccu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 57600));
    printf("[pbDmaWaitFinished #%d] init  s0=0  s2=0x%x  (loop until pbDmaFinished returns non-zero or s0>=s2)\n",
           _call, GPR_U32(ctx, 18));
    // 0x2c07d0: 0x10000008  (always) skip to label_2c07f4 first time
    ctx->pc = 0x2C07D0u;
    {
        const bool branch_taken_0x2c07d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C07D4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        printf("[pbDmaWaitFinished #%d] s0=0 s2=0x%x(0x05F5E100) s1=0x%x -> first call pbDmaFinished\n",
               _call, GPR_U32(ctx, 18), GPR_U32(ctx, 17));
        if (branch_taken_0x2c07d0) {
            ctx->pc = 0x2C07F4u;
            goto label_2c07f4;
        }
    }
    ctx->pc = 0x2C07D8u;
label_2c07d8:
    // 0x2c07d8: 0x26100001  s0 += 1 (loop counter)
    ctx->pc = 0x2c07d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c07dc: 0x250102a  v0 = (s2 < s0)  timeout if s0 >= s2
    ctx->pc = 0x2c07dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    {
        static int _iter = 0;
        _iter++;
        if (_iter <= 30 || (_iter % 50000 == 0))
            printf("[pbDmaWaitFinished #%d] loop iter %d  s0=0x%x(%u) s2=0x%x(%u) v0(timeout?)=%u  s1=0x%x\n",
                   _call, _iter, GPR_U32(ctx, 16), GPR_U32(ctx, 16), GPR_U32(ctx, 18), GPR_U32(ctx, 18), GPR_U32(ctx, 2), GPR_U32(ctx, 17));
    }
    // 0x2c07e0: 0x10400004  beq v0,0 -> skip FatalError
    ctx->pc = 0x2C07E0u;
    {
        const bool branch_taken_0x2c07e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C07E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28000));
        if (branch_taken_0x2c07e0) {
            ctx->pc = 0x2C07F4u;
            goto label_2c07f4;
        }
    }
    ctx->pc = 0x2C07E8u;
    printf("[pbDmaWaitFinished #%d] TIMEOUT path  s0=0x%x s2=0x%x -> FatalError then pbDmaFinished\n", _call, GPR_U32(ctx, 16), GPR_U32(ctx, 18));
    // 0x2c07e8: 0x3c050080
    ctx->pc = 0x2c07e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2c07ec: 0xc0b49a6
    ctx->pc = 0x2C07ECu;
    SET_GPR_U32(ctx, 31, 0x2C07F4u);
    ctx->pc = 0x2C07F0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 128));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07F4u; }
    }
    if (ctx->pc != 0x2C07F4u) { return; }
    ctx->pc = 0x2C07F4u;
label_2c07f4:
    // 0x2c07f4: 0xc0b01dc  call pbDmaFinished
    ctx->pc = 0x2C07F4u;
    SET_GPR_U32(ctx, 31, 0x2C07FCu);
    ctx->pc = 0x2C0770u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaFinished_0x2c0770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07FCu; }
        {
            static int _dmafin = 0;
            _dmafin++;
            if (_dmafin <= 25 || (_dmafin % 50000 == 0))
                printf("[pbDmaWaitFinished #%d] after pbDmaFinished  v0=0x%x(%u)  (0=busy ->loop, non-zero=done)\n",
                       _call, GPR_U32(ctx, 2), GPR_U32(ctx, 2));
        }
    }
    if (ctx->pc != 0x2C07FCu) { return; }
    ctx->pc = 0x2C07FCu;
    // 0x2c07fc: 0x1040fff6  beq v0,0 -> loop back to label_2c07d8
    ctx->pc = 0x2C07FCu;
    {
        const bool branch_taken_0x2c07fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0800u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2c07fc) {
            ctx->pc = 0x2C07D8u;
            goto label_2c07d8;
        }
    }
    printf("[pbDmaWaitFinished #%d] EXIT   v0=0x%x (DMA done)\n", _call, GPR_U32(ctx, 2));
    ctx->pc = 0x2C0804u;
    // 0x2c0804: 0x2402ffff
    ctx->pc = 0x2c0804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0808: 0xac622948
    ctx->pc = 0x2c0808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10568), GPR_U32(ctx, 2));
    // 0x2c080c: 0xdfbf0030
    ctx->pc = 0x2c080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0810: 0xdfb20020
    ctx->pc = 0x2c0810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0814: 0xdfb10010
    ctx->pc = 0x2c0814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0818: 0xdfb00000
    ctx->pc = 0x2c0818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c081c: 0x3e00008
    ctx->pc = 0x2C081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C07D8u: goto label_2c07d8;
            case 0x2C07F4u: goto label_2c07f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0824u;
}
