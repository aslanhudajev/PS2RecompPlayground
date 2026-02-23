#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cosf
// Address: 0x1504c0 - 0x1505a8
void cosf_0x1504c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cosf");


    ctx->pc = 0x1504c0u;

    // 0x1504c0: 0x44026000
    ctx->pc = 0x1504c0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x1504c4: 0x27bdffe0
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1504c8: 0x40202d
    ctx->pc = 0x1504c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504cc: 0x3c037fff
    ctx->pc = 0x1504ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x1504d0: 0x3463ffff
    ctx->pc = 0x1504d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1504d4: 0x3c023f49
    ctx->pc = 0x1504d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x1504d8: 0x832024
    ctx->pc = 0x1504d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1504dc: 0x34420fd8
    ctx->pc = 0x1504dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4056));
    // 0x1504e0: 0x44102a
    ctx->pc = 0x1504e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1504e4: 0x14400006
    ctx->pc = 0x1504E4u;
    {
        const bool branch_taken_0x1504e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1504E8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1504e4) {
            ctx->pc = 0x150500u;
            goto label_150500;
        }
    }
    ctx->pc = 0x1504ECu;
    // 0x1504ec: 0x44806800
    ctx->pc = 0x1504ecu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1504f0: 0xc053d74
    ctx->pc = 0x1504F0u;
    SET_GPR_U32(ctx, 31, 0x1504F8u);
    ctx->pc = 0x14F5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x14f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504F8u; }
        else if (ctx->pc != 0x1504F8u) { ctx->pc = 0x1504F8u; }
    }
    if (ctx->pc != 0x1504F8u) { return; }
    ctx->pc = 0x1504F8u;
    // 0x1504f8: 0x10000029
    ctx->pc = 0x1504F8u;
    {
        const bool branch_taken_0x1504f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1504FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1504f8) {
            ctx->pc = 0x1505A0u;
            goto label_1505a0;
        }
    }
    ctx->pc = 0x150500u;
label_150500:
    // 0x150500: 0x3c027f7f
    ctx->pc = 0x150500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x150504: 0x3442ffff
    ctx->pc = 0x150504u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x150508: 0x44102a
    ctx->pc = 0x150508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x15050c: 0x10400003
    ctx->pc = 0x15050Cu;
    {
        const bool branch_taken_0x15050c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15050c) {
            ctx->pc = 0x15051Cu;
            goto label_15051c;
        }
    }
    ctx->pc = 0x150514u;
    // 0x150514: 0x10000021
    ctx->pc = 0x150514u;
    {
        const bool branch_taken_0x150514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150518u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x150514) {
            ctx->pc = 0x15059Cu;
            goto label_15059c;
        }
    }
    ctx->pc = 0x15051Cu;
label_15051c:
    // 0x15051c: 0xc05384a
    ctx->pc = 0x15051Cu;
    SET_GPR_U32(ctx, 31, 0x150524u);
    ctx->pc = 0x150520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14E128u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x14e128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150524u; }
        else if (ctx->pc != 0x150524u) { ctx->pc = 0x150524u; }
    }
    if (ctx->pc != 0x150524u) { return; }
    ctx->pc = 0x150524u;
    // 0x150524: 0x30430003
    ctx->pc = 0x150524u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x150528: 0x24020001
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15052c: 0x1062000f
    ctx->pc = 0x15052Cu;
    {
        const bool branch_taken_0x15052c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x150530u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x15052c) {
            ctx->pc = 0x15056Cu;
            goto label_15056c;
        }
    }
    ctx->pc = 0x150534u;
    // 0x150534: 0x10400005
    ctx->pc = 0x150534u;
    {
        const bool branch_taken_0x150534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x150534) {
            ctx->pc = 0x15054Cu;
            goto label_15054c;
        }
    }
    ctx->pc = 0x15053Cu;
    // 0x15053c: 0x10600007
    ctx->pc = 0x15053Cu;
    {
        const bool branch_taken_0x15053c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x150540u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x15053c) {
            ctx->pc = 0x15055Cu;
            goto label_15055c;
        }
    }
    ctx->pc = 0x150544u;
    // 0x150544: 0x10000013
    ctx->pc = 0x150544u;
    {
        const bool branch_taken_0x150544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150548u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x150544) {
            ctx->pc = 0x150594u;
            goto label_150594;
        }
    }
    ctx->pc = 0x15054Cu;
label_15054c:
    // 0x15054c: 0x1062000d
    ctx->pc = 0x15054Cu;
    {
        const bool branch_taken_0x15054c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x150550u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x15054c) {
            ctx->pc = 0x150584u;
            goto label_150584;
        }
    }
    ctx->pc = 0x150554u;
    // 0x150554: 0x1000000f
    ctx->pc = 0x150554u;
    {
        const bool branch_taken_0x150554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150558u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x150554) {
            ctx->pc = 0x150594u;
            goto label_150594;
        }
    }
    ctx->pc = 0x15055Cu;
label_15055c:
    // 0x15055c: 0xc053d74
    ctx->pc = 0x15055Cu;
    SET_GPR_U32(ctx, 31, 0x150564u);
    ctx->pc = 0x150560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x14F5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x14f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150564u; }
        else if (ctx->pc != 0x150564u) { ctx->pc = 0x150564u; }
    }
    if (ctx->pc != 0x150564u) { return; }
    ctx->pc = 0x150564u;
    // 0x150564: 0x1000000e
    ctx->pc = 0x150564u;
    {
        const bool branch_taken_0x150564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150568u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x150564) {
            ctx->pc = 0x1505A0u;
            goto label_1505a0;
        }
    }
    ctx->pc = 0x15056Cu;
label_15056c:
    // 0x15056c: 0xc7ac0000
    ctx->pc = 0x15056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150570: 0x24040001
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150574: 0xc05401e
    ctx->pc = 0x150574u;
    SET_GPR_U32(ctx, 31, 0x15057Cu);
    ctx->pc = 0x150578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x150078u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x150078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15057Cu; }
        else if (ctx->pc != 0x15057Cu) { ctx->pc = 0x15057Cu; }
    }
    if (ctx->pc != 0x15057Cu) { return; }
    ctx->pc = 0x15057Cu;
    // 0x15057c: 0x10000007
    ctx->pc = 0x15057Cu;
    {
        const bool branch_taken_0x15057c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150580u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x15057c) {
            ctx->pc = 0x15059Cu;
            goto label_15059c;
        }
    }
    ctx->pc = 0x150584u;
label_150584:
    // 0x150584: 0xc053d74
    ctx->pc = 0x150584u;
    SET_GPR_U32(ctx, 31, 0x15058Cu);
    ctx->pc = 0x150588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x14F5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x14f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15058Cu; }
        else if (ctx->pc != 0x15058Cu) { ctx->pc = 0x15058Cu; }
    }
    if (ctx->pc != 0x15058Cu) { return; }
    ctx->pc = 0x15058Cu;
    // 0x15058c: 0x10000003
    ctx->pc = 0x15058Cu;
    {
        const bool branch_taken_0x15058c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150590u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x15058c) {
            ctx->pc = 0x15059Cu;
            goto label_15059c;
        }
    }
    ctx->pc = 0x150594u;
label_150594:
    // 0x150594: 0xc05401e
    ctx->pc = 0x150594u;
    SET_GPR_U32(ctx, 31, 0x15059Cu);
    ctx->pc = 0x150598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x150078u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x150078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15059Cu; }
        else if (ctx->pc != 0x15059Cu) { ctx->pc = 0x15059Cu; }
    }
    if (ctx->pc != 0x15059Cu) { return; }
    ctx->pc = 0x15059Cu;
label_15059c:
    // 0x15059c: 0xdfbf0010
    ctx->pc = 0x15059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1505a0:
    // 0x1505a0: 0x3e00008
    ctx->pc = 0x1505A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1505A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150500u: goto label_150500;
            case 0x15051Cu: goto label_15051c;
            case 0x15054Cu: goto label_15054c;
            case 0x15055Cu: goto label_15055c;
            case 0x15056Cu: goto label_15056c;
            case 0x150584u: goto label_150584;
            case 0x150594u: goto label_150594;
            case 0x15059Cu: goto label_15059c;
            case 0x1505A0u: goto label_1505a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1505A8u;
}
