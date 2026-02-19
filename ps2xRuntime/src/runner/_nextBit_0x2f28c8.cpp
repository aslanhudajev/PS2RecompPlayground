#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextBit
// Address: 0x2f28c8 - 0x2f2a30
void _nextBit_0x2f28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f28c8u;

    // 0x2f28c8: 0x27bdffa0
    ctx->pc = 0x2f28c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f28cc: 0x3c021000
    ctx->pc = 0x2f28ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f28d0: 0xffb10010
    ctx->pc = 0x2f28d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f28d4: 0x34422010
    ctx->pc = 0x2f28d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f28d8: 0xffbf0050
    ctx->pc = 0x2f28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f28dc: 0x3c058000
    ctx->pc = 0x2f28dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f28e0: 0xffb40040
    ctx->pc = 0x2f28e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f28e4: 0x34a54000
    ctx->pc = 0x2f28e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x2f28e8: 0xffb30030
    ctx->pc = 0x2f28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f28ec: 0x80882d
    ctx->pc = 0x2f28ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28f0: 0xffb20020
    ctx->pc = 0x2f28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f28f4: 0x302d
    ctx->pc = 0x2f28f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28f8: 0xffb00000
    ctx->pc = 0x2f28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f28fc: 0x8c430000
    ctx->pc = 0x2f28fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2900: 0x3c028000
    ctx->pc = 0x2f2900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f2904: 0x651824
    ctx->pc = 0x2f2904u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f2908: 0x14620018
    ctx->pc = 0x2F2908u;
    {
        const bool branch_taken_0x2f2908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F290Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
        if (branch_taken_0x2f2908) {
            ctx->pc = 0x2F296Cu;
            goto label_2f296c;
        }
    }
    ctx->pc = 0x2F2910u;
    // 0x2f2910: 0x3c10003a
    ctx->pc = 0x2f2910u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2914: 0x3c14003a
    ctx->pc = 0x2f2914u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2918: 0x3c12003a
    ctx->pc = 0x2f2918u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f291c: 0x0
    ctx->pc = 0x2f291cu;
    // NOP
label_2f2920:
    // 0x2f2920: 0xc0102d
    ctx->pc = 0x2f2920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2924: 0x28421389
    ctx->pc = 0x2f2924u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f2928: 0x14400005
    ctx->pc = 0x2F2928u;
    {
        const bool branch_taken_0x2f2928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F292Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2f2928) {
            ctx->pc = 0x2F2940u;
            goto label_2f2940;
        }
    }
    ctx->pc = 0x2F2930u;
    // 0x2f2930: 0x3c02003a
    ctx->pc = 0x2f2930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f2934: 0xc0bb848
    ctx->pc = 0x2F2934u;
    SET_GPR_U32(ctx, 31, 0x2F293Cu);
    ctx->pc = 0x2F2938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F293Cu; }
    }
    if (ctx->pc != 0x2F293Cu) { return; }
    ctx->pc = 0x2F293Cu;
    // 0x2f293c: 0x302d
    ctx->pc = 0x2f293cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2940:
    // 0x2f2940: 0x3c031000
    ctx->pc = 0x2f2940u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f2944: 0x3c048000
    ctx->pc = 0x2f2944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f2948: 0x34632010
    ctx->pc = 0x2f2948u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f294c: 0x34844000
    ctx->pc = 0x2f294cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f2950: 0x8c620000
    ctx->pc = 0x2f2950u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f2954: 0x3c058000
    ctx->pc = 0x2f2954u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f2958: 0x441024
    ctx->pc = 0x2f2958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f295c: 0x1045fff0
    ctx->pc = 0x2F295Cu;
    {
        const bool branch_taken_0x2f295c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F2960u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12388)));
        if (branch_taken_0x2f295c) {
            ctx->pc = 0x2F2920u;
            goto label_2f2920;
        }
    }
    ctx->pc = 0x2F2964u;
    // 0x2f2964: 0x10000005
    ctx->pc = 0x2F2964u;
    {
        const bool branch_taken_0x2f2964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2964) {
            ctx->pc = 0x2F297Cu;
            goto label_2f297c;
        }
    }
    ctx->pc = 0x2F296Cu;
label_2f296c:
    // 0x2f296c: 0x3c10003a
    ctx->pc = 0x2f296cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2970: 0x3c14003a
    ctx->pc = 0x2f2970u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2974: 0x3c12003a
    ctx->pc = 0x2f2974u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2978: 0x8e623064
    ctx->pc = 0x2f2978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12388)));
label_2f297c:
    // 0x2f297c: 0x14400005
    ctx->pc = 0x2F297Cu;
    {
        const bool branch_taken_0x2f297c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2980u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f297c) {
            ctx->pc = 0x2F2994u;
            goto label_2f2994;
        }
    }
    ctx->pc = 0x2F2984u;
    // 0x2f2984: 0x8e0238dc
    ctx->pc = 0x2f2984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 14556)));
    // 0x2f2988: 0x51102a
    ctx->pc = 0x2f2988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x2f298c: 0x1040000b
    ctx->pc = 0x2F298Cu;
    {
        const bool branch_taken_0x2f298c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2990u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f298c) {
            ctx->pc = 0x2F29BCu;
            goto label_2f29bc;
        }
    }
    ctx->pc = 0x2F2994u;
label_2f2994:
    // 0x2f2994: 0x3c054000
    ctx->pc = 0x2f2994u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x2f2998: 0x34422000
    ctx->pc = 0x2f2998u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2f299c: 0x26843948
    ctx->pc = 0x2f299cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 14664));
    // 0x2f29a0: 0xac450000
    ctx->pc = 0x2f29a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x2f29a4: 0x8c830010
    ctx->pc = 0x2f29a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f29a8: 0xc0bc904
    ctx->pc = 0x2F29A8u;
    SET_GPR_U32(ctx, 31, 0x2F29B0u);
    ctx->pc = 0x2F29ACu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12388), GPR_U32(ctx, 3));
    ctx->pc = 0x2F2410u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x2f2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29B0u; }
    }
    if (ctx->pc != 0x2F29B0u) { return; }
    ctx->pc = 0x2F29B0u;
    // 0x2f29b0: 0x2103c
    ctx->pc = 0x2f29b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f29b4: 0x2103f
    ctx->pc = 0x2f29b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f29b8: 0xae4238d8
    ctx->pc = 0x2f29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14552), GPR_U32(ctx, 2));
label_2f29bc:
    // 0x2f29bc: 0x24050020
    ctx->pc = 0x2f29bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f29c0: 0x3c044000
    ctx->pc = 0x2f29c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x2f29c4: 0xae0538dc
    ctx->pc = 0x2f29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14556), GPR_U32(ctx, 5));
    // 0x2f29c8: 0x3c021000
    ctx->pc = 0x2f29c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f29cc: 0x2242025
    ctx->pc = 0x2f29ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2f29d0: 0x8e5038d8
    ctx->pc = 0x2f29d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 14552)));
    // 0x2f29d4: 0x34422000
    ctx->pc = 0x2f29d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2f29d8: 0x41f02
    ctx->pc = 0x2f29d8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 28));
    // 0x2f29dc: 0xac440000
    ctx->pc = 0x2f29dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2f29e0: 0x31880
    ctx->pc = 0x2f29e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f29e4: 0x26823948
    ctx->pc = 0x2f29e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 14664));
    // 0x2f29e8: 0xb12823
    ctx->pc = 0x2f29e8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2f29ec: 0x621821
    ctx->pc = 0x2f29ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f29f0: 0xb08006
    ctx->pc = 0x2f29f0u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f29f4: 0x8c620000
    ctx->pc = 0x2f29f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f29f8: 0xc0bc904
    ctx->pc = 0x2F29F8u;
    SET_GPR_U32(ctx, 31, 0x2F2A00u);
    ctx->pc = 0x2F29FCu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12388), GPR_U32(ctx, 2));
    ctx->pc = 0x2F2410u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x2f2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A00u; }
    }
    if (ctx->pc != 0x2F2A00u) { return; }
    ctx->pc = 0x2F2A00u;
    // 0x2f2a00: 0x2103c
    ctx->pc = 0x2f2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2a04: 0x2103f
    ctx->pc = 0x2f2a04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f2a08: 0xdfbf0050
    ctx->pc = 0x2f2a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2a0c: 0xae4238d8
    ctx->pc = 0x2f2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14552), GPR_U32(ctx, 2));
    // 0x2f2a10: 0x200102d
    ctx->pc = 0x2f2a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a14: 0xdfb40040
    ctx->pc = 0x2f2a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2a18: 0xdfb30030
    ctx->pc = 0x2f2a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2a1c: 0xdfb20020
    ctx->pc = 0x2f2a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2a20: 0xdfb10010
    ctx->pc = 0x2f2a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2a24: 0xdfb00000
    ctx->pc = 0x2f2a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a28: 0x3e00008
    ctx->pc = 0x2F2A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2A2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2920u: goto label_2f2920;
            case 0x2F2940u: goto label_2f2940;
            case 0x2F296Cu: goto label_2f296c;
            case 0x2F297Cu: goto label_2f297c;
            case 0x2F2994u: goto label_2f2994;
            case 0x2F29BCu: goto label_2f29bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2A30u;
}
