#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _peepBit
// Address: 0x161500 - 0x161634
void _peepBit_0x161500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_peepBit");


    ctx->pc = 0x161500u;

    // 0x161500: 0x27bdffa0
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161504: 0xffb40040
    ctx->pc = 0x161504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x161508: 0x3c140023
    ctx->pc = 0x161508u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x16150c: 0xffb10010
    ctx->pc = 0x16150cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161510: 0x8e82a264
    ctx->pc = 0x161510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294943332)));
    // 0x161514: 0x80882d
    ctx->pc = 0x161514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161518: 0xffbf0050
    ctx->pc = 0x161518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16151c: 0xffb30030
    ctx->pc = 0x16151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x161520: 0xffb20020
    ctx->pc = 0x161520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161524: 0x14400008
    ctx->pc = 0x161524u;
    {
        const bool branch_taken_0x161524 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161528u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x161524) {
            ctx->pc = 0x161548u;
            goto label_161548;
        }
    }
    ctx->pc = 0x16152Cu;
    // 0x16152c: 0x3c130023
    ctx->pc = 0x16152cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x161530: 0x8e62aadc
    ctx->pc = 0x161530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294945500)));
    // 0x161534: 0x51102a
    ctx->pc = 0x161534u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x161538: 0x10400032
    ctx->pc = 0x161538u;
    {
        const bool branch_taken_0x161538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16153Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x161538) {
            ctx->pc = 0x161604u;
            goto label_161604;
        }
    }
    ctx->pc = 0x161540u;
    // 0x161540: 0x10000003
    ctx->pc = 0x161540u;
    {
        const bool branch_taken_0x161540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161540) {
            ctx->pc = 0x161550u;
            goto label_161550;
        }
    }
    ctx->pc = 0x161548u;
label_161548:
    // 0x161548: 0x3c130023
    ctx->pc = 0x161548u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x16154c: 0x3c021000
    ctx->pc = 0x16154cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_161550:
    // 0x161550: 0x3c048000
    ctx->pc = 0x161550u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x161554: 0x34422010
    ctx->pc = 0x161554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x161558: 0x34844000
    ctx->pc = 0x161558u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x16155c: 0x8c430000
    ctx->pc = 0x16155cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x161560: 0x3c028000
    ctx->pc = 0x161560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x161564: 0x641824
    ctx->pc = 0x161564u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161568: 0x14620016
    ctx->pc = 0x161568u;
    {
        const bool branch_taken_0x161568 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16156Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161568) {
            ctx->pc = 0x1615C4u;
            goto label_1615c4;
        }
    }
    ctx->pc = 0x161570u;
    // 0x161570: 0x3c100023
    ctx->pc = 0x161570u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161574: 0x3c120023
    ctx->pc = 0x161574u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
label_161578:
    // 0x161578: 0xc0102d
    ctx->pc = 0x161578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16157c: 0x28421389
    ctx->pc = 0x16157cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x161580: 0x14400005
    ctx->pc = 0x161580u;
    {
        const bool branch_taken_0x161580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161584u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x161580) {
            ctx->pc = 0x161598u;
            goto label_161598;
        }
    }
    ctx->pc = 0x161588u;
    // 0x161588: 0x3c020023
    ctx->pc = 0x161588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16158c: 0xc058f00
    ctx->pc = 0x16158Cu;
    SET_GPR_U32(ctx, 31, 0x161594u);
    ctx->pc = 0x161590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161594u; }
        else if (ctx->pc != 0x161594u) { ctx->pc = 0x161594u; }
    }
    if (ctx->pc != 0x161594u) { return; }
    ctx->pc = 0x161594u;
    // 0x161594: 0x302d
    ctx->pc = 0x161594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161598:
    // 0x161598: 0x3c031000
    ctx->pc = 0x161598u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x16159c: 0x3c048000
    ctx->pc = 0x16159cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1615a0: 0x34632010
    ctx->pc = 0x1615a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1615a4: 0x34844000
    ctx->pc = 0x1615a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x1615a8: 0x8c620000
    ctx->pc = 0x1615a8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1615ac: 0x3c058000
    ctx->pc = 0x1615acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1615b0: 0x441024
    ctx->pc = 0x1615b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1615b4: 0x1045fff0
    ctx->pc = 0x1615B4u;
    {
        const bool branch_taken_0x1615b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1615B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x1615b4) {
            ctx->pc = 0x161578u;
            goto label_161578;
        }
    }
    ctx->pc = 0x1615BCu;
    // 0x1615bc: 0x10000005
    ctx->pc = 0x1615BCu;
    {
        const bool branch_taken_0x1615bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1615C0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
        if (branch_taken_0x1615bc) {
            ctx->pc = 0x1615D4u;
            goto label_1615d4;
        }
    }
    ctx->pc = 0x1615C4u;
label_1615c4:
    // 0x1615c4: 0x3c100023
    ctx->pc = 0x1615c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1615c8: 0x3c120023
    ctx->pc = 0x1615c8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1615cc: 0x3c021000
    ctx->pc = 0x1615ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1615d0: 0x3c054000
    ctx->pc = 0x1615d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
label_1615d4:
    // 0x1615d4: 0x34422000
    ctx->pc = 0x1615d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x1615d8: 0x2604a148
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294943048));
    // 0x1615dc: 0xac450000
    ctx->pc = 0x1615dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x1615e0: 0x8c830010
    ctx->pc = 0x1615e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1615e4: 0xc0584a6
    ctx->pc = 0x1615E4u;
    SET_GPR_U32(ctx, 31, 0x1615ECu);
    ctx->pc = 0x1615E8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943332), GPR_U32(ctx, 3));
    ctx->pc = 0x161298u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x161298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615ECu; }
        else if (ctx->pc != 0x1615ECu) { ctx->pc = 0x1615ECu; }
    }
    if (ctx->pc != 0x1615ECu) { return; }
    ctx->pc = 0x1615ECu;
    // 0x1615ec: 0x2103c
    ctx->pc = 0x1615ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1615f0: 0x2103f
    ctx->pc = 0x1615f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1615f4: 0x24030020
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1615f8: 0xae63aadc
    ctx->pc = 0x1615f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945500), GPR_U32(ctx, 3));
    // 0x1615fc: 0x10000002
    ctx->pc = 0x1615FCu;
    {
        const bool branch_taken_0x1615fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161600u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945496), GPR_U32(ctx, 2));
        if (branch_taken_0x1615fc) {
            ctx->pc = 0x161608u;
            goto label_161608;
        }
    }
    ctx->pc = 0x161604u;
label_161604:
    // 0x161604: 0x3c120023
    ctx->pc = 0x161604u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
label_161608:
    // 0x161608: 0x8e43aad8
    ctx->pc = 0x161608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294945496)));
    // 0x16160c: 0x111023
    ctx->pc = 0x16160cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x161610: 0xdfbf0050
    ctx->pc = 0x161610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161614: 0xdfb40040
    ctx->pc = 0x161614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161618: 0x431006
    ctx->pc = 0x161618u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x16161c: 0xdfb30030
    ctx->pc = 0x16161cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161620: 0xdfb20020
    ctx->pc = 0x161620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161624: 0xdfb10010
    ctx->pc = 0x161624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161628: 0xdfb00000
    ctx->pc = 0x161628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16162c: 0x3e00008
    ctx->pc = 0x16162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161548u: goto label_161548;
            case 0x161550u: goto label_161550;
            case 0x161578u: goto label_161578;
            case 0x161598u: goto label_161598;
            case 0x1615C4u: goto label_1615c4;
            case 0x1615D4u: goto label_1615d4;
            case 0x161604u: goto label_161604;
            case 0x161608u: goto label_161608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161634u;
}
