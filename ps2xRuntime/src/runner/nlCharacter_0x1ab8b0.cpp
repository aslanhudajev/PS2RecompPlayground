#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCharacter
// Address: 0x1ab8b0 - 0x1aba44
void nlCharacter_0x1ab8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCharacter");


    ctx->pc = 0x1ab8b0u;

    // 0x1ab8b0: 0x27bdffc0
    ctx->pc = 0x1ab8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab8b4: 0x7fbf0030
    ctx->pc = 0x1ab8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ab8b8: 0x7fb20020
    ctx->pc = 0x1ab8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab8bc: 0x7fb10010
    ctx->pc = 0x1ab8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab8c0: 0x7fb00000
    ctx->pc = 0x1ab8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab8c4: 0x70809628
    ctx->pc = 0x1ab8c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ab8c8: 0x8f848a60
    ctx->pc = 0x1ab8c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab8cc: 0x3c037000
    ctx->pc = 0x1ab8ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x1ab8d0: 0x34634000
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x1ab8d4: 0x70a08e28
    ctx->pc = 0x1ab8d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ab8d8: 0x24840050
    ctx->pc = 0x1ab8d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    // 0x1ab8dc: 0x83182b
    ctx->pc = 0x1ab8dcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ab8e0: 0x14600005
    ctx->pc = 0x1AB8E0u;
    {
        const bool branch_taken_0x1ab8e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB8E4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ab8e0) {
            ctx->pc = 0x1AB8F8u;
            goto label_1ab8f8;
        }
    }
    ctx->pc = 0x1AB8E8u;
    // 0x1ab8e8: 0xc06ae0c
    ctx->pc = 0x1AB8E8u;
    SET_GPR_U32(ctx, 31, 0x1AB8F0u);
    ctx->pc = 0x1AB830u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCharacterPost_0x1ab830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F0u; }
        else if (ctx->pc != 0x1AB8F0u) { ctx->pc = 0x1AB8F0u; }
    }
    if (ctx->pc != 0x1AB8F0u) { return; }
    ctx->pc = 0x1AB8F0u;
    // 0x1ab8f0: 0xc06adb8
    ctx->pc = 0x1AB8F0u;
    SET_GPR_U32(ctx, 31, 0x1AB8F8u);
    ctx->pc = 0x1AB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCharacterPre_0x1ab6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F8u; }
        else if (ctx->pc != 0x1AB8F8u) { ctx->pc = 0x1AB8F8u; }
    }
    if (ctx->pc != 0x1AB8F8u) { return; }
    ctx->pc = 0x1AB8F8u;
label_1ab8f8:
    // 0x1ab8f8: 0x24030005
    ctx->pc = 0x1ab8f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab8fc: 0x3203c
    ctx->pc = 0x1ab8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab900: 0x3403dd40
    ctx->pc = 0x1ab900u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 56640));
    // 0x1ab904: 0x31c38
    ctx->pc = 0x1ab904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab908: 0x34638000
    ctx->pc = 0x1ab908u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x1ab90c: 0x8f858340
    ctx->pc = 0x1ab90cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x1ab910: 0x641825
    ctx->pc = 0x1ab910u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab914: 0xa33025
    ctx->pc = 0x1ab914u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab918: 0x8f85833c
    ctx->pc = 0x1ab918u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935356)));
    // 0x1ab91c: 0x3c032010
    ctx->pc = 0x1ab91cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8208 << 16));
    // 0x1ab920: 0x3203c
    ctx->pc = 0x1ab920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab924: 0x8f838a60
    ctx->pc = 0x1ab924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab928: 0x5297c
    ctx->pc = 0x1ab928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x1ab92c: 0xc52825
    ctx->pc = 0x1ab92cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ab930: 0xa42025
    ctx->pc = 0x1ab930u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ab934: 0xfc640000
    ctx->pc = 0x1ab934u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1ab938: 0x8f838a58
    ctx->pc = 0x1ab938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x1ab93c: 0x14600035
    ctx->pc = 0x1AB93Cu;
    {
        const bool branch_taken_0x1ab93c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB940u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
        if (branch_taken_0x1ab93c) {
            ctx->pc = 0x1ABA14u;
            goto label_1aba14;
        }
    }
    ctx->pc = 0x1AB944u;
    // 0x1ab944: 0x4263f
    ctx->pc = 0x1ab944u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1ab948: 0x3083000f
    ctx->pc = 0x1ab948u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 15));
    // 0x1ab94c: 0x341c0
    ctx->pc = 0x1ab94cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 7));
    // 0x1ab950: 0x41903
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1ab954: 0x3063000f
    ctx->pc = 0x1ab954u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1ab958: 0x318c0
    ctx->pc = 0x1ab958u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ab95c: 0x24630008
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ab960: 0x34900
    ctx->pc = 0x1ab960u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab964: 0x8f838a60
    ctx->pc = 0x1ab964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab968: 0x25070080
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 128));
    // 0x1ab96c: 0x25260080
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 9), 128));
    // 0x1ab970: 0x122900
    ctx->pc = 0x1ab970u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ab974: 0x112100
    ctx->pc = 0x1ab974u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1ab978: 0xac680010
    ctx->pc = 0x1ab978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x1ab97c: 0x8f838a60
    ctx->pc = 0x1ab97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab980: 0xac690014
    ctx->pc = 0x1ab980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 9));
    // 0x1ab984: 0x8f838a60
    ctx->pc = 0x1ab984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab988: 0xac670030
    ctx->pc = 0x1ab988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 7));
    // 0x1ab98c: 0x8f838a60
    ctx->pc = 0x1ab98cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab990: 0xac660034
    ctx->pc = 0x1ab990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 6));
    // 0x1ab994: 0x8f838a60
    ctx->pc = 0x1ab994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab998: 0xac650020
    ctx->pc = 0x1ab998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1ab99c: 0x8f838a60
    ctx->pc = 0x1ab99cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab9a0: 0xac640024
    ctx->pc = 0x1ab9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x1ab9a4: 0x8f848a84
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x1ab9a8: 0x8f838a60
    ctx->pc = 0x1ab9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab9ac: 0x2442021
    ctx->pc = 0x1ab9acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1ab9b0: 0x42100
    ctx->pc = 0x1ab9b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ab9b4: 0xac640040
    ctx->pc = 0x1ab9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x1ab9b8: 0x8f848a80
    ctx->pc = 0x1ab9b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x1ab9bc: 0x8f838a60
    ctx->pc = 0x1ab9bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab9c0: 0x2242021
    ctx->pc = 0x1ab9c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1ab9c4: 0x42100
    ctx->pc = 0x1ab9c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ab9c8: 0xac640044
    ctx->pc = 0x1ab9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x1ab9cc: 0xc7818a14
    ctx->pc = 0x1ab9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab9d0: 0xc7808338
    ctx->pc = 0x1ab9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab9d4: 0xc7828a18
    ctx->pc = 0x1ab9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ab9d8: 0x8f838a60
    ctx->pc = 0x1ab9d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1ab9dc: 0x46000802
    ctx->pc = 0x1ab9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab9e0: 0x46001087
    ctx->pc = 0x1ab9e0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1ab9e4: 0x46001000
    ctx->pc = 0x1ab9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ab9e8: 0x46000024
    ctx->pc = 0x1ab9e8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ab9ec: 0x44040000
    ctx->pc = 0x1ab9ecu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1ab9f0: 0x0
    ctx->pc = 0x1ab9f0u;
    // NOP
    // 0x1ab9f4: 0x42103
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1ab9f8: 0xac640048
    ctx->pc = 0x1ab9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x1ab9fc: 0x8f838a60
    ctx->pc = 0x1ab9fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1aba00: 0xac640028
    ctx->pc = 0x1aba00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x1aba04: 0x8f838a60
    ctx->pc = 0x1aba04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1aba08: 0xac60004c
    ctx->pc = 0x1aba08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1aba0c: 0x8f838a60
    ctx->pc = 0x1aba0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1aba10: 0xac60002c
    ctx->pc = 0x1aba10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_1aba14:
    // 0x1aba14: 0x8f848a60
    ctx->pc = 0x1aba14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x1aba18: 0x8f838a5c
    ctx->pc = 0x1aba18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1aba1c: 0x24840050
    ctx->pc = 0x1aba1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    // 0x1aba20: 0x24630001
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aba24: 0xaf848a60
    ctx->pc = 0x1aba24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 4));
    // 0x1aba28: 0xaf838a5c
    ctx->pc = 0x1aba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937180), GPR_U32(ctx, 3));
    // 0x1aba2c: 0x7bbf0030
    ctx->pc = 0x1aba2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aba30: 0x7bb20020
    ctx->pc = 0x1aba30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aba34: 0x7bb10010
    ctx->pc = 0x1aba34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aba38: 0x7bb00000
    ctx->pc = 0x1aba38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aba3c: 0x3e00008
    ctx->pc = 0x1ABA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB8F8u: goto label_1ab8f8;
            case 0x1ABA14u: goto label_1aba14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABA44u;
}
